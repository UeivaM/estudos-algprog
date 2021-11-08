#include <stdio.h>

int main (){
    for (int num = 1; num <= 100; num ++) {
        
        printf("\n %d", num);
        
        if (num % 10 == 0){
            
            printf(" \n %d é multiplo de 10", num);
            
        }
        
        
        
    }
    
    return 0;
    
}