#include <stdio.h>

int main()
{
	int n;
	int faktor;
	scanf("%d", &n);
	for(int i=2; i<=n; i++)
	{
		faktor = 1;
		for(int j=2;j<n;j++)
        {
            if(i%j==0)
			{
				faktor=0;
				break;
			}	
        }
		if(faktor)
		{
			printf(" * ");
		}
		else
		{
			printf("%d", i);
		}
	}

	
	return 0;
}
