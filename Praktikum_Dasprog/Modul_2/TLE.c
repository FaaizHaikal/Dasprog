#include <stdio.h>
#define ll long long
int main()
{
    int N, K; 
	ll exp;
	//Menerima masukan jumlah lantai, exp Gaem, dan jumlah kasus
    scanf("%d %lld %d", &N, &exp, &K);
	//Deklarasi array untuk menyimpan exp tiap lantai dan prefix sum array tersebut
    int exp_lantai[N], sum_exp[N];
	//Menerima masukan exp untuk tiap lantai
    for(int i=0;i<N;i++)
		scanf("%d", &exp_lantai[i]);
	//Prefix sum dari array exp_lantai
	//sum_exp[i] = exp_lantai[0] + exp_lantai[1] + ... +  exp_lantai[i-1]
    sum_exp[0] = exp_lantai[0];
	for(int i=1;i<N;i++)
		sum_exp[i] = sum_exp[i-1] + exp_lantai[i];
	
	int x, y; 
	ll sum = 0;
	for(int i=0;i<K;i++)
	{
		//Menerima masukan lantai ke-x dan y untuk setiap kasus
		scanf("%d%d", &x, &y);
		//Menentukan jumlah exp yang dibutuhkan untuk mencapai lantai ke-y dari lantai ke-x
		switch(x)
		{
			case 1:
				sum += sum_exp[y-1] - exp_lantai[y-1];
				break;
			default:
				sum += sum_exp[y-1] - exp_lantai[y-1] - sum_exp[x-2];
				break;
		}
	}
	//Mengecek apakah exp Gaem melebihi atau sama dengan jumlah exp yang dibutuhkan
	if(exp>=sum)
		printf("EZ banget, energiku sisa %lld!", exp-sum);
	else
		printf("NT, kurang %lld energi sih.", sum-exp);
	return 0;
}
