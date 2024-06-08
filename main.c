#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game logic
int game(char you, char computer) {
    // If both the user and computer have chosen the same thing
    if (you == computer)
        return -1;

    // Winning conditions for the user
    if ((you == 's' && computer == 'z') || 
        (you == 'p' && computer == 's') || 
        (you == 'z' && computer == 'p'))
        return 1;
    else
        return 0;
}

// Driver Code
int main() {
    int n;
    char you, computer;
    int result;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 99
    n = rand() % 100;

    // Using simple probability, roughly divide 100 among stone, paper, and scissor
    if (n < 33)
        computer = 's';  // s denotes Stone
    else if (n < 66)
        computer = 'p';  // p denotes Paper
    else
        computer = 'z';  // z denotes Scissor

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    // Input from the user
    scanf(" %c", &you);

    // Function call to play the game
    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    } else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

    printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", you, computer);

    return 0;
}
