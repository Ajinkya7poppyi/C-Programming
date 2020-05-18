// C Program To Concatenate Without Using string.h Library 
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
#include <stdlib.h>

/*define true and false*/
#define false 0
#define true 1
typedef int bool;

#define NULLCHAR    '\0'
#define BUFFERSIZE  50
#define ZERO        0

/*Set all bytes in array to desired value*/
 void* memset(void *input_string, int value, size_t input_size)
 {
     /*dummy pointer of input string*/
     unsigned char *dummy_pointer = input_string;

     /*dummy value of value*/
     unsigned char dummy_value = value;

     /*set every input string characters to dummy value until the given input size*/
     while (input_size-- != ZERO)
         *dummy_pointer++ = dummy_value;

     return input_string;
 }

/*Find length of string*/
size_t strlen(const char *input_string)
 {
     /*dummy pointer of input string*/
     const char *dummy_pointer = input_string;

     /* Check every character of string for NULL character*/
     while (*dummy_pointer != NULLCHAR)
     {
         dummy_pointer++;
     }

     /*return difference between dummy pointer and input pointer as it would be string length*/
     return (size_t)(dummy_pointer - input_string);
 }

 /* Copy one string to other*/
bool strcpy(char* dest_string, const char* src_string)
 {
     /*Source and destination string cloned pointers*/
     char *dst = dest_string;
     const char *src = src_string;

     bool status= true;

     /*Check for NULL character and copy value at every position in source string to destination string*/
     while( (*dst++ = *src++) != NULLCHAR);

     return status;
 }

 /*Concatenate two string*/
 char* strcat(char* string_one, const char* string_two)
 {
     /*dummy pointer of input string*/
     char* dummy_pointer = string_one + strlen(string_one);

     /* Copy the contents of string_two into the space at the end of string_one.  */
     strcpy(dummy_pointer, string_two);

     return string_one;
 }

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