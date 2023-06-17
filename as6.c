#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(){
     
     //Declared 0 and 2 as true
     bool pathway[8] = {[0] = 1, [2] = 1};
    
    
    for (int j = 0; j < NUM_PATHWAYS;j++) {
        if (pathway[j]) {
            printf("pathway[%d] is open \n", j);
        } else {
            printf("pathway[%d] is closed \n", j);
        }
    }


}