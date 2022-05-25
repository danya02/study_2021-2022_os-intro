---
## Front matter
title: "Индивидуальный проект 4"
subtitle: "Добавление ссылок на внешние ресурсы"
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

Цель данной работы -- реализовать четвертую стадию индивидуального проекта и выполнить его задания.

# Задание

- Добавить ссылки на внешние ресурсы о себе
- Создать два поста на сайте

# Теоретическое введение

В Wowchemy есть модуль Contact, который используется для указания ссылок на себя.
Задачей на эту неделю, помимо написания постов, является добавление ссылок на внешние ресурсы в этот модуль.

# Выполнение лабораторной работы

Для того, чтобы изменить состояние модуля Contact, нужно изменить файл `content/home/contact.md`.
В этом файле есть строки, которые относятся к элементам этого модуля, и их нужно изменить в соответствии с заданием.
Финальное состояние этого модуля видно на рис. [-@fig:002], а откомпилированный модуль показан на рис. [-@fig:001].


![Текст модуля Contact](./image/Screenshot_2.png){ #fig:002 width=70% }

![Откомпилированный модуль Contact](./image/Screenshot_1.png){ #fig:001 width=70% }

После этого нужно написать два поста таким же образом, как мы делали это раньше.

# Выводы

Информация, позволяющая посетителям сайта связываться с владельцем сайта, весьма полезна для получения обратной связи, и сейчас когда мы добавили ее сайт стал гораздо более персонализированным.