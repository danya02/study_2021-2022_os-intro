/*
* server.c - реализация сервера
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/
#include "common.h"
#ifndef S_IFIFO
// если нет определения S_IFIFO, то определим его
// (для автодополнения, не портативно)
#define S_IFIFO 4096
#endif

int main() {
    int readfd; /* дескриптор для чтения из FIFO */
    int n;
    char buff[MAX_BUFF]; /* буфер для чтения данных из FIFO */

    /* баннер */
    fprintf(stderr, "New FIFO Server...\n");
    /* создаем файл FIFO с открытыми для всех
     * правами доступа на чтение и запись
    */
    if(mknod(FIFO_NAME, S_IFIFO | 0666, 0) < 0){
        fprintf(stderr, "%s: Невозможно создать FIFO (%s)\n",
        __FILE__, strerror(errno));
        exit(-1);
    }

    fprintf(stderr, "FIFO created, waiting to open.\n");

    /* откроем FIFO на чтение */
    if((readfd = open(FIFO_NAME, O_RDONLY)) < 0) {
        fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n",
        __FILE__, strerror(errno));
        exit(-2);
    }

    fprintf(stderr, "FIFO opened, reading.\n");
    time_t start = time(NULL);

    /* читаем данные из FIFO и выводим на экран */
    while((n = read(readfd, buff, MAX_BUFF)) > 0){
        if(write(1, buff, n) != n) {
            fprintf(stderr, "%s: Ошибка вывода (%s)\n",
            __FILE__, strerror(errno));
            exit(-3);
        }

        time_t now = time(NULL);
        
        if(now - start > 30) {
            fprintf(stderr, "30 seconds passed, closing.\n");
            break;
        }
    }


    fprintf(stderr, "Removing FIFO and exiting.\n");

    close(readfd); /* закроем FIFO */
    /* удалим FIFO из системы */
    if(unlink(FIFO_NAME) < 0) {
        fprintf(stderr, "%s: Невозможно удалить FIFO (%s)\n",
        __FILE__, strerror(errno));
        exit(-4);
    }

    exit(0);
}