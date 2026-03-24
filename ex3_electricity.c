/* Name: GIZAMBA JOEL */
/* Student Number: 25/U/BIE/01370/PE */

#include <stdio.h>
int main(){
    float units, bill_amount;
    printf("enter the number of units consumed:");
    scanf("%f", &units);

    if (units <= 100){
        bill_amount = 0.5 * units;
        printf("the bill amount is: %f\n", bill_amount);

    }

    else if (units > 100 && units <= 200){
        bill_amount = 0.75 * units;
        printf("the bill amount is: %f\n", bill_amount);
    }

    else if (units > 200 && units <= 300){
        bill_amount = 1.20 * units;
        printf("the bill amount is: %f\n", bill_amount);

    }

    else if (units > 300){
        bill_amount = 1.50 * units;
        printf("the bill amount is: %f\n", bill_amount);
    }


    return 0;
}
