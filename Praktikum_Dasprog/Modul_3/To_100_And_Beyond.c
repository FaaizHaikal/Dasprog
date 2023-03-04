#include <stdio.h>

int solve(int n, int m)
{
	if(n<0 || n==m)
		return 0;
	else if(n==0)
		return 1;
	else
		return solve(n-1, m) + solve(n-2, m)+solve(n-3,m)+solve(n-4,m)+solve(n-5,m)+solve(n-6,m);
}

int main()
{
	int n, m;
    scanf("%d%d",&n,&m);
	int o = 100-n;
	if(m!=-1)
		m = m - n;
	int x = solve(o, m);
	printf("Ada %d cara nih!", x);
	
	
	return 0;
}