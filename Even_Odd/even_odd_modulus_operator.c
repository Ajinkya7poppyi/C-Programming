// C Program to Check Whether a Number is Even or Odd
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
    /*Set default status to false*/
    bool status = false;

    /*check if reminder after division by 2 is 0*/
    if(num % 2 == 0)
        status = true;

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