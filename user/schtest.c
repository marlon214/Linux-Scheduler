#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include <stddef.h>

int main(){

    printf("Schedualer Test\n");
    int i=0;
    while (i<15)
    {
        int forkCounter=fork();
        if(forkCounter==0){
            int tix=(srand()%90)+10;
            settickets(tix);
            printf("Process %d started (ticket count %d)\n", i, gettickets());
            long long iterCnt = 100000000.0; // Number of iterations
            long long k = 0.0; // loop control variable
            long long s = 1.0; // signal for the next iteration
            long long pi = 0.0;
            // // simple headers
            // printf("Approximation of the number PI through the Leibniz's series\n");
            // printf("Please wait. Running...\n\n");
            // pi estimatation via Leibniz's series
            for(k = 1.0; k <= (iterCnt * 2.0); k += 2.0) {
                pi = pi + s * (4.0 / k);
                s = -s;
            }
            printf("Process %d finished\n", i);
            exit(0);
        }
        i++;
    }
    int j= 0;
    
    while(j<15){
        wait(NULL);
        j++;
    }



    return 0;
}