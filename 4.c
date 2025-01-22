#include <stdio.h>

void print_square (int side){
    int i,j;
    for(j=1;j<=side;j++){
        for(i=1;i<=side;i++){
        printf("*");
   		}
   printf("\n");
   }
}

void print_right_triangle (int height){
    int i,j;
    for(j=1; j<=height;j++){
        for(i=1; i<=j ;i++){
        printf("*");
    	}
    printf("\n");
    }
}

void print_number_pattern (int rows){
    int i,j;
    for(j=1 ; j<=rows ; j++){
        for(i=1 ; i<=j ; i++){
        printf("%d",j);
   		}
    printf("\n");
    }
}

int main(){
    char pattern_type;
    printf("Enter the type of pattern(s/t/n):%c",pattern_type);
    scanf("%c", &pattern_type);
    while (pattern_type!='s'&&pattern_type!='t'&&pattern_type!='n'){
        printf("Try again:%c",pattern_type);
        scanf("%c", &pattern_type);
    }    
    if (pattern_type=='s'){
    int side;
    printf("Enter the number for side:");
    scanf("%d",&side);
    print_square(side);
    }
    
    else if(pattern_type=='t'){
    int height;
    printf("Enter the number for height:");
    scanf("%d",&height);
    print_right_triangle(height);
    }
    
    else if(pattern_type=='n'){
    int rows;
    printf("Enter the number for rows:");
    scanf("%d",&rows);
    print_number_pattern(rows);
    }
    
}
