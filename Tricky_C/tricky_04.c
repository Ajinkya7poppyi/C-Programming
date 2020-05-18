// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int main()
{
  int var_one = 10;
  static int var_two = var_one;

  if(var_one == var_two)
     printf("Equal");
  else if(var_one > var_two)
     printf("Greater");
  else
     printf("Less");
  return 0;
}