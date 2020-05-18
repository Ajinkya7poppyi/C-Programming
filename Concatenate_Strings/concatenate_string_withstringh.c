// C Program To Concatenate Strings
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
    /*Input Strings for concatenating*/
    char input_string1[100];
    char input_string2[100];
    char state_continue;

    while(true)
    {
        printf("Please Enter String 1:");

        /*Get characters from user*/
        if(NULL == gets(input_string1))
        {
            printf("Error Occurred While Reading String 1\n");
        }

        printf("Please Enter String 2:");

        /*Get characters from user*/
        if(NULL == gets(input_string2))
        {
            printf("Error Occurred While Reading String 2\n");
        }

        /*Check if size of characters in input string have enough space in string1.*/
        if(sizeof(input_string1) >= (strlen(input_string1)+strlen(input_string2)))
        {
            /*strcat function copies contents from input string2 to input string1. First argument here is destination where string is to be concatenated and second is the other string to concatenate*/
            if(strcat(input_string1, input_string2))
            {
                printf("Concatenated String: %s\n", input_string1);
            }
        }
        else
        {
            printf("Not Enough Space for String 2.\n");
        }

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