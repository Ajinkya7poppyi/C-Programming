// C Program To Print Size of All Data Types
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include<stdio.h>

/*Main Loop*/
int main()
{
    printf("Size of All Data Types\n");

    /*Size of character*/
    printf("Size of Char=%d Bytes\n", sizeof(char));

    /*Size of unsigned character*/
    printf("Size of Unsigned Char=%d Bytes\n", sizeof(unsigned char));

    /*Size of Integer*/
    printf("Size of Int=%d Bytes\n", sizeof(int));

    /*Size of unsigned integer*/
    printf("Size of Unsigned Int=%d Bytes\n", sizeof(unsigned int));

    /*Size of short*/
    printf("Size of Short=%d Bytes\n", sizeof(short));

    /*Size of unsigned short*/
    printf("Size of Unsigned Short=%d Bytes\n", sizeof(unsigned short));

    /*Size of long*/
    printf("Size of Long=%d Bytes\n", sizeof(long));

    /*Size of unsigned long*/
    printf("Size of Unsigned Long=%d Bytes\n", sizeof(unsigned long));

    /*Size of float*/
    printf("Size of Float=%d Bytes\n", sizeof(float));

    /*Size of double*/
    printf("Size of Double=%d Bytes\n", sizeof(double));

    /*Size of long double*/
    printf("Size of Long Double=%d Bytes\n", sizeof(long double));

    return 0;
}