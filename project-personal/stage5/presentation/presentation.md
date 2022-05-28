---
## Front matter
lang: ru-RU
title: Индивидуальный проект 5
author: |
  Генералов Даниил, НПИ-01-21, 1032212280
institute: |
	\inst{1}RUDN University, Moscow, Russian Federation
date: 28 May, 2022

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

Добавить содержимое в модуль Projects на сайт.

## Задачи

  - Добавить содержимое в модуль Projects на сайт.
  - Добавить две статьи.

# Ход работы

## Добавление информации
  - Информация по модулям главной страницы хранится в папке `content/home`
  - Модуль Projects описан в `content/home/projects.md`
  - Содержимое модуля собирается из папки `content/project`, там нужно добавить файлы
  - После этого главная страница содержит часть на рис. [-@fig:001]

![Модуль проектов](../report/image/Screenshot 1.png){ #fig:001 width=70% }

## Добавление постов

- Посты добавляются в свою директорию в папке `content/posts`
- Они автоматически добавляются в список постов

# Заключение

- Мы добавили контент на сайт
- Мы добавили весь контент, который поместится на сайт
- После этого нужно будет переводить контент на английский язык