
#include <stdio.h>

int main() {
    int tabla[100];  
    int i = 0;       
    
    while (i < 100){ 
        tabla[i] = (i + 1) * 2; 
        i++;
    }

    i = 0; 

    
    while (i < 100) {
        printf("%d ", tabla[i]);
        i++;
    }

    printf("\n"); 
    return 0;
}
