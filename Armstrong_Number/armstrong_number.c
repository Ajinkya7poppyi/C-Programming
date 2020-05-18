// C Program To Find All Armstrong Number in A Given Range
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/


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

/*Check if number is even*/
bool armstrong_check(int num)
{
    /*Set default status to true*/
    bool status = false;
    int digit, sum=0;
    int temp_num=num;

    /*Get number of digits in number*/
    size_t digit_count = number_digits(num);

    /*Take every digit and raise to power of digit count and add to the sum*/
    while (temp_num)
    {
        digit = temp_num%10;
        sum = sum + power(digit, digit_count);
        temp_num = temp_num/10;
    }

    /*Check if sum is equal to number*/
    if ( sum == num)
    {
        status=true;
    }

    /*return status*/
    return status;
}

/*Main loop of program*/
int main()
{
   /*Input variable*/
   int input_num_low, input_num_upper;

   /*Get input from user*/
   printf("Please Range of Numbers To Find An Armstrong Number\n");
   printf("Please Enter An Lower Limit: ");
   scanf("%d", &input_num_low);
   printf("Please Enter An Upper Limit: ");
   scanf("%d", &input_num_upper);

   printf("List of All An Armstrong Numbers in Range %d to %d\n", input_num_low, input_num_upper);

   /*Loop all number with in range to check if its an Armstrong number or not*/
   for(int i=input_num_low; i<= input_num_upper; i++)
   {
        /*Check if number is an Armstrong number*/
        if (armstrong_check(i))
        {
             printf("%d\n", i);
        }
   }
   return 0;
}