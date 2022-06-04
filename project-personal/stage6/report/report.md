---
## Front matter
title: "Индивидуальный проект 6"
subtitle: "Добавление поддержки двух языков"
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

Цель данной работы -- реализовать пятую стадию индивидуального проекта и выполнить его задания.

# Задание

- Перевести модули главной страницы на английский
- Перевести посты на английский
- Создать два поста на сайте

# Теоретическое введение

В Wowchemy есть поддержка интернационализации, посредством которой можно поддерживать многоязычный сайт.
В этой лабораторной работе нужно выполнить это.

# Выполнение лабораторной работы

Строки интерфейса переводятся с помощью файлов `i18n/ru.yaml` и `i18n/en.yaml` -- можно скачать эти файлы с сайта проекта Wowchemy.
После этого нужно указать используемые языки в `config/_default/languages.yaml`.

Чтобы перевести содержимое, сначала нужно передвинуть файлы из `content/` в `content/ru/` и `content/en/`, затем ввести перевод в `content/en/`.
Пользователю сайта будет отображаться соответствующая его языку браузера версия.

После этого нужно написать два поста таким же образом, как мы делали это раньше.

# Выводы

Возможность поддержки нескольких языков на сайте позволяет публиковать текст на нескольких языках, что позволяет писать тексты для более широкой аудитории.