#include <stdio.h>
#include <math.h>

#define PI 3.14159

/* Catenary Problem
 * y = a cosh(x/a), where y = a + lowest_point
 * l = 2a sinh(x/a)
 * cosh^2 - sinh^2 = 1 */
 void luas1(double sisi){
	double area = (sisi * sisi) * (0.25 - 0.25 * PI + sqrt(2)/2);
	printf("%.2lf", area);
 }

 void luas2(double sisi){
	double area = (sisi*sisi/4)*(0.5*PI - 1);
	printf("%.2lf", area);
 }
int main(){
	double panjang_jembatan, tinggi_tebing, lowest_point, sisi;
	scanf("%lf%lf%lf%lf", &panjang_jembatan, &tinggi_tebing, &lowest_point, &sisi);
	double selisih = tinggi_tebing - lowest_point;
	panjang_jembatan/=2;
	double a;
	a = (selisih*selisih - panjang_jembatan*panjang_jembatan)/(-2 * selisih);
	double x = 2 * a * asinh(panjang_jembatan/(a));
	
	printf("%.2lf\n", x);
	if(x > panjang_jembatan)
		luas1(sisi);
	else
		luas2(sisi);
}