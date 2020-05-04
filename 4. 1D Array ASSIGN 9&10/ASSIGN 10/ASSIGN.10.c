#include<stdio.h>

int main(){

int a[10]={0},i,n,d;    //1.
printf("You can Print atmost 10 digit number.\n"); //2
printf("What are the total number of digits in the number: ");//3
scanf("%d", &n);

for(i=0; i<n; i++){
            if(n>10){
        printf("\n\nERROR! Total digits can't exceed 10\n");
        break;
    }
    printf("Input next digit: ");
    scanf("%d", &a[i]);
}

printf("\n\nThe number that you gave is: "); //5
for(i=0; i<n; i++){
    if(n>10){
        printf(" ERROR!!!\n");
        break;
    }
    printf("%d", a[i]);
}

printf("\n\nInput a digit >=1 and <=9: ");  //6
scanf("%d", &d);
while(d>10 && d<1){
    printf("\nERROR!\n\n");
    break;
}


return 0;
}
