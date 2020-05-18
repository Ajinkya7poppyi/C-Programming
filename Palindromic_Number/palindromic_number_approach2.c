// C Program To Check Whether a Number is Palindromic Number
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include<stdio.h>
/*define true and false*/
#define false 0
#define true 1
typedef int bool;

/*Reverse the digits of a number*/
int reverse_digits(int num)
{
    /*Reverse number*/
    int reverse_num=0;

    /*Multiply by 10 reverse number and add reminder of number*/
    while (num)
    {
        reverse_num = reverse_num * 10 + num % 10;
        num = num / 10;
    }

    /*return reversed number*/
    return reverse_num;
}

/*Main loop of program*/
int main()
{
   /*Input variable*/
   int input_num;
   char state_continue;

   while(true)
   {
        /*Get input from user*/
        printf("Check Whether a Number is Palindromic Number\n");
        printf("Please Enter An Integer: ");
        scanf(" %d", &input_num);

        /*Reverse the digits in number*/
        int num_rev = reverse_digits(input_num);

        if(num_rev == input_num)
        {
            printf("%d Is An Palindrome Number\n", input_num);
        }
        else
        {
            printf("%d Is Not An Palindrome Number\n", input_num);
        }

        printf("Do You Want To Continue(Y/N):");

        /*Blank space before scanf tells compiler to skip leading whitespace.*/
        scanf(" %c", &state_continue);

        /*Check if user wants to exit*/
        if((state_continue == 'N') || (state_continue == 'n'))
        {
            break;
        }
   }

   return 0;
}