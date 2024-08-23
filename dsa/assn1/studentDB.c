#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char address[100];
    int marks[5];
};

void inputStudentData(struct Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Address: ");
        scanf(" %[^\n]s", students[i].address);
        printf("Enter marks for 5 subjects (Math, Physics, Chemistry, English, Computer Science):\n");
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }
}

void findPassFail(struct Student *students, int count) {
    printf("\nStudents who passed in at least 3 subjects:\n");
    for (int i = 0; i < count; i++) {
        int pass = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].marks[j] >= 40) {
                pass++;
            }
        }
        if (pass >= 3) {
            printf("%s\n", students[i].name);
        }
    }

    printf("\nStudents who failed in at least 3 subjects:\n");
    for (int i = 0; i < count; i++) {
        int fail = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].marks[j] < 40) {
                fail++;
            }
        }
        if (fail >= 3) {
            printf("%s\n", students[i].name);
        }
    }
}

void maxMath(struct Student *students, int count) {
    int max = 0, ind = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].marks[0] > max) {
            max = students[i].marks[0];
            ind = i;
        }
    }
    printf("\nStudent with maximum marks in Mathematics:\n");
    printf("Name: %s\n", students[ind].name);
    printf("Marks: %d\n", max);
}

void minPhysics(struct Student *students, int count) {
    int min = 100, ind = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].marks[1] < min) {
            min = students[i].marks[1];
            ind = i;
        }
    }
    printf("\nStudent with minimum marks in Physics:\n");
    printf("Name: %s\n", students[ind].name);
    printf("Marks: %d\n", min);
}

void maxAverage(struct Student *students, int count) {
    float maxAvg = 0;
    int ind = 0;
    for (int i = 0; i < count; i++) {
        float avg = 0;
        for (int j = 0; j < 5; j++) {
            avg += students[i].marks[j];
        }
        avg /= 5;
        if (avg > maxAvg) {
            maxAvg = avg;
            ind = i;
        }
    }
    printf("\nStudent with maximum average marks:\n");
    printf("Name: %s\n", students[ind].name);
    printf("Average Marks: %.2f\n", maxAvg);
}

void printAllStudents(struct Student *students, int count) {
    printf("\nAll Student Records:\n");
    for (int i = 0; i < count; i++) {
        int sum = 0;
        printf("\nName: %s\n", students[i].name);
        for (int j = 0; j < 5; j++) {
            sum += students[i].marks[j];
        }
        printf("Total Marks: %d\n", sum);
    }
}
int main() {
    struct Student students[12];
    int choice, count;

    printf("Enter the number of students (10-12): ");
    scanf("%d", &count);
    if (count < 10 || count > 12) {
        printf("Invalid number of students. Exiting.\n");
        return 0;
    }

    inputStudentData(students, count);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Find passed/failed students\n");
        printf("2. Student with maximum marks in Mathematics\n");
        printf("3. Student with minimum marks in Physics\n");
        printf("4. Student with maximum average marks\n");
        printf("5. Print all student records\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                findPassFail(students, count);
                break;
            case 2:
                maxMath(students, count);
                break;
            case 3:
                minPhysics(students, count);
                break;
            case 4:
                maxAverage(students, count);
                break;
            case 5:
                printAllStudents(students, count);
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
