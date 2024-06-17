#include <stdio.h>
#include <stdlib.h> // For system()
#include <cs50.h>

int main(void)
{
    printf("Hello Aliyah, this is your Dad.\nI would like you to know that I miss you and that I love you greatly.\n");
    char answer = get_char("Are you ready to find out? (y/n)");

    if (answer == 'y')
    {
        // Continue with the program
        printf("What do you want to do?\n");
        printf("1. Play Python game\n");
        printf("2. Run GTA server\n");
        int choice = get_int("Enter your choice:");

        switch (choice)
        {
            case 1:
                // Use system call to run Python game
                system("python game.py");
                break;
                {
                    printf("your moms is my main love im glad you know\n");
                }

            case 2:
                // Use system call to run GTA server
                system("your_gta_server_executable");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
    else if (answer == 'n')
    {
        // Close the program
        printf("You chose no. Exiting...\n");
        return 0; // Return 0 to indicate successful termination
    }
    else
    {
        // Handle invalid input
        printf("Invalid input. Please enter 'y' or 'n'.\n");
    }

    // Further code execution if needed
    {
        printf("i love you\n");
    }
    return 0;
}
