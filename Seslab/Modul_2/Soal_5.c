#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	gets (str);
	int counter_a = 0;
    int counter_i = 0;
    int counter_u = 0;
    int counter_e = 0;
    int counter_o = 0;
	for(int i=0;i<100;i++)
	{
		if(str[i] == 'A' || str[i] == 'a')
		{
			counter_a++;
		}
			else if(str[i] == 'I' || str[i] == 'i')
			{
				counter_i++;
			}
				else if(str[i] == 'U' || str[i] == 'u')
				{
					counter_u++;
				}
					else if(str[i] == 'E' || str[i] == 'e')
					{
						counter_e++;
					}
						else if(str[i] == 'O' || str[i] == 'o')
						{
							counter_o++;
						}
	}
	printf("A/a : %d\n", counter_a);
	printf("I/i : %d\n", counter_i);
	printf("U/u : %d\n", counter_u);
	printf("E/e : %d\n", counter_e);
	printf("O/o : %d", counter_o);

	return 0;	
}
