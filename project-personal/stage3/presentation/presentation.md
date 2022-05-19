---
## Front matter
lang: ru-RU
title: Индивидуальный проект 3
author: |
  Генералов Даниил, НПИ-01-21, 1032212280
institute: |
	\inst{1}RUDN University, Moscow, Russian Federation
date: 14 May, 2022

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

  - Добавить информацию об опыте и навыках.
  - Добавить две статьи.

# Ход работы

## Добавление информации
  - Информация по модулям главной страницы хранится в папке `content/home`
  - Чтобы добавить информацию об опыте, нужно только отредактировать `content/home/experience.md`
  - После этого главная страница содержит часть на рис. [-@fig:001]

![Опыт](../report/image/Screenshot_3.png){ #fig:001 width=70% }

## Информация о навыках

Как и информация об опыте, она содержится в модуле, по пути `content/home/skills.md`.

После редактирования это выглядит как на рис. [-@fig:002]

![Навыки](../report/image/Screenshot_4.png){ #fig:002 width=70% }

## Добавление постов

- Посты добавляются в свою директорию в папке `content/posts`
- Они автоматически добавляются в список постов

# Заключение

- Мы добавили контент на сайт
- Дальше мы будем добавлять больше контента на сайт
- Добавление контента -- это основное действие, которое мы будем делать с сайтом