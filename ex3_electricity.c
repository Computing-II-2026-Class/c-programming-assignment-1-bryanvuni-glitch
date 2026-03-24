/* Name: INNOCENT BRYAN VUNI*/
/* Student Number: 2500801372*/

#include <stdio.h>


int main(){

    //VARIABLES FOR ELECTRICITY
    float units_consumed, cost_per_unit, total_electricity_bill;


    //GETTING THE USER INPUTS
    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_electricity_bill = units_consumed * cost_per_unit;

    // PRINTING THE TOTAL ELECTRICITY BILL
    printf("\nTotal bill: %.2f UGX\n", total_electricity_bill);
    return 0;
}