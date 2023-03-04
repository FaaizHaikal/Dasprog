/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 4 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung batting average seorang pemain baseball */

#include <stdio.h>		/* definisi printf dan scanf */

int main()
{
	char track_record[1000];		/* input - kode track record pemain */
	char hit = 'H';					/* kode H */
	char out = 'O';					/* kode O */
	char buangan;					/* baca null saat menerima masukan id_pemain */
	int id_pemain;					/* input - nomor angka pemain */
	int jumlah_hit = 0;				/* banyak hit */
	int at_bats = 0;				/* total at bats*/

	/* Menerima data: id pemain dan kode track record */
	printf("Masukkan nomor angka pemain> ");
	scanf("%d", &id_pemain);
	scanf("%c", &buangan);
	printf("Masukkan kode track record pemain> ");
	gets(track_record);

	/* Menghitung banyaknya hit dan total at_bats */
	for(int i=0;track_record[i];i++)
	{
		if(track_record[i] == hit)
		{
			jumlah_hit++;
			at_bats++;
		}
		else if(track_record[i] == out)
		{
			at_bats++;
		}
	}

	/* Menghitung batting average pemain */
	double rataan = jumlah_hit*1.0/at_bats;

	/* Menampilkan track record pemain */
	printf("\nTrack record pemain %d\t\t: %s\n", id_pemain, track_record);
	printf("Rata-rata pemain memukul bola\t: %.3f", rataan);	

	return 0;
}
