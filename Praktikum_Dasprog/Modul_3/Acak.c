#include <stdio.h>

int solve2(const int ar[],int start, int end)
{
	if(start<=end)
	{
		printf("%d ", ar[start]);
		solve2(ar, start+2, end);
	}
	else
	{
		return 0;
	}
}

int solve(const int ar[], int end)
{
	if(end>=0)
	{
		printf("%d ", ar[end]);
		solve(ar, end-2);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int ar[n];
	for(int i=0;i<n;i++)
		scanf("%d", &ar[i]);
	solve(ar, n-2);
	solve2(ar, 0, n); 
	return 0;
}