#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float penjumlahan(float,float);
float pengurangan(float,float);
float perkalian(float,float);
float pembagian(float,float);

int main() {
	float a,b,c,d,k;
	int pilih;
	char operasi,tanda,ulang;
	awal:
	system("cls");
	printf ("\nNama = Aniisah Eka Rahmawati\n");
	printf ("NPM  = 19081010063\n");
	printf ("\n\t\t\t\t\t\t Kalkulator \n");
	printf("\nPilih Operasi: ");
	printf("\n\t[1].Penjumlahan (+)");
	printf("\n\t[2].Pengurangan (-)");
	printf("\n\t[3].Perkalian   (x)");
	printf("\n\t[4].Pembagian   (:)\n ");
	printf ("\nMasukkan pilihan: ");
	scanf("%d",&pilih);
	if(pilih==1){
		printf("\n\tMasukkan angka = ");
		scanf("%f",&a);
		printf("\tMasukkan angka = ");
		scanf("%f",&b);
		c=penjumlahan(a,b);
		printf("\n\t%f + %f = %f",a,b,c);
	}else if(pilih==2){
		printf("\n\tMasukkan angka = ");
		scanf("%f",&a);
		printf("\tMasukkan angka = ");
		scanf("%f",&b);	
		c=pengurangan(a,b);
		printf("\n\t%f - %f = %f",a,b,c);
	}else if(pilih==3){
		printf("\n\tMasukkan angka = ");
		scanf("%f",&a);
		printf("\tMasukkan angka = ");
		scanf("%f",&b);
		c=perkalian(a,b);
		printf("\n\t%f x %f = %f",a,b,c);
	}else if(pilih==4){
		printf("\n\tMasukkan angka = ");
		scanf("%f",&a);
		printf("\tMasukkan angka = ");
		scanf("%f",&b);
		c=pembagian(a,b);
		printf("\n\t%f : %f = %f",a,b,c);
	}
	mulai:
	printf("\n\nIngin menambah operasi?(Y/N)");
	operasi=getche();
	if (operasi=='Y'||operasi=='y'){
		printf("\n\n\tMasukkan operator = ");
		tanda=getche();
		if(tanda=='+'){
			k=c;
			printf("\n\tMasukkan angka    = ");
			scanf("%f",&d);
			c=penjumlahan(k,d);
			printf("\n\t%f + %f = %f",k,d,c);
		}else if(tanda=='-'){
			k=c;
			printf("\n\tMasukkan angka    = ");
			scanf("%f",&d);
			c=pengurangan(k,d);
			printf("\n\t%f - %f = %f",k,d,c);
		}else if(tanda=='x'){
			k=c;
			printf("\n\tMasukkan angka    = ");
			scanf("%f",&d);
			c=perkalian(k,d);
			printf("\n\t%f x %f = %f",k,d,c);
		}else if(tanda==':'){
			k=c;
			printf("\n\tMasukkan angka    = ");
			scanf("%f",&d);
			c=pembagian(k,d);
			printf("\n\t%f : %f = %f",k,d,c);
		}
	goto mulai;
	}else {
		printf("\n\nApa ingin mengulang program?(Y/N)");
		ulang=getche();
		if(ulang=='Y'||ulang=='y')
		goto awal;
		else
		printf("\n\nProgram Logging Off\n ");
	}
	getch();
	return 0;
}

float penjumlahan(float a, float b){
	return(a+b);
}

float pengurangan(float a, float b){
	return(a-b);
}

float perkalian(float a, float b){
	return(a*b);
}

float pembagian(float a, float b){
	return(a/b);
}

