/* Name: INNOCENT BRYAN VUNI*/
/* Student Number: 2500801372*/


#include <stdio.h>

int main(){

    // THESE ARE MY VARIABLES
    float distance_travelled, fuel_used, fuel_efficiency;

    //GET INPUTS
    printf("Enter distance(km): ");
    scanf("%f", &distance_travelled);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);

    //FORMULAR FOR FUEL EFFICIENCY
    fuel_efficiency = distance_travelled / fuel_used;


    printf("\nFuel efficiency: %.2f km/l", fuel_efficiency);

    return 0;


}