/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 30 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menampilkan digit-digit dari masukan bilangan bulat n 
 * dan menampilkan apakah n habis dibagi 9 */

#include <stdio.h> 		/* definisi printf dan scanf */

int main()
{
	int n;				/* input – bilangan bulat n */
	int digit;			/* output – digit dari n */
	int i = 1;			/* keterangan digit ke-i */
	int sum = 0;		/* output – jumlah digit dari n, 
							inisialisasikan sebagai 0 */

	/* Dapatkan nilai dari n */
	printf("Masukkan bilangan bulat positif> ");
	scanf("%d", &n);
		
	/* Selama n adalah positif */
	while(n>0)
	{			
		digit = n%10; 									/* Dapatkan digit terakhir dari n */
		printf("Digit ke-%d adalah %d\n", i, digit); 	/* Tampilkan digit terakhir dari n */
		sum += digit;									/* Simpan jumlah digit dari n */
		i++;
		n = n/10;										/* Hapus digit terakhir dari n */
	}
	

	/* Tampilkan jumlah tiap digit dari n */
	printf("Jumlah tiap digit adalah %d.", sum);


	/* Tentukan apakah jumlah digit dari n habis dibagi 9 */
	if(sum%9 == 0)
	{
		printf(" Angka Anda habis dibagi 9.");	/* Jika benar, tampilkan pernyataan n habis dibagi 9 */
	}
	else
	{
		printf(" Angka Anda tidak habis dibagi 9."); /* Jika salah, tampilkan pernyataan n tidak habis dibagi 9 */
	}

	return 0;
}
