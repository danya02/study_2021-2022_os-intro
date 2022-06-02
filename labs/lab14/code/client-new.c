/*
* client.c - реализация клиента
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/

#include "common.h"

#define MESSAGE "Hello Server!!!\n"
int main() {
    int writefd; /* дескриптор для записи в FIFO */
    int msglen;

    /* баннер */
    printf("New FIFO Client...\n");
    /* получим доступ к FIFO */
    if((writefd = open(FIFO_NAME, O_WRONLY)) < 0) {
        fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n",
        __FILE__, strerror(errno));
        exit(-1);
    }

    /* начинаем передавать сообщения серверу */

    while(1){

        time_t rawtime;
        time (&rawtime);
        
        char* time_str = ctime(&rawtime);
        int time_str_len = strlen(time_str);

        // взять блокировку на запись в FIFO
        if(flock(writefd, LOCK_EX) < 0) {
            fprintf(stderr, "%s: Невозможно получить блокировку на запись в FIFO (%s)\n",
            __FILE__, strerror(errno));
            exit(-2);
        }

        // передать сообщение серверу

        // output current PID
        char pid_str[15];
        sprintf(pid_str, "%d", getpid());
        int pid_str_len = strlen(pid_str);
        pid_str[pid_str_len] = ':'; pid_str_len++;
        pid_str[pid_str_len] = ' '; pid_str_len++;
        pid_str[pid_str_len] = '\0';
        
        if(write(writefd, pid_str, pid_str_len) != pid_str_len){
            fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n",
            __FILE__, strerror(errno));
            exit(-2);
        }

        if(write(writefd, time_str, time_str_len) != time_str_len){
            fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n",
            __FILE__, strerror(errno));
            exit(-2);
        }

        // освободить блокировку на запись в FIFO

        if(flock(writefd, LOCK_UN) < 0) {
            fprintf(stderr, "%s: Невозможно освободить блокировку на запись в FIFO (%s)\n",
            __FILE__, strerror(errno));
            exit(-2);
        }

        // подождать 5 секунд
        sleep(5);

    }

    /* закроем доступ к FIFO */
    close(writefd);
    exit(0);
}