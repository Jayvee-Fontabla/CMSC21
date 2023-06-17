#include <stdio.h>

int main(){
    
    int i = 1;
    while (i < 10) {
        
        printf("While");
        i++;
    }

    for(;i<10;){
        printf("For");
        i++;
    }

    do{
        printf("DO");
        i++;
    }while(i<10);

    
}