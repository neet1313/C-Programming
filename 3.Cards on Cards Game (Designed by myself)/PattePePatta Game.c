//Think and Design a game on your own...

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

int user_card;      //User's Card No.
int computer_card;   //Computer's Card No.
int cards_thrown = 0;
int your_score=0;
int computer_score=0;

int card= time(NULL);
srand(card);

printf("************************** PATTE PE PATTA / CARD ON CARD **************************\n\n\n\n");

printf("////  INSTRUCTIONS:  ////\n\n\n");
printf("-->> On your turn you have to Press ENTER to pick up and throw a card from the deck\n\n");
printf("-->> After your turn the computer picks up and throws a card from the deck\n\n");
printf("-->> If your card Number is same as the computer's card number you will be\n     shown that it's a MATCH ON YOU!\n\n");
printf("-->> AND If it's a match on you, you get the total number of points as number of cards thrown by both of you.\n\n\n\n");
printf("//////////////////////////////  LET THE GAME BEGIN!!! ///////////////////////////////\n\n\n\n");

printf("*******************************************************************************************\n\n\n\n");



printf("It's your Turn first....\n\n");
/*--------------------------------------------------------------------------------------------------*/
do{
printf("Press Enter to pick up and throw a card from the deck...\n\n");           //User's turn
getch();

user_card= rand()%13+1; //User's card No.

printf("YOUR Card No. is: %d\n", user_card);
printf("Total Cards Thrown by both the parties: %d", ++cards_thrown);

if(user_card == computer_card){
    printf("\n\n                        YAYYY...IT'S A Match ON YOU!!!\n\n");
    printf("\n\n\n            YOUR SCORE : %d (Earlier Score) + %d (Total cards Thrown) = %d\n\n\n", your_score, cards_thrown, your_score+cards_thrown);

    your_score= your_score + cards_thrown;

    printf("\n\n\n\n                      (press Enter to refold.......)");

    cards_thrown = 1;  //Resetting the No. of cards thrown
    getch();
    system("cls");  //Clearing Up the Screen
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                        R . E . F . O . L . D . I . N . G ........ \n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("                                              <press enter to continue>");
    getch();
    system("cls");
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
printf("\n\nPress Enter and computer will take its turn... \n\n");           //Computer's Turn
getch();

computer_card= rand()%13+1; //Computer's Card No.

printf("\nCOMPUTER'S Card No. is: %d\n", computer_card);
printf("Total Cards Thrown by both the parties: %d\n", ++cards_thrown);

if(computer_card == user_card){
    printf("\n\n                    OH NO!...IT'S A MATCH ON THE COMPUTER!!!\n\n");
    printf("\n\n\n            COMPUTER'S SCORE : %d (Earlier Score) + %d (Total cards Thrown) = %d \n\n\n", computer_score, cards_thrown, computer_score+cards_thrown);

    computer_score= computer_score + cards_thrown;

    printf("\n\n\n\n                      (press Enter to refold.......)");

    cards_thrown = 1;  //Resetting the No. of cards thrown
    getch();
    system("cls");  //Clearing up the screen
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                        R . E . F . O . L . D . I . N . G ........ \n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("                                              <press enter to continue>");
    getch();
    system("cls");
}
printf("----------------------------------------------------------------------\n\n");

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

}while(user_card <= 13);  //End of Do-while loop.

return 0;
}
