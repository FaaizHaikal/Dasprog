/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 30 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menerima masukan beberapa kecepatan kendaraan, kemudian 
 * mengkategorikannya dan menghitung rata-rata kecepatannya */

#include <stdio.h>

int main()
{
	int kendaraan;					/* input - jumlah kendaraan */
	double kecepatan;				/* input - kecepatan kendaraan */
	int cepat = 0;					/* output - jumlah kendaraan berkecepatan tinggi */
	int sedang = 0;					/* output - jumlah kendaraan berkecepatan sedang */
	int lambat = 0;					/* output - jumlah kendaraan berkecepatan lambat */
	double rataan;					/* output - kecepatan rata-rata semua kendaraan */
	double kecepatan_total = 0;		/* jumlah semua kecepatan */

	/* Dapatkan jumlah kendaraan */
	printf("Masukkan jumlah kendaraan> ");
	scanf("%d", &kendaraan);

	for(int i = 1; i<=kendaraan; i++)
	{
        /* Dapatkan kecepatan kendaraan sebanyak jumlah kendaraan */
		printf("Masukkan kecepatan kendaraan ke-%d (mil/jam)> ", i);
		scanf("%lf", &kecepatan);

		/* Kategorikan kendaraan sebanyak dan hitung jumlah tiap kategori */
		if(kecepatan>=90)
			cepat++;
		else if(50<=kecepatan && kecepatan < 90)
			sedang++;
		else
			lambat++;

		/* Hitung total kecepatan */
		kecepatan_total += kecepatan;
	}
	
	/* hitung rata-rata kecepatan */
	rataan = kecepatan_total/kendaraan;

	printf("Jumlah kendaraan berkecepatan tinggi adalah sebanyak %d kendaraan\n", cepat);
	printf("Jumlah kendaraan berkecepatan sedang adalah sebanyak %d kendaraan\n", sedang);
	printf("Jumlah kendaraan berkecepatan lambat adalah sebanyak %d kendaraan\n", lambat);
	printf("Rata-rata kecepatan seluruh kendaraan adalah %.2f mil/jam", rataan);

	return 0;

}

