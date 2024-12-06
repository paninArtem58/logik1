#include <stdio.h>

int main() {
    int n = 10;
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Можно заменить на любой массив
    
        printf("Массив: ");
        for (int i =0; i<n; i++) {
            printf(" %d", a[i]);
        }
    printf("\n");
    
    int max = a[0], min = a[0]; // Предполагаем, что первый элемент является и максимумом, и минимумом
    
    for(int i = 1; i < n; ++i) {
        if(a[i] > max) {
            max = a[i];
        }
        
        if(a[i] < min) {
            min = a[i];
        }
    }
    
    int difference = max - min;
    

    
    printf("Разница между максимальным и минимальным элементами массива: %d\n", difference);
    
    return 0;
}