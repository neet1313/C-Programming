/* my_function will find and return the highest number that is divisible by third parameter in the
range >first and <=second. If no such Value found function should return to 0. But first you will
declare a prototype in the beginning. */

#include<stdio.h>

int my_function(int,int,int); //prototype of my_function

int main(){
int i,a,b,c;

//Enter 3 numbers from User:

printf("Enter First Number: ");
scanf("%d", &a);
printf("Enter Second Number: ");
scanf("%d", &b);
printf("Enter third Number: ");
scanf("%d", &c);

i = my_function(a, b, c);
printf("%d", i);

return 0;
}

/*-------------------------------------my_function()--------------------------*/
int my_function(int first,int second,int third){
 int x,a;
 for(x=first; x<=second; x++){
    if(third > second){
    a=0;
  }else if(x%third==0) {
   a=x;
  }
 }
/*-------------------------------------my_function()--------------------------*/

 return a;
}




