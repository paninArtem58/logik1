#include <stdio.h>
#include <stdlib.h> // Для функции rand()
#include <time.h>   // Для функции srand()

int main() {
    int n = 10;
    double a[n];
    
    srand(time(NULL)); // Инициализация генератора случайных чисел
    
    for(int i = 0; i < n; ++i) {
        a[i] = -0.5 + ((double)rand() / RAND_MAX) * 3.0; // Генерация числа от -0.5 до 2.5
        printf("%.2f ", a[i]); // Выводим каждое случайное число с двумя знаками после запятой
    }
    
    printf("\n");
    
    return 0;
}