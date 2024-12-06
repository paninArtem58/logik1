#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Вывод матрицы
    printf("Элементы матрицы:\n");
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    // Вычисляем суммы по строкам
    for (int row = 0; row < ROWS; ++row) {
        int sum_row = 0;
        
        for (int col = 0; col < COLS; ++col) {
            sum_row += matrix[row][col];
        }
        
        printf("Сумма строки %d: %d\n", row + 1, sum_row);
    }
    
    // Вычисляем суммы по столбцам
    for (int col = 0; col < COLS; ++col) {
        int sum_col = 0;
        
        for (int row = 0; row < ROWS; ++row) {
            sum_col += matrix[row][col];
        }
        
        printf("Сумма столбца %d: %d\n", col + 1, sum_col);
    }

    // Вычисляем сумму элементов правее 2-го столбца
    int sum_right_of_second_column = 0;
    
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 2; col < COLS; ++col) { // Начинаем с третьего столбца (индекс 2)
            sum_right_of_second_column += matrix[row][col];
        }
    }

    printf("Сумма элементов правее 2-го столбца: %d\n", sum_right_of_second_column);
    
    return 0;
}
