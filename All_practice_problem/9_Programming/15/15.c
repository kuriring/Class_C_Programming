#include<stdio.h>
 
#define NUM 100
 
int main() {
    int sieve[NUM + 1] = {0};
    int i, j;
 
    for(i=2; i<=NUM; i++) {
        if(sieve[i] == 1)
                continue;
        for(j=i+1; j<=NUM; j++) {
            if(j % i == 0)
                sieve[j] = 1;
        }
    }
    for(i=2; i<=NUM; i++) {
            if(sieve[i] == 0)
            printf("%d ", i);
    }
    return 0;
}
