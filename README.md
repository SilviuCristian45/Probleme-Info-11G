[![Build Status](https://travis-ci.org/StormFireFox1/Probleme-Info-11G.svg?branch=master)](https://travis-ci.org/StormFireFox1/Probleme-Info-11G)

# Probleme-Info-11G
In acest repozitoriu vei gasi problemele la info pentru clasele a 11-a si a 12-a.
Toate rezolvarile problemelor (100 de puncte) vor ajunge in master.
De asemenea, vei gasi si diverse lectii, precum baze de date si de la CEX.

# Instalare script testare

O simpla linie de cod rulata in terminal este necesar, fie pentru Linux sau Windows.

## Linux

1. Deschide Terminal (Apasa pe tastatura CTRL + SHIFT + T)
2. Insereaza urmatoarea linie de cod cu copy-paste si da enter:
```shell
$ wget https://github.com/StormFireFox1/Probleme-Info-11G/archive/master.zip && unzip master.zip && cd Probleme-Info-11G-master && chmod +x getproblems && ./getproblems
```

## Windows
1. Deschide Command Prompt (Windows + R, apoi scrieti "cmd" si apasati enter)
2. Insereaza urmatoarea linie de cod cu copy-paste si da enter:
```bat
powershell -ExecutionPolicy Bypass -c "(new-object System.Net.WebClient).DownloadFile('http://pastebin.com/raw/uuAZ9sFc', 'download.ps1'); .\download.ps1"
```

Aceste scripturi va cer numele si altele si vor pune sursele pe Desktop. Aceste scripturi ***necesita conexiune la Internet!*** Fara Internet mai necesita niste editare.