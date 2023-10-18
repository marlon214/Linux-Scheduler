#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void){
    printf("Random number: "); 
    int i = 0;
    
    while(i<100)
    {
         if(i%10 == 0)
            printf("\n"); 

        printf("  %d", srand()%100); 
        ++i;
    }

    printf("\n");

    return 0;
}