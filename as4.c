#include<stdio.h>

int main(){
    
    int j = 1;
    printf("Table of Powers of Two\n");
    for(int i=0; i<=10; i++){
        
        printf("%d  %d\n", i, j);
        j *= 2;

    }
    return 0;
}