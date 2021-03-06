/*
 Написать программу, переставляющую символы в массиве согласно правилу:
 сначала идут латинские буквы, потом цифры. Строка задается в коде програм-
 мы в виде случайной последовательности букв и цифр. Пользоваться дополни-
 тельными массивами нельзя.
 
 Пояснение
 
 Сортировка в данной задаче неприменима ввиду ее трудоемкости. Нужно использовать группировку элементов массива. Программа движется по строке с двух концов к середине и при встрече с нежелательными символами выполняет обмен с символом на другой стороне.
 
 Состав
 
 Программа должна состоять из двух функций:
 
 char* process(char* line) - обработка строки.
 main() - организация диалога.
 
 */

#include <stdio.h>
#include "task4.h"
int main() {
    char line[1000];
    printf("Enter your sttring: \n");
    fgets(line, 100, stdin);
    
    printf("%s", process(line));
    return 0;
    
}
