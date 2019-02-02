#include <time.h>
#include <stdio.h>

 void code()
 {
	int a[100];
	size_t s = sizeof(a);
	printf("%zu bytes\n", s);	
	size_t num = s/sizeof(int);
	printf("space for storing %zu elements\n", num);
	
 }
 

 int main ()
 {
	clock_t t;
	printf("start: %d \n", (int) (t= clock()));
			
	code();
			
	printf ("stop: %d \n", (int) (t = clock()-t));
	printf ("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);

	return 0;
 }