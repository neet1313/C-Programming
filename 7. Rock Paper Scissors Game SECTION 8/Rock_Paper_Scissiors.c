///Make Rock Paper Scissors Game using Macro Definitions

#include<stdio.h>
#include<stdlib.h>
/*------------------------MACRO DEFINITIONS-------------------*/
#define DRAW 0
#define computer_win 1
#define user_win 2
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
/*------------------------MACRO DEFINITIONS-------------------*/

/*----------------------PROTOTYPES---------------------------*/
int computer(int);
int user(int);
int win(int, int);
/*----------------------PROTOTYPES---------------------------*/


/*========================MAIN FUNCTION========================*/
int main(){
int user_value, computer_value, computer_score=0, user_score=0;  //declarations
int result;

printf("\t\t\t\t--------------------------------------------------------------\n");
printf("\t\t\t\t--------------------------------------------------------------\n\n\n");
printf("\t\t\t\t\tWELCOME TO ROCK PAPER SCISSORS GAME...\n\n\n");
printf("\t\t\t\t--------------------------------------------------------------\n");
printf("\t\t\t\t--------------------------------------------------------------\n\n\n");


srand(time(NULL)); //time function

do{                                                              //Start of Do-While Loop
printf("What would you like to choose:\n\n");
printf("0 to QUIT\n1 For Rock\n2 For Paper\n3 For Scissors\n\n");
printf("Enter HERE: ");
scanf("%d", &user_value);

if(user_value == 0){ //Quit if user enters 0
    break;
}

user(user_value);  //Calling user_value

computer_value= (rand()%3)+1; //Choosing value 1-3 randomly for computer
computer(computer_value);  //Calling computer_value Function

result= win(user_value, computer_value); //Calling Win Function

if(result == computer_win){    //Score of computer and user
    computer_score++;
}else if(result == user_win){
    user_score++;
}else{
    computer_score;
    user_score;
}

printf("\n------------------------------------------\n\n");
}while(user_value !=0);                                          //END OF Do-While Loop


if(computer_score == user_score){
    printf("\n\n\n\n\t\t\t\tIT'S A DRAW.....\n\n\n\n");
}else if(computer_score > user_score){
    printf("\n\n\n\n\t\t\t\tOH NO! COMPUTER WINS THE GAME!!!!\n\n\n\n");
}else{
    printf("\n\n\n\n\t\t\t\tYAYYY! YOU WON THE GAME!!!!\n\n\n\n");
}

printf("\n\n\n\n\t\t\t\tTHANKS FOR PLAYING!!!!\n\n\n\n");

getch();

return 0;
}
/*========================MAIN FUNCTION========================*/


/*----------------------------USER FUNCTION------------------------*/
int user(int user_value){
if (user_value == ROCK){
    printf("\nYOU chose: ROCK");
}else if (user_value == PAPER){
    printf("\nYOU chose: PAPER");
}else if (user_value == SCISSORS){
    printf("\nYOU chose: SCISSORS");
}

 return user_value;
}
/*----------------------------USER FUNCTION------------------------*/


/*----------------------------COMPUTER FUNCTION------------------------*/
int computer(int computer_value){
if (computer_value == ROCK){
    printf("\nComputer chose: ROCK");
}else if (computer_value == PAPER){
    printf("\nComputer chose: PAPER");
}else if (computer_value == SCISSORS){
    printf("\nComputer chose: SCISSORS");
}

 return computer_value;
}
/*----------------------------COMPUTER FUNCTION------------------------*/

/*----------------------------WIN FUNCTION--------------------------*/
int win(int user_value, int computer_value){

int result; //declaration

if(user_value == ROCK && computer_value == PAPER){
    printf("\n\nyou win!\n");
    result= user_win;
}else if (user_value == PAPER && computer_value == SCISSORS){
    printf("\n\ncomputer wins\n");
    result= computer_win;
}else if (user_value == SCISSORS && computer_value == ROCK){
    printf("\n\ncomputer wins\n");
    result= computer_win;
}else if(user_value == PAPER && computer_value == ROCK){
    printf("\n\nyou win!\n");
    result= user_win;
}else if (user_value == SCISSORS && computer_value == PAPER){
    printf("\n\nyou win!\n");
    result= user_win;
}else if (user_value == ROCK && computer_value == SCISSORS){
    printf("\n\ncomputer wins\n");
    result= computer_win;
}
else{
    printf("\n\nIt's a Draw\n");
    result= DRAW;
}

return result;
}
/*----------------------------WIN FUNCTION--------------------------*/
