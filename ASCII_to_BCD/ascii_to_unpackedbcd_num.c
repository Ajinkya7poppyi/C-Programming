// C Program To Convert ASCII Number to Unpacked BCD (Number Only) 
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Maximum number of digits for conversion*/
#define BUFFSIZE    10
/* Zero character*/
#define ZERO_CHAR   '0'
/* New line*/
#define NEWLINE     '\n'
/* Newline*/
#define ENDOFLINE   '\0'
/* Decimal zero*/
#define ZERO         0

/*ASCII To Unpacked BCD Conversion*/
void ascii_to_unpacked_bcd(unsigned char* ascii_text, unsigned char* bcd_text)
{
    /*Get length of ASCII input*/
    size_t ascii_length = strlen((char*)ascii_text);

    /*For every ASCII character*/
    for (size_t i=0; i<ascii_length; i++)
    {
        /*Set Most Significant 4 bits to 0.*/
        bcd_text[i] &= 0x0F;
    }
}

/*Main Loop of program*/
int main()
{
    /*Input characters for ASCII conversion*/
    unsigned char input_ascii[BUFFSIZE];

    /*Output of ASCII Conversion Unpacked BCD Data*/
    unsigned char output_bcd[BUFFSIZE];

    /*Set all buffers to zero value*/
    memset(input_ascii, ZERO, BUFFSIZE);
    memset(output_bcd, ZERO, BUFFSIZE);

    /*This will take maximum BUFFSIZE inputs from user and store it to char array with null-termination. One byte for null-character*/
    fgets((char*)input_ascii, BUFFSIZE, stdin);

    /*Get size of ASCII characters*/
    size_t size_ascii= strlen((char*)input_ascii);

    /*Check if last byte in array is New Line and replace it with NULL character*/
    if(input_ascii[size_ascii-1] == NEWLINE)
    {
        input_ascii[size_ascii-1] = ENDOFLINE;
    }

    /*Convert ASCII to Unpacked BCD*/
    ascii_to_unpacked_bcd(input_ascii, output_bcd);

    /*Get size of Output BCD characters*/
    size_t size_bcd= strlen((char*)output_bcd);

    /*Print All unpacked BCD values*/
    printf("BCD value for %s is",input_ascii);
    for (size_t i = 0; i < size_bcd; i ++)
    {
        printf(" %02x", output_bcd[i]);
    }
    return 0;
}