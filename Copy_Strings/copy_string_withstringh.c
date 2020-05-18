// C Program To Concatenate Using string.h Library 
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
    char dest_string[100];
    char state_continue;

    while(true)
    {
        printf("Please Enter String:");

        /*Get characters from user*/
        if(NULL == gets(input_string))
        {
            printf("Error Occurred While Reading String\n");
        }

        /*strcpy function copies contents from input string to destination string. First argument here is destination where string is to copied and second is the input string*/
        strcpy(dest_string, input_string);
        printf("You entered: %s and Destination Copied String: %s\n", input_string, dest_string);

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