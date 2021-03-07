/*This is a program which calculate volume of a cylinder given height and diameter */

#include <stdio.h> // library of scanf , printf...
#include <math.h> // library of PI

float diameter, height, volume, radio;

int main() {
    printf("Introduce the diameter in meters of the cylender: \n");
    scanf("%f", &diameter);
    printf("Introduce the height in meters of the cylender: \n");
    scanf("%f", &height);
    radio = diameter/2;
    volume =  M_PI * pow(radio, 2) * height;
    printf("The volume of the cylender is %.2f \n", volume);
}
