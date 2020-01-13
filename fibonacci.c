#include <stdio.h>
#include <stdlib.h>

int calc_fibonacci (int n) {	
	if (n == 0 || n == 1) return 1;
	else return (calc_fibonacci(n - 1) + calc_fibonacci(n - 2));	
}


int main () {
	
	int n = 0;	
	scanf("%d", &n);	
	
	printf("%d", calc_fibonacci(n));	
	
	return (0);
}
