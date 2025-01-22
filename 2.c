#include <stdio.h>

double calculateDrugA (int x){
    double DrugA;
    if (x < 18)
      DrugA = 25;
    else if (x < 65)
      DrugA = 45 ;
    else
      DrugA = 30 ;
    return DrugA;
    
} 

double calculateDrugB (int x){
    double DrugA = calculateDrugA (x) ;
    double DrugB ;
    if (x < 18)
        DrugB = 2 * DrugA ;
    else if (x<65)
        DrugB= 5 * DrugA ;
    else
        DrugB = 3 * DrugA ;
        return DrugB;
    
}    
     
double calculateDrugC (int x , char y ){
    double DrugA = calculateDrugA (x) ;
    double DrugB = calculateDrugB (x) ;
    double DrugC ;
    if (y == 'M'){
        if (x< 18)
            DrugC= 30 + DrugB - 1.5 * (DrugA / 2) ;
        else if (x< 65)
             DrugC = 40 + (2 * DrugB) - 3 * (DrugA / 2) ;
        else
            DrugC = 35 + DrugB - 2.5 * (DrugA / 2) ;
        return DrugC;
    }
    if (y =='W') {
        if (x< 18)
            DrugC = 30 +  DrugB - 1.5 * (DrugA / 3 ) ;
        else if (x<65)
            DrugC = 40 + (2 * DrugB) - 3 * (DrugA / 3) ;
        else
            DrugC= 35 + DrugB - 2.5 * (DrugA / 3 ) ;
        return DrugC;
      
    }
}


int main (){

  char gender;
  printf ("Enter your gender(W/M):");
  scanf ("%c", &gender);


  int age;
  printf ("Enter your age:");
  scanf ("%d", &age);


double result1;
result1= calculateDrugA(age);  

double result2;
result2 = calculateDrugB (age);
  
double result3;
result3= calculateDrugC( age , gender);

printf("Your dosage for A is %f mg ,for B is %f mg , for C is %f mg " ,result1, result2, result3 ) ;

}
