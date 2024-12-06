#include <stdio.h>
#include <string.h>

// Определение структуры студент
struct student {
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main(void) {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    struct student stud[3];
    int i;

    // Ввод данных о студентах
    for (i = 0; i < 3; i++) {
        printf("Введите фамилию студента\n");
        scanf("%19s", stud[i].famil);

        printf("Введите имя студента %s\n", stud[i].famil);
        scanf("%19s", stud[i].name);

        printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name);
        scanf("%19s", stud[i].facult);

        printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name);
        scanf("%d", &stud[i].Nomzach);
    }

    // Поиск студента по фамилии и факультету
    char search_famil[20];
    char search_facult[20];

    printf("Введите фамилию студента для поиска: ");
    scanf("%19s", search_famil);

    printf("Введите название факультета для поиска: ");
    scanf("%19s", search_facult);

    // Проходим по всем студентам и ищем совпадения
    int found = 0;
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].famil, search_famil) == 0 &&
            strcmp(stud[i].facult, search_facult) == 0) {
                printf("Студент найден: %s %s, факультет %s, номер зачётной книжки %d\n",
                       stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
                found = 1;
        }
    }

    if (!found) {
        printf("Студент с такими параметрами не найден.\n");
    }

    return 0;
}