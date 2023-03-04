#include <stdio.h>

#define ll long long 

int main()
{
	//Menerima masukan ukuran array A dan B
	int n;
	scanf("%d", &n);

	//Deklarasi array A dan B
	//Deklarasi array sumA dan sumB untuk menyimpan prefix sum dari array A dan B
	int A[n], B[n], sumA[n], sumB[n];

	//Menerima masukan array A
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);

	//Menerima masukan array B
	for(int i=0;i<n;i++)
		scanf("%d", &B[i]);
	
	//Prefix sum dari array A dan B
	//sumA[i] = A[0] + A[1] + ... + A[i-1]
	//sumB[i] = B[0] + B[1] + ... + B[i-1]
	sumA[0] = A[0];
	sumB[0] = B[0];
	for(int i=1;i<n;i++)
	{
		sumA[i] = sumA[i-1] + A[i];
		sumB[i] = sumB[i-1] + B[i];
	}

	int t, l, r;
	//Menerima masukan banyaknya kasus
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		//Menerima masukan indeks l dan r untuk setiap kasus
		scanf("%d%d", &l, &r);

		//Mengecek apakah array A dan B senilai pada indeks l hingga r
		switch(l)
		{
			case 0:
				if(sumA[r] == sumB[r])
					printf("YA\n");
				else
					printf("TIDAK\n");
				break;
			default:
				if(sumA[r] - sumA[l-1] == sumB[r] - sumB[l-1])
					printf("YA\n");
				else
					printf("TIDAK\n");
				break;
		}
	}
	return 0 ;
}
