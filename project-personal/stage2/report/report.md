---
## Front matter
title: "Индивидуальный проект 2"
subtitle: "Добавление информации о себе"
author: "Генералов Даниил, НПИ-01-21, 1032212280"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Цель данной работы -- реализовать вторую стадию индивидуального проекта и выполнить его задания.

# Задание

- Добавить информацию о себе на сайте
- Создать два поста на сайте

# Теоретическое введение

Используемый образец в Hugo использует несколько файлов Markdown для получения содержимого модулей на странице. Нам предстоит наполнить один из этих модулей, а также создать два поста на сайте.

# Выполнение лабораторной работы


Для начала нужно написать информацию о себе. Она хранится в файле `content/authors/admin/_index.md`, и просто добавив информацию в те поля, которые там предложены, как я сделал на рис. [-@fig:001], можно получить полноценную страницу с информацией об авторе.

![Добавляем информацию о себе](image/Screenshot_1.png){ #fig:001 width=70% }

После этого нужно написать два поста. Для этого нужно создать директорию с постом, скопировать образец файла `index.md` и изменить его до нужного содержимого. Финальное состояние этих двух файлов видно на рис. [-@fig:002] и [-@fig:003].

![Добавляем посты](image/Screenshot_2.png){ #fig:002 width=70% }

![Добавляем посты, продолжение](image/Screenshot_3.png){ #fig:003 width=70% }

Наконец, нужно собрать HTML сайта с помощью Hugo, и после отправки на сервер проверить, что все работает как надо. Рис. [-@fig:004] и [-@fig:005] показывают, что это так и есть.

![Страница о себе](image/Screenshot_4.png){ #fig:004 width=70% }

![Страница с постом](image/Screenshot_5.png){ #fig:005 width=70% }

# Выводы

В этой работе мы смогли добавить информацию о себе на сайт и два поста. И то, и другое мы будем делать дальше, чтобы развивать сайт, и это первый шаг к этому.