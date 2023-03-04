#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int baris[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &baris[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n", baris[i]);
	}

	return 0;
}
