#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

    //Array declaration.
    int POINT[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    //Get user's input.
    char word1 = get_string("Player 1: ");
    char word2 = get_string("Player 2: ");

    //Score both words.
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);



    int compute_score(char word)
    {

    }
}