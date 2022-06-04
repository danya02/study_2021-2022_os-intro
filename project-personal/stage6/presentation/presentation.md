---
## Front matter
lang: ru-RU
title: Индивидуальный проект 6
author: |
  Генералов Даниил, НПИ-01-21, 1032212280
institute: |
	\inst{1}RUDN University, Moscow, Russian Federation
date: 4 June, 2022

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

Добавить поддержку двух языков на сайт.

## Задачи

  - Перевести модули главной страницы.
  - Перевести статьи.
  - Добавить две статьи.

# Ход работы

## Перевод модуля главной страницы

- Строки хранятся в `i18n/ru.yaml`
- Подключить поддержку языка нужно в `config/_default/languages.yaml`
- После этого скопировать `content/*` в `content/ru/*`

## Перевод статей

- Статьи хранятся в `content/posts/`
- Перенести статьи в `content/ru/posts/`
- Сделать копию в `content/en/posts/`
- Перевести статьи

## Добавление постов

- Посты добавляются в свою директорию в папке `content/posts`
- Они автоматически добавляются в список постов

# Заключение

Мы закончили составление индивидуального проекта.
