#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Array declaration for each letter of the alphabet.
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//Variable to hold the user's input.
int compute_score(string word);

int main(void)
{
    //Header
    printf("****************************************");
    printf("*             SCRABLE GAME             *");
    printf("****************************************");
   
    //Get user's input.
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    //Score both words.
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    //Printe the winner.
    if(score1 > score2)
    {
        printf("Player 1 Wins!\n);
    }
    else if(score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
               
int compute_score(string word)
{
    //This will compute and return score for string.
    //Variable to hold results.
    int results = 0;
    
    //For loop for each character in the alphabet.
    for(int ch = 0; ch < strlen(word); ch++)
    {
        //ASCII table character values for A to Z.
        //if(word[ch] > 65 && word[ch] < 90) //This is another option to do it.
        if(isupper(word[ch]))
        {
            //This line of code will get the values A to Z.
            results = results + POINTS[word[ch] - 65];
        }
        
        //ASCII table character values for a to z.
        //if(word[ch] > 97 && word[ch] < 122) //This is another option to do it.
        if(islower(word[ch]))
        {
            //This line of code will get the values of a to z.
            results = results + POINTS[word[ch] - 97];
        }
    }
    return results;
}
