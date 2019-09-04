#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*

Name :
*Program to calculate lemonade standd profits
*profits per cup

*/
int main()
{

    float cup;
    int lemons;
    float lemon_cost;
    float small_cups;
    float large_cups;
    int refill;
    float expense;
    float sugarCost;
    float total_cost;
    float sCup_cost;
    float lCup_cost;
    float profit;
    float sales;
    float total_smallCupsSale;
    float average;



    //double large_price=3.35;
    //float large_price =3.25;
    float refill_price =1.25;



    //Get number of cups

    printf("Enter the number of cups of sugar used : ");
    scanf("%f", &cup);

    sugarCost=cup*0.19;

    //Get number of Lemons
    printf("Enter the number of lemons used (integer):");
    scanf("%d", &lemons);

    lemon_cost=lemons*0.48;


    //Get number of Small Cups
    printf("Enter the number of small cups of lemonade sold (integer)");
    scanf("%f", &small_cups);


    sCup_cost=small_cups*0.14;

    //Get Large Cups
    printf("Enter the number of large cups of lemonade sold (integer):");
    scanf("%f", &large_cups);

    lCup_cost=large_cups*0.18;

     printf("Enter the number of refills sold (integer): ");
    scanf("%d", &refill);



    printf("sugar cups = %f\n",cup = roundf(cup*100)/100);
    printf("Lemons = %d\n", lemons);
    printf("Small Lemonade = %f\n", small_cups);
    printf("Large cups = %f\n", large_cups);
    printf("Refills = %d\n", refill);


    //LEMOnade sales


    printf("Small Cup sales=%f\n",small_cups*2);
    printf("Large sales=%f\n",3.25*large_cups);

    sales=(small_cups*2)+(large_cups*3.25) + (refill*1.25);
    expense=(sugarCost)+ (sCup_cost)+(lCup_cost)+(lemon_cost);
   // average=profit/

   profit=sales-expense;


    printf("You made %f",profit );







    //printf("Total sales=%f\n", large_price+small_price);



    return 0;

}
