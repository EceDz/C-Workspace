#include <stdio.h>

void bubbleSort(int A[], int size){
    int i , temp, j;
    for(j=0 ; j < size ; j++){
        for(i=0 ; i< size - 1 ; i++){
            if (A[i] > A[i + 1]){
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

int findSecLargest (int A[], int size){
    bubbleSort(A, size);
    return A[size - 2];
}

int main(){
    int A[] = { 7, 81, 69, 55, 47, 33, 61, 75 } ;
    int size = sizeof A / sizeof A[0];
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
	    printf("%d ", A[i]);
	}
	printf("\nSecond Largest Element: ");
	printf("%d", findSecLargest( A, size));	
    
    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++){
        bubbleSort(A,size);
        printf("%d ", A[i]);
    }
}
