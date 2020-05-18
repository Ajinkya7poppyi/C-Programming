// Storage Classes - Extern
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>

/*first_count declared in two.c*/
extern int first_count;

/*extern_print function*/
void extern_print(void)
{
   printf("External Count is %d", first_count);
}