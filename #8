#include <stdio.h>

int main(){
    int a , b;
    printf( "Enter two positive integers (first < second): " );
    scanf( "%d %d", &a ,&b );
    if (a<b){
        if(a%2==0 && b%2==0){ // Even
            while (a<=b){
                printf("%d\n", a);
                a+=2;
            }
        }
        else if(a%2 && b%2) { // Odd
            while (a<=b){
                printf("%d\n", b);
                b-=2;
            }
        } 
        else
            printf("Make them both odd or even. Exiting.");
    }
    else 
        printf("First number is larger than or equal to the second. Exiting.");
}
