#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char options[3][10] = {"rock", "paper", "scissors"};

    printf("Let's play Rock Paper Scissors!\n");

    // Prompt the user to enter their choice
    char user_choice[10];
    printf("Enter your choice (rock/paper/scissors): ");
    scanf("%s", user_choice);

    // Generate a random choice for the computer
    srand(time(NULL));
    int computer_choice_index = rand() % 3;
    char* computer_choice = options[computer_choice_index];

    printf("You chose: %s\n", user_choice);
    printf("Computer chose: %s\n", computer_choice);

    // Determine the winner
    if (strcmp(user_choice, computer_choice) == 0)
    {
        printf("It's a tie!\n");
    }
    else if (strcmp(user_choice, "rock") == 0 && strcmp(computer_choice, "scissors") == 0)
    {
        printf("You win! Rock beats scissors.\n");
    }
    else if (strcmp(user_choice, "paper") == 0 && strcmp(computer_choice, "rock") == 0)
    {
        printf("You win! Paper beats rock.\n");
    }
    else if (strcmp(user_choice, "scissors") == 0 && strcmp(computer_choice, "paper") == 0)
    {
        printf("You win! Scissors beats paper.\n");
    }
    else
    {
        printf("You lose! %s beats %s.\n", computer_choice, user_choice);
    }

    return 0;
}

