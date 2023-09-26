/*
Mükemmel sayýyý bulan program
Mükemmel sayý nedir? Kendisi hariç bütün pozitif 
bölenlerini toplayýnca sonuç sayýnýn kendisi olur.
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
