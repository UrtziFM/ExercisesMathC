#include <stdio.h>

#define Size 40
#define Note 5
#define Row 2

int main() {
    int i,j;

    char *Matriz[Row][Note] ={{"9.3", "9.0", "7.4", "8.0", "7.7"}, {"AlgbI", "CalcI", "Prg", "FCC", "Estd"}};
    float Array[Note] = {9.3, 9.0, 7.4, 8.0, 7.7};
    float sum = 0.0;
    
    for (i = 0; i < Note; i++) {
        sum = sum + Array[i];
    }
    printf("The average note is = %f. \n", sum/5);

    for (i = 0; i < Row; i++){
        for (j = 0; j < Note; j++){
            printf("%s \t", Matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
