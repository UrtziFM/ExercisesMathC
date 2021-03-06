#include <stdio.h>

#define Size 40
#define Note 5
#define Row 2

int main() {
    int i,j;

    float Matriz[Row][Note] ={{9.3, 9.0, 7.4, 8.0, 7.7}, {1, 2, 3, 4, 5}};
    float Array[Note] = {9.3, 9.0, 7.4, 8.0, 7.7};
    float sum = 0.0;
    
    for (i = 0; i < Note; i++) {
        sum = sum + Array[i];
    }
    printf("The average note is = %f. \n", sum/5);

    for (i = 0; i < Note; i++){
        for (j = 0; j < Row; j++){
            printf("%f. \t", Matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
