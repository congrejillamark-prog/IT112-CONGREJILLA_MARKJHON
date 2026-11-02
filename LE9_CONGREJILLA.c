#include<stdio.h>
#include<string.h>

int main() {

    FILE *fp;
    char name[50];
    char course[50];
    char input[50];
    int age, count, i;

    // Writing to the file
    fp = fopen("student_lists.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Writing Student Database:\n");
    printf("How many students do you want to record? ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &count);

    for (i = 1; i <= count; i++) {
        printf("\nStudent %d\n", i);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';   // remove newline

        printf("Enter Age: ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d", &age);

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);
        course[strcspn(course, "\n")] = '\0';   // remove newline

        // Write the user's input to the file
        fprintf(fp, "Student %d\n", i);
        fprintf(fp, "Name: %s\n", name);
        fprintf(fp, "Age: %d\n", age);
        fprintf(fp, "Course: %s\n", course);
        fprintf(fp, "----------------------\n\n");
    }

    fclose(fp);
    printf("\nStudent database successfully saved to file.\n");

    // Reading from the same file
    fp = fopen("student_lists.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char text[100];
    printf("\nReading Student Database:\n\n");

    while (fgets(text, sizeof(text), fp) != NULL) {   // read line by line
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}