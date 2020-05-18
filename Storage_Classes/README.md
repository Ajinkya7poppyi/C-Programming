# Storage Classes In C

### Author:- Ajinkya Patil

### Github:- https://github.com/Ajinkya7poppyi

Storage Classes defines the scope, visibility and lifetime of variable/function. This helps user to trace the existence of variable/function during the run-time of a program.

There are 4 storage classes in C – auto, static, register and extern. Lets discuss each of then in details.

** auto: **
 
The default storage all variable declared in a block or a function is automatic. Hence a variable declared without any storage class specification is automatic storage class. On declaration they are assigned a garbage value by default. They are created when function is called and destroyed when function exits. Auto variable are also called as local variables as they are accessible to local function. However, they can also be accessed outside the scope of function/block using pointers. Pointers provide the exact memory location of variable where it resides.

** static: **
A variable which exists during the lifespan of program is static. The compiler is instructed by static storage class to preserve the value of variable. So variable value is stored even after the scope of the function exits. No variable is created nor destroyed every time it comes and goes out of scope. Scope of internal static variable remains inside the function whereas the scope of external static variable remains in side scope of file in which it is declared. By default the variables are assigned value 0 by compiler.

** register:**
Register storage class is instructs the compiler to store the variable in register instead of memory location. This have the same functionality as that of the auto variable.  First it checks if there are any registers available otherwise it stores the variable in memory only. During run time it make the operation faster as variables stored in register are quickly accessible than variables stored in memory. Variables which are to be accessed very frequently are only declared as register improving the overall running time of a program. We can not obtain the address of a register as it not stored in memory location.

** extern:**
extern storage class is used to instruct compiler that the variable is defined somewhere else and is not defined in the same file. A normal global variable can be made extern just placing extern keyword before its declaration/destination in any function/block. The main purpose of using extern variable is in large programs which are divided in different files. We can access the same variable in to different files just by adding the keyword extern.

