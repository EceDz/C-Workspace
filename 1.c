#include <stdio.h>
#define null '\0'

int isPalindrome (char A[]){
    int i ,j , temp1 , temp2 ; 
    for (i=0 ; A[i] != null ; i++){
        for ( j=8 ; A[j] != null ;  j--){
            temp1 = A[i];
            temp2 = A[j];
        }   
        
    }
    
    if ( temp1 == temp2 ){
        printf ("is palidrome");
        }
    
    
   printf("not palidrome"); 
}



void strTrim (char B[]){
    int i  ;
    for (i = 10 ;  B[i] != null ; i--){
        if ( B[i] =='*'){
        printf("%c" , B[10 - i - 1] ); 
        }

    }
}



int main(){
    char A[8]="ComputerScience";
    char B[10]= "**Trim**";    
    printf("%d", isPalindrome (A) );
    strTrim( B );
    
    
}

