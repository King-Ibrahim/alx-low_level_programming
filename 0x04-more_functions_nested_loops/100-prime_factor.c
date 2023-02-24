#include<stdio.h>

int main(void){
int number = 612852475143;
int factor;
int i;

for(factor = 1; factor <= 612852475143; factor++){
    
    if(612852475143%factor == 0){
     for(i = 2; i<factor/2; i++){
        if(factor%i == 0){
            printf(i);
        }
     }   
    }
    else
        continue;
    
}
}
