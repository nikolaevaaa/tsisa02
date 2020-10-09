# Лабораторная работа №2 по Теории систем и системному анализу
Вариант 12
## Задание 
На интервале [7; 11] задана унимодальная функция одного переменного f(x) = cos(x)*th(x). Используя метод случайного поиска осуществить поиск минимума f(x) с заданной вероятностью попадания в окрестность экстремума P при допустимой длине интервала неопределенности E. Определить необходимое число испытаний N. Численный эксперимент выполнить для значений P = 0,90, 0,91,..., 0,99 и значений E = (b - a) * q, где q = 0,005, 0,010,..., 0,100. При аналогичных исходных условиях осуществить поиск минимума f(x), модулированной сигналом sin(5x), т.е. мультимодальной функции f(x)*sin(5x).
### Выполнение
Код программы в файле lab02.cpp
![Зависимость N от p и q](https://github.com/nikolaevaaa/tsisa02/blob/main/lab2.1.png?raw=true)

![Результаты поиска экстремума f(x) в зависимости от P и q](https://github.com/nikolaevaaa/tsisa02/blob/main/lab2.2.png?raw=true)

![Результаты поиска экстремума f(x)*sin(5x) в зависимости от P и q](https://github.com/nikolaevaaa/tsisa02/blob/main/lab2.3.png?raw=true)

