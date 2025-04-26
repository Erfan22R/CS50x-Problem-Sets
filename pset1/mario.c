#include <stdio.h>
#include <cs50.h>

int main(){
    int n;
    do{
        n = get_int("Enter a number: ");
    }while(1>n || n>8);
    for(int i=0 ; i<n ; i++){
        for(int j=n ; j>i+1 ; j--){
            printf(" ");
        }
        for(int k=0 ; k<i+1 ; k++){
            printf("#");
        }
        for(int j=0 ; j<2 ; j++){
            printf(" ");
        }
        for(int k=0 ; k<i+1 ; k++){
            printf("#");
        }
        printf("\n");
    }
}
