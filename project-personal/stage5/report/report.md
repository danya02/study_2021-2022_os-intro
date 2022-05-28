---
## Front matter
title: "Индивидуальный проект 5"
subtitle: "Добавление блока проектов"
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

- Добавить оставшиеся модули на главной странице
- Создать два поста на сайте

# Теоретическое введение

В Wowchemy есть модуль Projects, который используется для указания проектов.
Задачей на эту неделю, помимо написания постов, является добавление одного проекта в этот модуль.

# Выполнение лабораторной работы

Модуль Projects создается из директории `content/project`, поэтому для добавления контента в него нужно лишь создать новую директорию в ней и поместить в нее `index.md`. 
После этого дополнения этот модуль выглядит как на рис. [@-fig:001]

![Откомпилированный модуль Projects](./image/Screenshot 1.png){ #fig:001 width=70% }

После этого нужно написать два поста таким же образом, как мы делали это раньше.

# Выводы

Возможность добавлять в модуль Projects новые проекты позволяет анонсировать выполненные и предстоящие проекты, и это является весьма полезным для централизации информации об этом виде деятельности.