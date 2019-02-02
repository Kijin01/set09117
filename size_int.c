#include <stdio.h>

int main()
{
	int integerVariable;
	size_t size;
	
	size = sizeof(integerVariable);
	
	printf("Size of the integer variable is %zu bytes\n", size);
	
	return 0;
}