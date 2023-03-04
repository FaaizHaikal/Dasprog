/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 30 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Mencatat stok awal dan transaksi perusahaan minuman, kemudian menampilkan stok akhir */

#include <stdio.h>		/* definisi printf dan scanf */

int main()
{
	int id_1;		/* input/output - stok awal/akhir minuman Piels */
	int id_2;		/* input/output - stok awal/akhir minuman Coors */
	int id_3;		/* input/output - stok awal/akhir minuman Bud */
	int id_4;		/* input/output - stok awal/akhir minuman Iron City */
	int id;				/* input – ID minuman yang ditransaksi */
	int tipe_transaksi;	/* input – pilihan transaksi */
	int transaksi;		/* input – jumlah transaksi */

	/* Dapatkan jumlah tiap jenis minuman pada stok awal minggu */
	printf("STOK AWAL MINUMAN\n");
	printf("Masukkan jumlah minuman Piels (ID 1)\t> ");
	scanf("%d", &id_1);
	printf("Masukkan jumlah minuman Coors (ID 2)\t> ");
	scanf("%d", &id_2);
	printf("Masukkan jumlah minuman Bud (ID 3)\t> ");
	scanf("%d", &id_3);
	printf("Masukkan jumlah minuman Iron City (ID 4)> ");
	scanf("%d", &id_4);

	do
	{
		/* Tampilkan formulir pencatatan transaksi */
		printf("\n\nFORMULIR PENCATATAN TRANSAKSI\n");
		printf("Masukkan ID = -1 untuk keluar\n");
		printf("Masukkan ID minuman yang ditransaksi> ");
		scanf("%d", &id);
		/* Jika ada transaksi, masukkan ID minuman */
		/* Jika ID dikenal, masukkan tipe transaksi */
		if(id==1 || id==2 || id==3 || id==4)
		{
			printf("1. Pembelian\n2. Penjualan\nPilih jenis transaksi> ");
			scanf("%d", &tipe_transaksi);
			/* Jika tipe transaksi valid, masukkan jumlah transaksi */
			if(tipe_transaksi==1 || tipe_transaksi==2)
			{
				printf("Masukkan jumlah transaksi> ");
				scanf("%d", &transaksi);
				/* Tipe transaksi pembelian, maka jumlahkan stok awal dengan jumlah transaksi */
				if(tipe_transaksi==1)
				{
					switch(id)
					{
						case 1:
							id_1+=transaksi;
							break;
						case 2:
							id_2+=transaksi;
							break;
						case 3:
							id_3+=transaksi;
							break;
						case 4:
							id_4+=transaksi;
							break;
					}
				}
				/* Tipe transaksi penjualan */
				else if(tipe_transaksi==2)
				{
					/* Jika transaksi lebih kecil daripada stok awal, kurangkan stok awal dengan jumlah transaksi */
					if(id==1 && transaksi<id_1)
						id_1-=transaksi;
					else if(id==2 && transaksi<id_2)
						id_2-=transaksi;
					else if(id==3 && transaksi<id_3)
						id_3-=transaksi;
					else if(id==4 && transaksi<id_4)
						id_4-=transaksi;
					/* Jika transaksi lebih besar daripada stok awal, keluarkan pesan eror dan ulangi formulir pencatatan transaksi */
					else
					{
						printf("Stok tidak mungkin habis terjual.\n");
						continue;
					}
				}
			}
			/*  Jika tipe transaksi tidak valid, keluarkan pesan eror dan ulangi formulir pencatatan transaksi */
			else
			{
				printf("Transaksi tidak valid. Ulangi pencatatan transaksi.\n");
				continue;
			}
		}
		/* Jika tidak ada transaksi, langsung tampilkan stok akhir */
		else if(id == -1)
		{	
			break;
		}
		/* Jika ID tidak dikenal, keluarkan pesan eror dan ulangi formulir pencatatan transaksi */
		else
		{
			printf("ID tidak dikenal. Ulangi pencatatan transaksi.\n");
			continue;
		}
	} while(id != -1);

	/* Tampilkan stok akhir tiap jenis minuman */
	printf("\n\nSTOK AKHIR MINUMAN\n");
	printf("Jumlah Piels (ID 1)\t: %d\n", id_1);
	printf("Jumlah Coors (ID 2)\t: %d\n", id_2);
	printf("Jumlah Bud (ID 3)\t: %d\n", id_3);
	printf("Jumlah Iron City (ID 4)\t: %d", id_4);

	return 0;
}

