// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int func_dummy(int num)
{
    static int s = 0;
    s = s + num;
    return (s);
}

int main()
{
    int var = 10, x;
    while (var > 0)
    {
        x = func_dummy(var);
        var--;
    }
    printf ("%d ", x);
    return 0;
}