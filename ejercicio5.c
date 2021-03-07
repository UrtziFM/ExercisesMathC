/* This is a program to handle files , it has my subjetcs and notes*/

#include <stdio.h> // library of printf , scanf,...

#define File "Exams.txt"
#define Size 50
#define Total 5

typedef struct subject {
    char name[Size];
    char semester[Size];
    float result;
} Subject;

Subject Urtzi[Total] = {
    {"AlgebraI", "First", 9.3},
    {"CalculoI", "First", 9},
    {"FisComput", "First", 8},
    {"Estadistica", "First", 7.7},
    {"Programacion", "First", 7.4}
};

void addExams();
void showExams();

int main () {
    addExams();
    showExams();
}

void addExams() {
    FILE *fp = fopen(File, "ab");
    if (fp) {
        fwrite(Urtzi, sizeof(Subject), 5, fp);
        fclose(fp);
    }
}

void showExams() {
    Subject exam;
    FILE *fp = fopen(File, "rb");
    if (fp) {
        while (fread(&exam, sizeof(Subject), 1, fp)) {
            printf("%s \t %s \t %.2f \t \n", exam.name, exam.semester, exam.result);
        }
    }
}