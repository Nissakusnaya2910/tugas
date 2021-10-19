/* Program		: point.c
   Author		: (3411171007, Nia Desfiany)
   Kelas		: Informatika A
   Deskripsi	: Membuat realisasi prototype
   Tanggal		: 05 Maret 2018
*/

#include "point.h"
#include<stdio.h>
#include<conio.h>
#include <math.h>


/*Realisasi dari Prototype POINT */
/*Konstruktor membentuk POINT */
void CreatePOINT(POINT *P){
/*	I.S	: P terdefinisi, tidak diketahui nilainya
	F.S	: membentuk sebuah POINT dari komponen-komponennya dengan P diinisialisasi nilainya dengan X=0 dan Y=0
*/
	(*P).X=0;
	(*P).Y=0;
}
void CreatePOINT2(POINT *P, int XBaru, int YBaru){
/*	I.S : P terdefinisi, tidak diketahui nilainya
	F.S	: memebentuk sebuah POINT dari komponen-komponennya dengan P diinisialisasi nilainya dengan X=XBaru dan Y=YBaru
*/
	(*P).X=XBaru;
	(*P).Y=YBaru;
}

/*	Selektor POINT **/
int GetAbsis(POINT P){
//	Mengirimkan komponen Absis dari P
	return (P.X);
}

int GetOrdinat(POINT P){
//	Mengirimkan komponen ordinat dari P POINT
	return (P.Y);
}
	
/*	Set nilai komponen */
void SetAbsis(POINT *P, int newX){
/*	I.S	: P terdefinisi, dengan nilainya sembarang
	F.S	: Mengubah nilai komponen absis dari P dengan X=newX
*/
	(*P).X=newX;
}
 void SetOrdinat(POINT *P, int newY){
 /*	I.S	: P terdefinisi, dengan nilainya sembarang
 	F.S	: Mengubah nilai komponen ordinat dari P dengan Y=newY
*/
	(*P).Y=newY;
}
/*	Destruktor/Dealokator: tidak perlu */

/*	{KELOMPOK  Interaksi dengan I/O device, BACA/TULIS} **/
void BacaPOINT(POINT *P){
 /*	I.S	: P terdefinisi, mungkin kosong
 	F.S	: P terdefinisi, dengan membaca nilai X dan Y
*/
		printf("Masukan nilai x= "); scanf("%d", &(*P).X);
		printf("Masukan nilai y= "); scanf("%d", &(*P).Y);		
		
}

void CetakPOINT(POINT P){
 /*	I.S	: P terdefinisi, mungkin kosong
 	F.S	: Menampilkan nilia komponen P ke layar dengan format "(X , Y)"
*/
	printf("(""%d"",""%d"")", P.X, P.Y);
}

boolean EQ(POINT P1, POINT P2){
//	Mengirimkan true jika P1=P2, dan false jika sebaliknya
	if(P1.X==P2.X && P1.Y==P2.Y)
		return (true);
	else
		return (false);
}
boolean NEQ(POINT P1, POINT P2){
//	Mengirimkan true jika P1 tidak sama dengan P2, dan false jika sebaliknya
	if(P1.X != P2.X && P1.Y != P2.Y)
		return (true);
	else
		return (false);
}
boolean LT(POINT P1, POINT P2){
//	Mengirimkan true jika P1<P2, dan false jika sebaliknya
//	Definisi lebih kecil: posisi tit8ik lebih ke kiri atau ke bawah dalam bidang kartesian
	if(P1.X<P2.X && P1.Y<P2.Y)
		return (true);
	else
		return (false);
}
boolean MT(POINT P1, POINT P2){
//	Mengirimkan true jika P1>P2, dan false jika sebaliknya
//	Definisi lebih besar: posisi tit8ik lebih ke kanan atau ke atas dalam bidang kartesian
	if(P1.X>P2.X && P1.Y>P2.Y)
		return (true);
	else
		return (false);
}
/** (Kelompok menentukan di mana P berada **/
boolean IsOrigin(POINT P){
//	Menghasilkan true jika P berada pada titik origin yaitu nilai X=0 dan Y=0, dan false jika sebaliknya
	if(P.X==0 && P.Y==0)
		return (true);
	else
		return (false);
}
boolean IsOnSbX(POINT P){
//	Menghasilkan true jika P terletak pada sumbu X yaitu nilai Y=0, dan false jika sebaliknya
	if(P.Y==0)
		return (true);
	else
		return (false);
}
boolean IsOnSbY(POINT P){
//	Menghasilkan true jika P terletak pada sumbu Y yaitu nilai X=0, dan false jika sebaliknya
	if(P.X==0)
		return (true);
	else
		return (false);
}
int Kuadran(POINT P){
//	Menghasilkan kuadran dari P: 1,2,3, atau 4
//	Precondition	: P bukan titik origin, dan P tidak terletak di salah satu sumbu
	if (P.X >0 && P.Y > 0)
		return (1);
	else if (P.X<0 && P.Y > 0)
		return (2);
	else if (P.X<0 && P.Y <0)
		return (3);
	else if (P.X>0 && P.Y<0)
		return (4);
}
/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
POINT MirrorOf(POINT P, boolean SbX, boolean SbY){
//	Menghasilkan salinan P, yang dicerminkan tergantung nilai SbX dan SbY
//	Jika SbX bernilai true, maka dicerminkan terhadap sumbu X
//	Jika SbY bernilai true, maka dicerminkan terhadap sumbu Y
	POINT temp;
	if(SbX){
		temp.X=-1*(P.X);
		temp.Y=P.Y;
	}
	else if (SbY){
		temp.X=P.X;
		temp.Y=-1*(P.Y);
	}
	return (temp);
}
float Jarak(POINT P){
//	 Menghitung jarak P dari titik origin (0,0)
	float Jarak;
	int a,b;
	
	a=P.X;
	b=P.Y;
	Jarak=sqrt((a*a)+(b*b));
	return (Jarak);
}
void GeserKeSbX(POINT *P){
/*	I.S	: P terdefinisi, mungkin kosong
	F.S	: P berada pada sumbu X, jika tidak berada pada sumbu X, jika tidak berada pada sumbu X makan geser P ke Sumbu X.
		Contoh	: Jika koordinat semula (9,9) menjadi (9,0)
*/
	(*P).X=(*P).X;
	(*P).Y=0;
}
void GeserKeSbY(POINT *P){
/*	I.S	: P terdefinisi, mungkin kosong
	F.S	: P berada pada sumbu Y, jika tidak berada pada sumbu Y, maka geser P ke Sumbu Y.
		Contoh	: Jika koordinat semula (9,9) menjadi (9,0)
*/
	(*P).Y=(*P).Y;
	(*P).X=0;
}
void WinMain(POINT *P){
/*	I.S	: P terdefinisi, mungkin kosong
	F.S	: P berada pada sumbu Y, jika tidak berada pada sumbu Y, maka geser P ke Sumbu Y.
		Contoh	: Jika koordinat semula (9,9) menjadi (9,0)
*/
}

