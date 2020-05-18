// Storage Classes - Extern
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>

/*first_one variable in main file*/
int first_count;
/*extern_print function declared in two.c*/
extern void extern_print(void);

/*Main loop*/
int main()
{
    /*first_count initial value*/
   first_count = 10;
   /*external function call*/
   extern_print();
}