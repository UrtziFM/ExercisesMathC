/* This is a program to calculate the distance between solar system planets and the sun */

#include <stdio.h> // library of printf , scanf,...

#define Size 40
#define totalPlanets 9

typedef struct planet {
    char name[Size];
    int distanceSun;
} Planet;

Planet sun[totalPlanets] = {
    {"Mercury", 59},
    {"Venus", 108},
    {"Earth", 150},
    {"Mars", 228},
    {"Jupyter", 750},
    {"Saturn", 1431},
    {"Uran", 2877},
    {"Neptune", 4509},
    {"Pluton", 5916}
};

int option;

int main() {
    do {
        printf("Choose a planet to know its distance in millions kilometers to the sun: \n\n");
        printf("\t1.Mercury \n");
        printf("\t2.Venus \n");
        printf("\t3.Earth \n");
        printf("\t4.Mars \n");
        printf("\t5.Jupyter \n");
        printf("\t6.Saturn \n");
        printf("\t7.Uran \n");
        printf("\t8.Neptune \n");
        printf("\t9.Pluton \n\n");
        printf("\t0.Exit \n");
        scanf(" %d", &option);

        switch (option) {
            case 1:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[0].name, sun[0].distanceSun);
            break;
            case 2:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[1].name, sun[1].distanceSun);
            break;
            case 3:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[2].name, sun[2].distanceSun);
            break;
            case 4:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[3].name, sun[3].distanceSun);
            break;
            case 5:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[4].name, sun[4].distanceSun);
            break;
            case 6:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[5].name, sun[5].distanceSun);
            break;
            case 7:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[6].name, sun[6].distanceSun);
            break;
            case 8:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[7].name, sun[7].distanceSun);
            break;
            case 9:
            printf("The distance to sun of %s is %d millions kms \n\n",sun[8].name, sun[8].distanceSun);
            break;
        default:
            break;
        }
    } while (option != 0);
    
        
    
}
