// C Program To Find Length of String Using string.h
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
#include <string.h>
/*define true and false*/
#define false 0
#define true 1
typedef int bool;

/*Main loop of program*/
int main()
{
    /*Input String for computation*/
    char input_string[100];
    char state_continue;

    while(true)
    {
        printf("Please Enter String:");

        /*Get characters from user*/
        if(NULL == gets(input_string))
        {
            printf("Error Occurred While Reading String\n");
        }

        /*strlen function calculates length of string*/
        printf("You entered: %s and Length of String is %d\n", input_string, strlen(input_string));

        printf("Do You Want To Continue(Y/N):");

        /*get character from user*/
        gets(&state_continue);

        /*Check if user wants to exit*/
        if((state_continue == 'N') || (state_continue == 'n'))
        {
            break;
        }
    }


    return 0;
}