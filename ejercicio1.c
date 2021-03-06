#include <stdio.h>

#define N 5

int main() {
    float a[N] = {9.3, 9.0, 7.4, 8.0, 7.7};
    float sum = 0.0;
    
    for (int i = 0; i < N; i++) {
        sum = sum + a[i];
    }
    printf("The average Note is = %f. \n", sum/5);
    return 0;
}
