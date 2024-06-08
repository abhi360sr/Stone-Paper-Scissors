# Stone-Paper-Scissors
Rock, Paper, Scissors" is a classic hand game that is often used as a simple decision-making tool or as a game for two players. The game is known for its simplicity and its universal appeal, as it requires no special equipment and can be played anywhere. 
The provided code is a simple implementation of the classic "Rock, Paper, Scissors" game. The code allows a user to play the game against the computer. Here's a detailed explanation of how the code works:

Game Logic Function (game):

This function takes two characters as input: you (the user's choice) and computer (the computer's choice).
It first checks if both choices are the same, resulting in a draw (return -1).
It then checks the conditions where the user wins:
Stone (s) beats Scissors (z)
Paper (p) beats Stone (s)
Scissors (z) beats Paper (p)
If any of these conditions are true, it returns 1 indicating the user has won.
Otherwise, it returns 0 indicating the computer has won.
Main Function (main):

The main function handles the interaction with the user and the computer's random choice.
It seeds the random number generator with the current time to ensure different outcomes in each run.
A random number n between 0 and 99 is generated and used to decide the computer's choice:
If n is less than 33, the computer chooses Stone (s).
If n is between 33 and 65, the computer chooses Paper (p).
If n is greater than 65, the computer chooses Scissors (z).
It prompts the user to enter their choice and reads it using scanf.
The game function is called with the user and computer choices.
Based on the result returned by the game function, it prints the outcome of the game.
Finally, it prints what both the user and the computer chose.
