// C program To Print Hello World Without Using Semicolon
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/
#include<stdio.h>

/*Main Loop*/
int main()
{
    /*while condition will execute printf statement and return the status of execution of printf. Printf returns the total number of
    characters written. And on failure it returns the negative number. So when Hello World is written it will return 11 to while
    condition. As !11 = 0*/
    while(!printf("Hello world"))
    {
    }

    return 0;
}