#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter roll no of student %d: ", i+1);
        scanf("%d", &students[i].roll_no);
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].stud_name);
        printf("Enter marks of student %d (mark1 mark2 mark3): ", i+1);
        scanf("%d %d %d", &students[i].mark1, &students[i].mark2, &students[i].mark3);
        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float) students[i].total_marks / 3;
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (students[i].total_marks < students[j].total_marks) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Roll No\tName\tMark1\tMark2\tMark3\tTotal Marks\tAverage Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }

    return 0;
}

