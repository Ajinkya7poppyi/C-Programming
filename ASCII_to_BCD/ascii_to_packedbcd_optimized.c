// C Program To Convert ASCII Number to Packed BCD Optimized Version
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Maximum number of digits for conversion*/
#define BUFFSIZE    10
/* Zero character*/
#define ZERO_CHAR   '0'
/* Nine character*/
#define NINE_CHAR   '9'
/* A character*/
#define CAPA_CHAR   'A'
/* F character*/
#define CAPF_CHAR   'F'
/* a character*/
#define SMALLA_CHAR 'a'
/* f character*/
#define SMALLF_CHAR 'f'
/* New line*/
#define NEWLINE     '\n'
/* Newline*/
#define ENDOFLINE   '\0'
/* Decimal zero*/
#define ZERO         0

/*ASCII To Packed BCD Conversion*/
void ascii_to_packed_bcd(unsigned char* ascii_text, unsigned char* bcd_text)
{
    /*Get length of ASCII input*/
    size_t ascii_length = strlen((char*)ascii_text);

    /*Check for Number of characters in array whether they are odd and also check if the size is less than of size of array*/
    if ((ascii_length & 0x01) && (ascii_length < BUFFSIZE))
    {
        /*Shift all elements by one position to right*/
        for (size_t loc = ascii_length; loc > 0; loc--)
        {
            ascii_text[loc] = ascii_text[loc - 1];
        }

        /*Add zero to the first position in array*/
        ascii_text[ZERO]=ZERO_CHAR;

        /*increase array length by 1*/
        ascii_length++;
    }

    /*For every ASCII character making group of two bytes*/
    for (size_t i=0; i< ascii_length/2; i++)
    {
        /*One loop for the two loops.*/
        for(size_t loc_pos=0; loc_pos< 2; loc_pos++)
        {
            /*Check if the value lied in 0-9 range and subtract from '0' to get decimal value and shift to Most Significant Bits*/
            if(ascii_text[i*2+loc_pos] >= ZERO_CHAR && ascii_text[i*2+loc_pos] <= NINE_CHAR)
            {
                bcd_text[i] |= ( ascii_text[i*2+loc_pos] - ZERO_CHAR)  << (4*(1-loc_pos)) ;
            }
            /*Check if the value lied in A-F range and subtract from 'A' to get decimal value and shift to Most Significant Bits. Add decimal value of a i.e 10*/
            else if (ascii_text[i*2+loc_pos] >= CAPA_CHAR && ascii_text[i*2+loc_pos] <= CAPF_CHAR)
            {
                bcd_text[i] |= ( 10 + ascii_text[i*2+loc_pos] - CAPA_CHAR )  << (4*(1-loc_pos)) ;
            }
            /*Check if the value lied in a-f range and subtract from 'a' to get decimal value and shift to Most Significant Bits. Add decimal value of a i.e 10*/
            else if (ascii_text[i*2+loc_pos] >= SMALLA_CHAR && ascii_text[i*2+loc_pos] <= SMALLF_CHAR)
            {
                bcd_text[i] |= ( 10 + ascii_text[i*2+loc_pos] - SMALLA_CHAR)  << (4*(1-loc_pos)) ;
            }
        }
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
    ascii_to_packed_bcd(input_ascii, output_bcd);

    /*Get size of Output BCD characters*/
    size_t size_bcd= strlen((char*)output_bcd);

    /*Print All Packed BCD values*/
    printf("BCD value for %s is",input_ascii);
    for (size_t i = 0; i < size_bcd; i ++)
    {
        printf(" %02x", output_bcd[i]);
    }
    return 0;
}