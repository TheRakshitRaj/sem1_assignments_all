#include <stdio.h>
int main (){
     int num;
     printf("Enter the num:");
     scanf("%d" , & num); 
    for (int i =0 ; i < num ; i++){
        for(int j = 1; j<=num ; j++){
        printf("%d", j);
    }
    printf("\n");
    }
    return 0;
}