// Largest of three numbers 
#include <stdio.h> 

int main() 
{ 
	int a = 1, b = 2, c = 3; 
    // yha input le bhi skte h hum
	// condition check krenge a is greatest 
	if (a > b && a > c) 
		printf("%d", a); 

	// condition for b is greatest 
	else if (b > a && b > c) 
		printf("%d", b); 

	// c is greatest 
	else
		printf("%d", c);

	return 0;
}