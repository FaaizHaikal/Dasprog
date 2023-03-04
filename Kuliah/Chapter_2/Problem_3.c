/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 8 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Mengitung perkiraan suhu T (°C) dalam freezer setelah terjadi mati lampu selama t jam
 * dengan T = (4*t*t)/(t+2)-20 */

 #include <stdio.h>


 int main()
 {
    /* Variabel untuk menyimpan kode simbol derajat menurut ASCII */
    const char degree = 248;

    /* Variabel untuk menyimpan data jam dan menit lamanya mati lampu, 
     * hasil konversi lama mati lampu ke satuan jam, dan suhu */
    double jam, menit, t, T;

    /* Mendapatkan nilai jam dan menit lamanya mati lampu dari pengguna */
    printf("Masukkan lama waktu mati lampu dalam jam dan menit secara terpisah (misal, 2 30)> \n");
    scanf("%lf%lf", &jam, &menit);

    /* Mengkonversikan hasil input dari pengguna ke dalam satuan jam */
    t = jam + (menit/60);

    /* Mendapatkan nilai perkiraan suhu */
    T = (4*t*t)/(t+2)-20;

    /* Menampilkan hasil perhitungan perkiraan suhu */
    printf("Suhu dalam freezer sekitar %f%cC", T, degree);

    return 0;
 }

