/* This is a program to manage company cars fuel consum */

#include <stdio.h> // library of printf, scanf,...

#define Size 40
#define TotalCars 4

typedef struct cars {
    char type[Size];
    char model[Size];
    char version[Size];
    float consum;
} Cars;

float TotalConsum;
float AverageConsum;

Cars garage[TotalCars] = {
    {"4X4", "Toyota", "Rav", 10.2},
    {"4x4", "Mitsubisi", "Pajero", 13.3},
    {"Berline", "Ford", "Mondeo", 7.8},
    {"Van", "Volkswagen", "Transport", 9.3}
};

int main() {
    for (int i = 0; i < TotalCars; i++ ) {
        TotalConsum += garage[i].consum;
        AverageConsum = TotalConsum/TotalCars;     
    }
    printf("The total fuel consum of the cars is: %.2f \n", TotalConsum);
    printf("The average fuel consum of the cars is: %.2f \n", AverageConsum);
}

