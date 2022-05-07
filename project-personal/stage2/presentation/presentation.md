---
## Front matter
lang: ru-RU
title: Индивидуальный проект 2
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

# Цель и задачи

Добавить контент на сайт.

## Задачи

  - Добавить информацию о себе.
  - Добавить две статьи.

# Ход работы

## Добавление информации о себе
  - Информация по авторам хранится в папке `content/authors`
  - Чтобы добавить информацию о себе, нужно только отредактировать `content/authors/admin/_index.md`
  - После этого страница выглядит как на рис. [-@fig:001]

![О себе](../report/image/Screenshot_4.png){ #fig:001 width=70% }

## Добавление постов

- Посты хранятся в папке `content/posts`
- Каждый пост имеет свою папку
- Нужно просто скопировать пример и отредактировать его
- Откомпилированная страница показана на рис. [-@fig:002]

![Новый пост](../report/image/Screenshot_5.png){ #fig:002 width=70% }

# Заключение

- Мы добавили контент на сайт
- Дальше мы будем добавлять больше контента на сайт
- Добавление контента -- это основное действие, которое мы будем делать с сайтом