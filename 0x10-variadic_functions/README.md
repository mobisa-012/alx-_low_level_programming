Learning about stdarg.h - header that allows functions to accept an indefinite number of arguments

Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter e.g
 int check (int a, double b,....);
 Variadic functions should have at least one named parameter.
 To access the unnamed arguments 
     a) declare a variable type va_list in the variadic function.
     b) call the macre va_start with two arguments: the first variable is the typr va_list, the second one is the name of the last named parameter of the function

Each invocation of the va_arg macro yielda the next argument.
The first argument to va_arg is va_list and the second is the type of argument passed to the function.
va_end macro should be called on the va_list before the function returns.