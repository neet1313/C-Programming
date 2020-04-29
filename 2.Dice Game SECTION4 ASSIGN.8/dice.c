/*You need to develop a guess game, where the program is going to roll 2 dice and the user need to
 guess exactly the sum of the values of the rolled dice.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 int main(){
 int user_guess; //Value Entered by the user
 int dice1; //Value of the first Dice.
 int dice2; //Value of the second Dice.
 int dice; //sum of both the dice.
 int t= time(NULL);
 int wrong=0;
 int right=0;
 int score=0;

 srand(t);


 printf("\n\n\n                 ************************ THE DICE GAME **************************\n\n\n\n");
 printf("INSTRUCTIONS \n\n\n\n");
 printf("---->                The computer has rolled two dice, guess the sum...                <----\n\n");
 printf("----> Enter any value Less than or equal to 0 OR more than 12 to terminate <----");
 printf("\n\n\n\n               ***************************************************************\n\n");


 do{

 dice1 = rand()%6+1;
 dice2 = rand()%6+1;
 dice= dice1 + dice2;

 printf("\n\nEnter Your Guess: "); //Asking user to input
 scanf(" %d", &user_guess);

 if(user_guess <= 0 || user_guess > 12){
        printf("\n\n\n                                       THANK YOU FOR PLAYING!! \n\n");
        break;
 }
 else if(user_guess != dice){                         //If guessed number is not equal to the sum of dice number
    printf("\n\nDarn, Bad Attempt!, -5\n\n");

    score= score-5;

    printf("Sum was: %d\n\n\n", dice);

 printf("Total Incorrect: %d\n", ++wrong);          //for a wrong answer
 printf("Total correct: %d\n", right);

 printf("Score: %d", score);            //To know the score
 printf("\n---------------------------------------\n\n");


 }else {
 printf("\n\nYou got it Right!!, +10\n\n");         //If guessed number equal to the sum of dice number

    score= score+10;


 printf("Sum was: %d\n\n\n", dice);

 printf("Total correct: %d\n", ++right);        //For a right answer
  printf("Total Incorrect: %d\n", wrong);

 printf("Score: %d", score);                  //To know the score
 printf("\n---------------------------------------\n\n");

 }
 }while(user_guess>0 && user_guess<= 12);


 return 0;
 }
