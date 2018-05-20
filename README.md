# Лабораторная работа №5
### Выполнил студент группы 6304 Тимофеев А.А.

Реализация алгоритма Кнута — Морриса — Пратта(КМП), его сравнение с наивынм алгоритмом поиска подстроки с троке, а так же реализация функции, проверяющей является ли одна строка циклическим сдвигомм другой.

## Требования к запуску

Должны быть установлены:

* [CMake](https://cmake.org/) - версия не ниже 3.10
* [Google test](https://github.com/google/googletest)

### Сборка

Загрузите репозиторий
```
git clone https://github.com/chelentos/PiAA_LAB_5.git
cd ./PiAA_lab5
```
Перейдите в каталог build и соберите проект
```
cd build
cmake ..
make
```
### Работа с программой
1.  Чтобы выполнить поиск всех вхождений подстроки в строк, запустите kmp:
```
./kmp
```
2.  Чтобы определить является ли строка циклическим сдвигом другой, запустите shift:
```
./shift
```
3.  Чтобы сравнить количество операций, которые понадобятся при поиске конкретной подстроки в строке при помощb алгоритма КМП и наивного алгоритма, запустите versus:
```
./versus
```
### Тестирование
1.  Чтобы запустить тесты префикс-функции и функции, реализующей алгоритм КМП, запустите kmp_gtests:
```
./kmp_gtests
```
2.  Чтобы запустить тесты функции, определяющей является ли одна строка циклическим сдвигом другой, запустите shift_gtests:
```
./shift_gtests
```
3.  Чтобы запустить тесты, сравнивающие эффективность наивного и КМП алгоритмов, запустите vs_tests:
```
./vs_tests
```
