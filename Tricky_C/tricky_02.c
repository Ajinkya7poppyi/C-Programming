// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int main()
{
    static int dummy_num=7;
    if (--dummy_num){
        main();
        printf("%d ",dummy_num);
    }
}