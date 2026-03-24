/* Name: INNOCENT BRYAN VUNI*/
/* Student Number: 2500801372*/


// MOBILE MONEY APP
#include <stdio.h>

int main(){
    float amount_to_send;
    float transaction_fee;
    float fee_amount, total_amount_deducted;

    printf("What Amount Do you want to send: ");
    scanf("%f", &amount_to_send);

    printf("What's the Transaction Fee(%): ");
    scanf("%f", &transaction_fee);

    fee_amount = (float) amount_to_send * transaction_fee / 100;
    total_amount_deducted = amount_to_send + fee_amount;


    // FORMATING THE OUTPUT AS REQUIRED
    // IN RECEIPT FORM
    printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent: %.2f UGX\n", amount_to_send);
    printf("Transaction Fee: %.2f UGX\n", fee_amount);
    printf("Total deducted: %.2f UGX", total_amount_deducted);
    printf("\n----------------------------");
    return 0;
}