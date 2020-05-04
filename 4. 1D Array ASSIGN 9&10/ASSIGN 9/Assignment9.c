//Do it without checking the answers.

#include<stdio.h>
#include<math.h>

int main(){
float a[20], b[20], suma=0, sumb1=0, sumb2=0, sumb=0; //1. Declaring 2 arrays

int i, first_number;

printf("Enter Max 20 numbers, terminate with 0.0\n\n");

for(i=0; i<20; i++){
if(i == 0){
printf("\nFirst Number: ");
scanf("%f", &a[0]);                                                      //First 20 Inputs
    if(a[0]== 0.0){
        break;
    }
}else{
printf("\nNext: ");
scanf("%f", &a[i]);
    if(a[i]== 0.0){
        break;
    }
    }
  }
/*------------------------------------------------------------------------------*/

printf("\nThere are in total %d digits", i);  //Total Digits.

printf("\n\nInput Array\n\n");

for(i=0; i<20; i++){
    printf("%16.6f\n\n", a[i]);//Making it right justified
    suma = suma + a[i];                                         //First Array output
    if(a[i]== 0.0){
        break;
    }
}
/*------------------------------------------------------------------------------*/
printf("Second Array\n\n");
for(i=0; i<20; i++){            //3. a and b
    if(i%2==0){
      b[i]= a[i];
      b[i]= 2* b[i];
      printf("%16.6f\n\n", b[i]);
      sumb1= sumb1 + b[i];
      if(a[i]== 0.0){
        break;
    }
    }else{                                                           //Second Array Output
    b[i]= a[i];
    b[i]= cbrt(b[i]);
    printf("%16.6f\n\n", b[i]);
    sumb2= sumb2+b[i];
    if(a[i]== 0.0){
        break;
    }
 }
}
/*-----------------------------------------------------------------------------------*/
sumb= sumb1+sumb2;                      //3c

printf("\n\nSum of First Array: %f\n", suma); //Sum of first array
                                                           //Sum of first and second Array
printf("\nSum of Second Array: %f\n\n", sumb);  //Sum of second array
getch();
return 0;
}
/*-------------------------------------FINISH-----------------------------------------*/
