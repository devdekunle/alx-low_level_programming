#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - print name from a function
*@name: name to print
*@f: address of function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);


}
