#include <stdio.h>
#define pi 3.14

float calculate_area_of_circle(int radius){
    int area_circle;
    area_circle= pi * radius * radius ;
    return area_circle;
} 

float calculate_area_of_rectangle(int width , int lenght){
    int area_rectangle;
    area_rectangle= width * lenght;
    return area_rectangle;
}

float calculate_area_of_triangle(int base , int height){
    int area_triangle;
    area_triangle= (base / 2) * height ;
    return area_triangle;
}
    
 
int main(){
    char shape ;
    printf("Enter type: ");
    scanf("%c", &shape );
    while (shape != 'c'&& shape != 'r' && shape != 't'){
        printf("Invalid shape type. Try again: %c", shape);
        scanf("%c", &shape);
        
    }
    
        if (shape == 'c'){
            int radius ;
            printf("Enter radius: ");
            scanf("%d", &radius );
            float area_circle;
            area_circle= calculate_area_of_circle(radius);
            printf("The area of circle is %f", area_circle);
            }  
                    
        else if (shape == 'r'){
            int width , lenght;
            printf("Enter width ,lenght: ");
            scanf("%d %d", &width , &lenght );
            float area_rectangle;
            area_rectangle= calculate_area_of_rectangle(width,lenght);
            printf("The area of rectangle is %f", area_rectangle);
            }       
            
        else if (shape == 't'){
            int base ,  height;
            printf("Enter base , height: ");
            scanf("%d %d", &base , &height );  
            float area_triangle;
            area_triangle= calculate_area_of_triangle(base,height);
            printf("The area of triangle is %f", area_triangle);
            }
    }
    

       
  
