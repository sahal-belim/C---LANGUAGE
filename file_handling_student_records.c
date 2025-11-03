#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float marks;

    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter age and marks: ");
    scanf("%d %f", &age, &marks);

    fprintf(fp, "Name: %s | Age: %d | Marks: %.2f\n", name, age, marks);
    fclose(fp);

    printf("Record saved successfully!\n");
    return 0;
}
