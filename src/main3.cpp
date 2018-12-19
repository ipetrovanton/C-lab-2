/*
 аписать программу, выводящую на экран треугольник из звёздочек
 Пояснение
 
 Треугольник должен выглядеть так:
 
   *
  ***
 *****
 Количество строк задаётся пользователем с клавиатуры.
 
 Состав
 
 Программа должна состоять из двух функций:
 
 char * layout(char buf[],int line,int count) - формирование одной строки треугольника (line - порядковый номер строки с вершины треугольника, начальное значение 1,count - общее количество строк). При этом часть строки заполнена пробелами (впереди), а часть символами "звездочка".
 main() - организация диалога.
 */

#include <stdio.h>
#include "task3.h"

int main() {
    
    int count;
    int line = 1;
    char buf [100];
    printf("Enter a count of line of the triangle: ");
    scanf("%d", &count);
    for (line = 1; line <= count; line++)
        printf("%s\n", layout(buf, line, count));
    return 0;
    
    
    
}