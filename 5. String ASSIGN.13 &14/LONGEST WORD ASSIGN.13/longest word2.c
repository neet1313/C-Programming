///Print the longest word in the string and how many characters it holds.

#include<stdio.h>
#include<string.h>
int main(){

char my_str[] = "In this programme we will find the longest word in a string";
char word[12], longest_word[12];
int i=0,j, longest =0;


while(my_str[i] != '\0'){
    j=0;                            //Resets the value of word string
    while((my_str[i] != '\0') && (my_str[i] != ' ')){
    word[j++] = my_str[i++]; //Increments the characters
  }
 word[j]= '\0'; //Terminate the word character as well along with my_str string

if(strlen(word) >= longest){
    longest= strlen(word);
    strcpy(longest_word, word);
}

if(my_str[i] == ' '){   //Moving to new character after the space between words.
    i++;
  }
}

printf("The Longest word is: %s\n\n", longest_word);
printf("No. of characters: %d", longest);


return 0;
}
