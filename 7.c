#include <stdio.h>

void print_size_and_content_of_5_different_data_types_and_their_addresses(){
    int int_var=10;
    double double_var=2000000;
    char char_var= 'E';
    float float_var= 0.5;
    int* pointer_var= &int_var;
    printf("variable type is int , name is int_var , size is %ld byte, content is %d address is %p\n", sizeof (int_var ), int_var, &int_var );
    printf("variable type is double , name is double_var , size is %ld byte, content is %f address is %p\n", sizeof (double_var), double_var, &double_var );
    printf("variable type is char , name is char_var , size is %ld byte, content is %c address is %p\n", sizeof  (char_var), char_var, &char_var);
    printf("variable type is float , name is float_var , size is %ld byte, content is %f address is %p\n", sizeof (float_var), float_var, &char_var);
    printf("variable type is pointer , name is pointer_var, size is %ld byte, content is %d address is %p\n", sizeof (pointer_var) , *pointer_var ,  pointer_var );
    
}

void swap_values_of_two_variables(int a, int b){
    printf("Before swap, a = %d, b = %d\n" ,a , b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swap, a = %d, b = %d\n" ,a , b);
}

void swap_addresses_of_two_pointers(int* pa, int* pb){
    printf("Before swap, a = %p, b = %p\n" ,pa , pb);
    int* temp;
    temp=pa;
    pa=pb;
    pb=temp;
    printf("After swap, a = %p, b = %p\n" ,pa , pb);
}

void swap_values_of_two_pointers(int* pa, int* pb){
    printf("Before swap, a = %d, b = %d\n" ,*pa , *pb);
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("After swap, a = %d, b = %d\n" ,*pa , *pb);
}

void  print_array_without_using_index(int* arr, int size){
    int i;
    for (i=1 ; i< size + 1; i++){
    printf("%d.element of the array is %d and its address in memory is %p\n", i, *arr, arr);
    arr++;
    }
}

int main(){
    printf ("Function print_size_and_content_of_5_different_data_types_and_their_addresses:\n");
    print_size_and_content_of_5_different_data_types_and_their_addresses(); 
    printf ("\nFunction swap_values_of_two_variables:\n");
    int a=5;
    int b=10;
    swap_values_of_two_variables(a , b);
    printf ("Last value of a=%d, Last value of b=%d\n", a, b);
    
    int* pa = &a ;
    int* pb = &b ;
    printf ("\nFunction  swap_addresses_of_two_pointers:\n");
    swap_addresses_of_two_pointers(pa , pb );
    printf ("\nFunction swap_values_of_two_pointers:\n");
    swap_values_of_two_pointers(pa , pb );
    printf ("Last value of pa=%p, Last value of pb=%p\n", pa, pb);
    
    int arr[4]={5,10,15,20};
    int size= 4;
    printf ("\nFunction print_array_without_using_index:\n");
    print_array_without_using_index(arr, size);
    
    
}
