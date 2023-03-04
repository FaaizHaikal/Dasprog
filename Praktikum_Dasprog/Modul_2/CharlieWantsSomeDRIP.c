#include <stdio.h>
#include <string.h>

#define ll long long 

int main()
{
	int n;
	//Menerima masukan jumlah barang di toko
	scanf("%d", &n);
	char item[n][15]; //Array untuk menyimpan n buah barang
	int quantity[100]; //Array untuk menyimpan jumlah barang ke-n
	//Menerima masukan n buah barang dan jumlahnya
	for(int i=0;i<n;i++)
		scanf("%s %d", &item[i], &quantity[i]);
	int c;
	//Menerima masukan banyak barang yang dibeli Charlie
	scanf("%d", &c);
	char c_item[c][15]; //Array untuk menyimpan c buah barang yang dibeli Charlie
	int c_quantity[100]; //Array untuk menyimpan jumlah barang ke-c yang dibeli Charlie
	//Menerima masukan c buah barang yang dibeli Charlie dan jumlahnya
	for(int i=0;i<c;i++)
		scanf("%s %d", &c_item[i], &c_quantity[i]);
	//Keluarkan CHARLIE
	printf("CHARLIE\n");
	//Keluarkan barang-barang yang dibeli Charlie
	for(int i=0; i<c; i++ )
		printf("%s ", c_item[i]);
	//Keluarkan STORAGE
	printf("\nSTORAGE\n");
	//Keluarkan n buah barang toko dan sisa jumlahnya
	for(int i=0; i<n; i++)
	{	
		//Loop untuk membandingkan jenis barang yang dibeli Charlie dengan barang di toko
		for(int j=0; j<c; j++)
		{
			//Jika jenis barang sama, maka jumlah barang toko berkurang sebanyak jumlah yang dibeli Charlie
			if(strcmp(c_item[j],item[i]) == 0)
				quantity[i] -= c_quantity[j];
		}
		printf("%s: %d\n", item[i], quantity[i]);
	}

	return 0 ;
}
