/*
2 * common.h - заголовочный файл со стандартными определениями
3 */
#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>       /* time_t, time, ctime */
#include <sys/file.h> /* flock */
#include <sys/select.h> /* select */
#define FIFO_NAME "/tmp/fifo"
#define MAX_BUFF 80
#endif /* __COMMON_H__ */
