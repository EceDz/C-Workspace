#include <stdio.h>

int bitwise_and(int a, int b){//compares each bit of two integers and returns 1 only if both of them are 1.
    return a & b;
}
int bitwise_or(int a, int b){//compares each bit of two integers and returns 1 if there a bit of one of them is 1 else 0.
    return a | b;
}
int bitwise_xor(int a, int b){//compares each bit of two integers and returns 1 if the values of the bits of two of them are different.
    return a ^ b;
}
int bitwise_not(int a){//changes the bit value of the integer if bit=0 returns 1 if bit=1 returns 0
    return ~a;
}
int left_shift(int a, int n){// changes the place of first integer to n values to the left and puts 0 instead of the shifted values.
    return a << n ;
}
int right_shift(int a, int n){// changes the place of first integer to n values of the right and puts 0 instead of the shifted values.
    return a >> n;
}

int count_1_bits(int n){
    int count=0;
    unsigned mask=1;
    for (int i=0; i < 32; i++){
    if ((n & mask) != 0)
    count++;
    mask <<= 1;
    }
    return count;
}


int is_odd(int n){
    n = n << 31;
    int result;
    if (n!=0){
    return 1;//odd
    }
    else{
    return 0;//even
    }
}


int reverse_last_byte(int n){
    int a , b;
    a = n << 5;
    b = n >> 28;
    
    return a|b;
}



int main(){
int a=5;
int b=3;

   printf("a&b = %d\n", bitwise_and(a, b));
   printf("a|b = %d\n", bitwise_or(a, b));
   printf("a^b = %d\n", bitwise_xor(a, b));
   printf("~a = %d\n", bitwise_not(a));
   printf("a << n = %d\n", left_shift(a, b));
   printf("a >> n = %d\n", right_shift(a, b));
   
    printf("Number of 1 bits  = %d\n", count_1_bits(a));
    
    printf("Odd or Even: ");
    if (is_odd(a)==1){
    printf("Odd\n");}
    else{
    printf("Even\n");    
    }
    
    printf("Reverse last byte = %d\n", reverse_last_byte(a));

   
  

}
