#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
struct Date {
    int month, day, year;
};

struct Student {
    char studentId[10];
    char classroomId[10];
    char name[20];
    struct Date dateOfBirth;
    bool gender;
    char email[30];
    char phone[20];
    char password[20];
};

struct Classroom {
    char classroomId[10];
    char teacherId[18];
    char classroomName[10];
    struct Student students[100]; // Gi? s? t?i da 100 sinh viên trong m?t l?p
    int soLuongSinhVien; // S? lu?ng sinh viên th?c t? trong l?p
};

struct Teacher {
    char teacherId[16];
    char classroomId[16];
    char Name[20];
    struct Date dateOfBirth;
    bool gender;
    char Email[30];
    char Phone[20];
    char password[20];
    struct Classroom classrooms[10]; // Gi? s? m?t giáo viên có t?i da 10 l?p h?c
    int soLuongLopHoc; // S? lu?ng l?p h?c th?c t? c?a giáo viên
};
int main() {
    struct Classroom classroomA1;
    strcpy(classroomA1.classroomId, "A1");
    strcpy(classroomA1.classroomName, "Math");
    classroomA1.studentCount = 0;

    struct Student student1;
    strcpy(student1.studentId, "S001");
    strcpy(student1.name, "Alice");

    return 0;

}
