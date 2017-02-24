//This program will tell you the difference between number, *number and &number. which number is a two-dimentional matrix 

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int number[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d,%x   ",*(*(number+i)+j), *(number+i)+j);
        }
        printf("\n");
    }
    
    printf("\n%x", number);
    printf("\n%x", *number);
    printf("\n%x", &number);
    
    printf("\n%d", sizeof(*number));
    printf("\n%d", sizeof(**number));
    printf("\n%d", sizeof(*&number));
    
    getchar();
}
