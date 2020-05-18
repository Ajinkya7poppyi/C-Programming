// C Program To Concatenate Without Using string.h (Position Counter Based) 
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>

/*define true and false*/
#define false 0
#define true 1
typedef int bool;

#define NULLCHAR '\0'

/* Copy one string to other*/
bool strcpy(char* dest_string, const char* src_string)
 {
    /*Position counter*/
     size_t i=0;
     bool status= true;

     /*Check for NULL character and copy value at every position in source string to destination string*/
     while( (*(dest_string+i) = *(src_string+i)) != NULLCHAR)
     {
         i++;
     }

     return status;
 }

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
        if(strcpy(dest_string, input_string))
        {
            printf("You entered: %s and Destination Copied String: %s\n", input_string, dest_string);
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