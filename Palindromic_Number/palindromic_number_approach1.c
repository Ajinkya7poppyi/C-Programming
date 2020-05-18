// C Program To Check Whether a Number is Palindromic Number
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include<stdio.h>
#include<stdio.h>
/*define true and false*/
#define false 0
#define true 1
typedef int bool;

/*Calculate power of number*/
int power(int in_number, int raise_to)
{
    int count_idx, power_output = 1;

    /*Multiply raise_to number of times to in_number*/
    for (count_idx = 1; count_idx <= raise_to; count_idx++)
    {
        power_output = power_output * in_number;
    }

    /*Return Power output*/
    return power_output;
}

/*Return number of digits in number*/
size_t number_digits(int input_num)
{
    /*Initialize count for digits*/
    size_t count=0;

    /*loop until number becomes zero*/
    while(input_num)
    {
        /*Divide number by 10*/
        input_num = input_num/10;
        /*increment count by 1*/
        count++;
    }

    /*return count of digits*/
    return count;
}

/*Reverse the digits of a number*/
int reverse_digits(int num)
{
    int digit, reverse_num=0;

    /*Get number of digits in number*/
    size_t digit_count = number_digits(num);

    /*Take every digit and multiply with 10 factor raised to power of digit count and add to the sum*/
    while (digit_count)
    {
        digit = num%10;
        reverse_num = reverse_num + (power(10, digit_count-1) * digit);
        num = num/10;
        digit_count--;
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