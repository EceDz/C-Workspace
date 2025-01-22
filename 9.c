#include <stdio.h>

int* start(int* first) {
	while (*first!=0) {
		first++;
	}
	return first;
}

int* end(int* last) {
	while (*last != 0) {
		last--;
	}
	return last;
}


void print_reverse(int* p, int* q) {
	while (q >= p) {
		printf("%d " , *q);
		q--;
	}
}

int main() {
	int A[] = { 15, 10, 34, 0, 0, 0, 17, 58, 72 };
	int* first_zero = start(&A[0]);
	int* last_zero = end(&A[8]);
	print_reverse(&A[0], first_zero);
	printf("\n");
	print_reverse(last_zero, &A[8]);
}
