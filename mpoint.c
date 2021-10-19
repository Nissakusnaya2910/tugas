/* 	Program : mpoint.c
	Author 	: 3411191025, Nissa Aulia Permatasari
	Kelas	: Informatika A
	Deskripsi : Main driver Point 
*/

#include "point.h"
#include <stdio.h>
#include <conio.h>

int main(){
	int choice;
	//kamus ADT POINT
	int newX,newY,abs,ord,kuadran,jarak;
	int p1,p2;
	
	
	printf("\n =================================================");
	printf("\n ======== Praktikum ADT POINT =======");
	printf("\n =================================================");
	printf("\n 1. ADT POINT");
	printf("\n 2. ADT LINE");
	printf("\n enter input 1/2 :");scanf("%d",&choice);
	
	if(choice == 1){
	system("cls");
	printf("\n================== ADT POINT ===================");
	//konstruktor
	printf("\n-------------= KONSTRUKTOR POINT =--------------");
	CreatePOINT(&p1);
	CetakPOINT(p1);
	printf("\nMasukan X baru : ");scanf("%d",&newX);
	printf("\nMasukan Y baru : ");scanf("%d",&newY);
	CreatePOINT2(&p1,newX,newY);
	printf("\n");CetakPOINT(p1);
	
	printf("\n-------------= SELEKTOR POINT =--------------");
	abs = GetAbsis(p1);printf("\nAbsis P : %d",abs);
	ord = GetOrdinat(p1);printf("\nOrdinat P : %d",ord);
	
	printf("\n------= SET NILAI POINT =----------");
	printf("\nMasukan absis baru : ");scanf("%d",&abs);
	SetAbsis(&p1,abs);
	printf("\nMasukan ordinat baru : ");scanf("%d",&ord);
	SetOrdinat(&p1,ord);
	CetakPOINT(p1);
	
	printf("\n-----= READ/WRITE =-------\n");
	BacaPOINT(&p2);
	CetakPOINT(p2);
	
	printf("\n-----= OPERASI RASIONAL POINT =-------\n");
	CetakPOINT(p1);
	CetakPOINT(p2);
	if (EQ(p1,p2)){
		printf("\nnilai P1 sama dengan nilai P2\n");
	}
	else{
		printf("\nnilai p1 tidak sama dengan nilai p2\n");}
	if (NEQ(p1,p2)){
		printf("\nnilai P1 tidak sama dengan nilai P2\n");
	}
	else{
		printf("\nnilai p1 sama dengan nilai p2\n");}
	if (LT(p1,p2)){
		printf("\nnilai P1 lebih kecil dengan nilai P2\n");
	}
	else {
		printf("\nnilai p1 lebih besar dengan nilai p2\n");}
	if (MT(p1,p2)){
		printf("\nnilai P1 lebih besar dengan nilai P2\n");
	}
	else {
		printf("\nnilai p1 lebih kecil dengan nilai p2\n");}
	printf("\n-------------= MENENTUKAN DIMANA POINT =--------------");
	if (IsOrigin(p1)){
		printf("\nnilai P berada pada titik origin");
	}
	else {
		printf("\nnilai P tidak pada titik origin");}
	if (IsOnSbX(p1)){
		printf("\nnilai P berada pada sumbu X");
	}
	else {
		printf("\nnilai P tidak pada sumbu X");}
	if (IsOnSbY(p1)){
		printf("\nnilai P berada pada sumbu Y");
	}
	else{
		printf("\nnilai P tidak berada pada sumbu Y");}
	kuadran = Kuadran(p1);
	printf("\nkuadran P ada di kuadran : %d",kuadran);
	
	printf("\n-------------=OPERASI LAIN TERHADAP POINT =--------------");
	printf("\n\n----Point---- ");CetakPOINT(p1);
	p1 = MirrorOf(p1,IsOnSbX(p1),IsOnSbY(p1));
	printf("\n\n----mirror P---- : ");CetakPOINT(p1);
	
	jarak = Jarak(p1);
	printf("\n\n----jarak P : %d",jarak);
	printf("\n\n----geser sumbu x----- :");
	GeserKeSbX(&p1);
	CetakPOINT(p1);
	printf("\n\n----geser sumbu y----");
	GeserKeSbY(&p1);
	CetakPOINT(p1);
}
}



