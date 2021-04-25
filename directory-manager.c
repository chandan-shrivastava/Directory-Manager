#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int

//Implement addition of file/directory inside current directory.
void add()
{
    //Take user input for type(file/directory) and name. 
}

//Change current directory to any directory by taking input the complete path to that directory.
void move()
{
    // Error handling should be done for incorrect paths.
}

// Implement saving directory with an alias.
void alias()
{
    //Take input the complete path to that directory and the alias.
    //Error handling should be done for incorrect path and for already-exiting aliases. 
}

//Change the current directory to any directory by taking input the alias of that directory.
void teleport()
{
    //Error handling should be done for non-existing aliases.
}

//Implement searching all the files/directories with given prefix inside current directory.
void find()
{
    //Take a prefix-string input for search. Output all the files/directories with given prefix.
}

// Terminates the program.
void quit()
{
    //Free memory.
}

int main(void)
{
    ll operation;
    while (1)
    {
        printf("Enter 1 to add a file/directory\n");
        printf("Enter 2 to move a directory\n");
        printf("Enter 3 to add alias to a directory\n");
        printf("Enter 4 to teleport or change path of a directory\n");
        printf("Enter 5 to find/search for a directory\n");
        printf("Enter 6 to quit\n");

        scanf("%lld", &operation);
        switch (operation)
        {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            move();
            break;
        }
        case 3:
        {
            alias();
            break;
        }
        case 4:
        {
            teleport();
            break;
        }
        case 5:
        {
            find();
            break;
        }
        case 6:
        {
            quit();
            return 0;
        }
        default:
        {
            printf("Wrong Input! Try Again.\n");
        }
        }
    }
    return 0;
}
