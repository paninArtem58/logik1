#include <stdio.h>
#include <stdlib.h> // Для функции malloc()

int main() {
    int n;
    
    printf("Введите размер массива: ");
    scanf("%d", &n); // Считываем размер массива с клавиатуры
    
    int *a = (int *)malloc(n * sizeof(int)); // Выделяем память под массив
    
    if(a == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }
    
    for(int i = 0; i < n; ++i) {
        printf("Введите элемент №%d: ", i + 1);
        scanf("%d", &a[i]); // Заполняем массив значениями, введенными пользователем
    }
    
    printf("Ваш массив:\n");
    for(int i = 0; i < n; ++i) {
        printf("%d ", a[i]); // Выводим каждый элемент массива
    }
    
    free(a); // Освобождаем выделенную память
    
    printf("\n");
    
    return 0;
}