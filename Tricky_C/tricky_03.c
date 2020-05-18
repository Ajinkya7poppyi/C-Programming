// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int sample_fun()
{
  static int num = 10;
  return num--;
}
int main()
{
  for(sample_fun(); sample_fun(); sample_fun())
    printf("%d ", sample_fun());
  return 0;
}