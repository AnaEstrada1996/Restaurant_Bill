/* Write a program that computes the tax and tip on a 
restaurant bill for a patron. The program should accept 
the tax and tip both as percentages from the command line. 
Display the meal cost, tax amount, tip amount, and total bill 
on the screen. The meal cost should be randomly chosen between 
the following four:*/

/*Salad: $9.95 Soup: $4.55 Sandwich: $13.25 Pizza: $22.35*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //meal costs
    float costArr[4] = {9.95, 4.55, 13.25, 22.35};

    //tip and tax percentages
    float tax;
    float tip;

    // float mealCost =0;
    float mealCost;
    float taxAmount;
    float tipAmount;
    float totalBillAmount;

    //work on getting the meal costs randomly
    time_t t;
    srand((unsigned)time(&t));

    //printf("%.2f\n", costArr[rand()%4]);
    mealCost = costArr[rand()%4];

    //get the tax and tip percentages
    printf("Enter the tax percentage: ");
    scanf("%f", &tax);

    printf("Enter the tip percentage: ");
    scanf("%f", &tip);

    //calculate the tax, tip, and total amount 
    taxAmount = (tax/100) * mealCost;
    tipAmount = (tip/100) * (mealCost + taxAmount);
    totalBillAmount = mealCost + taxAmount + tipAmount;

    //print out the menu
    printf("------Menu-----\n");
    printf("Salad: $9.95\n");
    printf("Soup: $4.55\n");
    printf("Sandwich: $13.25\n");
    printf("Pizza: $22.35\n");

    //display the meal cost, tax amount, tip amount, and total bill amount 
    printf("-----Costs-----\n");
    printf("Your meal cost is: %.2f", mealCost);
    printf("\nYour tax amount is: %.2f", taxAmount);
    printf("\nYour tip amount is: %.2f", tipAmount);
    printf("\nYour total bill amount is: %.2f", totalBillAmount);

    return 0;
}
