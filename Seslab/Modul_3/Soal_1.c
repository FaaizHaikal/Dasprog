#include <stdio.h>

int faktorial(int);

int main()
{
    int n;
	scanf("%d", &n);
	printf("%d", faktorial(n));
	
	return 0;
}

int faktorial(int x)
{
	if(x == 0)
		return 1;
	else
		return x * faktorial(x-1);
}
