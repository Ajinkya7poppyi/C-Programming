// C Program to Check Whether a Number is Even or Odd (Bitwise Operator)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include<stdio.h>

/*define true and false*/
#define false 0
#define true 1
typedef int bool;

/*Check if number is even*/
bool even_check(int num)
{
    /*Set default status to true*/
    bool status = true;

    /*check if last bit of number is 1. As last bit of odd number is always 1. For example 1--> 0x01--> 0000 0001 15--> 0x0F--> 0000 1111*/
    /*We and last digit to check if its 1 or not*/
    if((num & 1) == 1)
        status = false;

    /*return status*/
    return status;
}

/*Main loop of program*/
int main()
{
   /*Input variable*/
   int input_num;

   /*Get input from user*/
   printf("Check If Number Is Even\n");
   printf("Please Enter An Integer: ");
   scanf("%d", &input_num);

  /*Check if number is Even*/
   if (even_check(input_num))
      printf("%d Is An Even Number", input_num);
   else
      printf("%d Is An Odd Number", input_num);

   return 0;
}