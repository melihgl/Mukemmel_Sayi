/*
M�kemmel say�y� bulan program
M�kemmel say� nedir? Kendisi hari� b�t�n pozitif 
b�lenlerini toplay�nca sonu� say�n�n kendisi olur.
*/

#include <stdio.h>
int main () {
	
	int sayi,toplam,i;
	printf("sayiyi yaziniz:\n");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(sayi%i==0) 
			toplam +=i;}
		if(toplam==sayi)
		printf("Mukemmel Sayi");
		else
		printf("Mukemmel Sayi Degildir");
	return 0;}
