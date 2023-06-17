#include <stdio.h>
int main(){

    int month, day;
    
    //Prompts user input
    printf("Enter the number of days in your month: ");
    scanf("%d", &month);
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &day);
    printf("\n");

    //Catches input error
    if (month >=28 && month <=31 && day >= 1 && day <=7){

        int block = 0;

        for (int i = 1; i < day; i++){
            printf("   ");
            block++;
        }
        for (int days = 1; days <= month; days++) {
            printf("%2d ", days);
            block++;
            if (block % 7 == 0) {
                printf("\n");
            }
        }
    } else {
        printf("You have inputed invalid values for the calendar.\n");
    }

    }


