---
## Front matter
lang: ru-RU
title: Лабораторная работа 6
author: |
  Генералов Даниил, НПИ-01-21, 1032212280
institute: |
	\inst{1}RUDN University, Moscow, Russian Federation
date: 7 May, 2022

## Formatting
toc: false
slide_level: 2
theme: metropolis
header-includes: 
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
aspectratio: 43
section-titles: true
---

# Цель работы

Ознакомление с инструментами поиска файлов и фильтрации текстовых данных.
Приобретение практических навыков: по управлению процессами (и заданиями), по
проверке использования диска и обслуживанию файловых систем.

## Задачи

- Научиться пользоваться программами `find` и `grep` для поиска файлов.
- Опробовать команды `ps` и `kill` для управления процессами.
- Научиться пользоваться программами `du` и `df` для получения информации о дисках.
- Узнать, как работает управление задачами в Bash.

# Ход работы

## Поиск строк в файле

Для начала предлагается создать файл, содержащий названия файлов в домашней папке и в `/etc`, и искать что-то в нем:

```sh
$ ls /etc > files.txt
$ ls ~ >> files.txt
$ grep ".conf$" files.txt
```

## Запуск программ в фоне

Нужно запустить программу, сканирующую файлы диска и сохраняющую их в файл, в фоновом режиме. Это делается с помощью знака `&` после команды:

```sh
$ find / 2>/dev/null > files.txt &
```

## Поиск и прекращение процессов

Чтобы посмотреть список процессов, можно использовать команду `ps`, и вывод затем можно отфильтровать через `grep`:

```sh
$ ps aux | grep gedit
```

Чтобы прекратить процесс, нужно ввести его PID в команду `kill`:

```sh
$ kill -TERM <PID>
```

## Просмотр общего объема диска

Чтобы узнать количество дискового пространства, занятого и доступного на примонтированных файловых системах, нужно использовать команду `df`:

```sh
$ df -h
Filesystem      Size  Used Avail Use% Mounted on
dev             7,8G     0  7,8G   0% /dev
run             7,8G  2,1M  7,8G   1% /run
/dev/dm-0       114G  101G  7,4G  94% /
tmpfs           7,8G   73M  7,7G   1% /dev/shm
tmpfs           7,8G   61M  7,7G   1% /tmp
/dev/sdb2       361G  350G   12G  97% /mnt/Data
/dev/sda1        96M   30M   67M  31% /boot/efi
tmpfs           1,6G  112K  1,6G   1% /run/user/1000
```

## Просмотр объема директории

Чтобы узнать, сколько занимает на диске текущая директория, можно использовать команду `du`:

```sh
$ du -h
4,0K	./.local/share/gegl-0.4/plug-ins
8,0K	./.local/share/gegl-0.4
8,0K	./.local/share/mc
24K	./.local/share
28K	./.local
4,0K	./.cache/gimp/2.10
8,0K	./.cache/gimp
12K	./.cache/babl
4,0K	./.cache/gegl-0.4/swap
8,0K	./.cache/gegl-0.4
4,0K	./.cache/vim/undo
4,0K	./.cache/vim/backup
4,0K	./.cache/vim/swap
16K	./.cache/vim
16K	./.cache/thumbnails/normal
20K	./.cache/thumbnails
8,0K	./.cache/mc
88K	./.cache
4,0K	./.config/procps
8,0K	./.config/mc
16K	./.config
148K	.
```

# Выводы

- Мы научились искать файлы и внутри файлов
- Мы научились управлять задачами в Bash и процессами в Linux
- Мы теперь знаем, сколько места осталось на диске
- Эти навыки помогут нам работать с файловой системой и понимать, что происходит с нашими процессами