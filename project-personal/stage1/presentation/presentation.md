---
## Front matter
lang: ru-RU
title: Отчет по персональному проекту версии 1
author: |
  Генералов Даниил, НПИ-01-21, 1032212280
institute: |
	\inst{1}RUDN University, Moscow, Russian Federation
date: 30 April 2022

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

Цель: опубликовать шаблон сайта на GitHub Pages

Задачи:

- Установить Hugo и тему Academic (теперь Wowchemy)
- Скомпилировать образец и отправить его на GitHub
- Опубликовать репозиторий на GitHub Pages
- Направить доменное имя на GitHub Pages

# Ход работы

## Установка Hugo

На Arch Linux все очень просто:

```bash
$ sudo pacman -S go
$ yay hugo
```

## Установка темы

- Раньше тема устанавливалась путем записи в `themes/`
- Теперь это делается прм помощи файла `go.mod`:

```go
module github.com/wowchemy/starter-hugo-academic

go 1.15

require (
	github.com/wowchemy/wowchemy-hugo-modules/wowchemy-cms/v5 v5.0.0-20220423180919-17d5d3f0ca43 // indirect
	github.com/wowchemy/wowchemy-hugo-modules/wowchemy/v5 v5.0.0-20220423180919-17d5d3f0ca43 // indirect
)
```

Это обеспечивает автоматическую загрузку модулей при их использовании.

## Публикация на GitHub Pages

- По умолчанию GitHub Pages обрабатывает документы через Jekyll, выключаем через файл `.nojekyll`
- Можно публиковать корень или каталог `docs/`, но Hugo кладет файлы в `public/` -- добавляем в `config.toml` строку `publishDir="docs"`
- После публикации на GitHub Pages перейти по ссылке `https://<github-username>.github.io/<project-name>/`
- Эта тема ожидает, что файлы будут в корне сайта, а они не там.

## Переназначение доменного имени

- Нужно взять домен только для этого проекта
- Можно добавить проект в организацию (узнал это только позже)
- Или можно взять свой домен и использовать его

## DNS-записи

- У меня есть доменное имя `danya02.ru`
- Я хотел назначить поддомен под этот проект
- Сначала добавил `A`-записи на сервер GitHub Pages -- не работали TLS-сертификаты
- После этого заменил их на `CNAME`-запись на `danya02.github.io`
- Теперь сайт доступен по адресу https://dmgeneralov-rudn-os-intro.danya02.ru/

# Заключение

- Теперь у нас есть сайт на Hugo, и он доступен из интернета через GitHub Pages
- Не нужно было писать никакого кода и настраивать сервера
- Статические сайты можно делать очень быстро и удобно
- Поэтому сейчас так много способов делать их
- Дальше мы будем наполнять сайт контентом