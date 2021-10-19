/* Program : point.h
   Author : (3411171007, Nia Desfiany)
   Kelas : Informatika A
   Deskripsi : Header file dari prototype point
   Tanggal : 05 Maret 2018
*/

#if ndef_POINT_H
#define_POINT_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#define Absis(P) (P).X
#define Ordinat(P) (P).Y
#define PI 3.14159265

/** Definisi ABSTRACT DATA TYPE POINT **/
typedef struct {
        int X; // absis
        int Y; // ordinat
}POINT;

/* Prototype POINT */

/* Konstruktor membentuk POINT */
void CreatePOINT (POINT *P);
/* I.S : P terdefinisi, tidak diketahui nilainya
   F.S : membentuk sebuah POINT dari komponen-komponennya dengan P
        diinisialisasi nilainya dengan X=0 dan Y=0
*/
void CreatePOINT2 (POINT *P, int XBaru, int YBaru);
/* I.S : P terdefinisi, tidak diketahui nilainya
   F.S : membentuk sebuah POINT dari komponen-komponennya dengan P
       diinisialisasi nilainya dengan X=XBaru dan Y=YBaru
*/

/* Selektor POINT **/
int GetAbsis (POINT P);
// Mengirimkan komponen Absis dari P

int GetOrdinat (POINT P);
// Mengirimkan komponen Ordinat dari P POINT

/* Set nilai komponen */
void SetAbsis (POINT *P, int newX);
/* I.S : P terdefinisi, dengan nilainya sembarang
   F.S : Mengubah nilai komponen Absis dari P dengan X=newX
*/
void SetOrdinat (POINT *P, int newY);
/* I.S : P terdefinisi, dengan nilainya sembarang
   F.S : Mengubah nilai komponen Ordinat dari P dengan Y=newY
*/

/* Destruktor/Dealokator: tidak perlu */

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS} **/
void BacaPOINT (POINT *P);
/* I.S : P terdefinisi, mungkin kosong
   F.S : P terdefinisi, dengan membaca nilai X dan Y
*/
void CetakPOINT (POINT P);
/* I.S : P terdefinisi, mungkin kosong
   F.S : Menampilkan nilai komponen P ke layar dengan format "(X, Y)"
*/

/** Kelompok operasi relasional terhadap POINT **/
boolean EQ(POINT P1, POINT P2);
// Mengirimkan true jika P1=P2, dan false jika sebaliknya
boolean NEQ(POINT P1, POINT P2);
// Mengirimkan true jika P1 tidak sama dengan P2, dan false hika sebaliknya
boolean LT(POINT P1, POINT P2);
// Mengirimkan true jika P1 < P2, dan false jika sebaliknya
// Definisi lebih kecil: posisi titik lebih ke kiri atau ke bawah dalam bidang kartesian
boolean MT(POINT P1, POINT P2);
// Mengirimkan true jika P1 > P2, dan false jika sebaliknya
// Definisi lebih besar: posisi titik lebih ke kanan atau ke atas dalam bidang kartesian

/** Kelompok menentukan di mana P berada **/
boolean IsOrigin (POINT P);
// Menghasilkan true jika P berada pada titik origin yaitu nilai X=0 dan Y=0, dan false jika sebaliknya
boolean IsOnSbX (POINT P);
// Menghasilkan true jika P terletak pada sumbu X  yaitu nilai Y=0, dan false jika sebaliknya
boolean IsOnSbY (POINT P);
// Menghasilkan true jika P terletak pada sumbu Y yaitu nilai X=0, dan false jika sebaliknya
int Kuadran (POINT P);
// Menghasilkan kuadran dari P: 1,2,3 atau 4
// Precondition : P bukan Titik Origin, dan P tidak terletak di salah satu sumbu

/** KELOMPOK OPERASI LAIN TERDAHADAP TYPE **/
POINT MirrorOf (POINT P, boolean SbX, boolean SbY);
// Menghasilkan salinan P yang dicerminkan tergantung nilai SbX dan SbY
// Jika SbX bernilai true, maka dicerminkan terhadap sumbu X
// Jika SbY bernilai true, maka dicerminkan terhadap sumbu Y

float JarakO (POINT P);
// Menghitung jarak P dari titik origin (0,0)

void GeserkeSbX (POINT *P);
/* I.S : P terdefinisi, mungkin kosong
   F.S : P berada pada Sumbu X, jika tidak berada pada Sumbu X maka geser ke Sumbu X
       Contoh: Jika koordinat semula(9,9) menjadi (9,0)
*/
void GeserKe SbY (POINT *P);
/* I.S : P terdefinsi, mungkin kosong
   F.S : P berada pada Sumbu Y, jika tidak berada pada Sumbu Y maka geser ke Sumbu Y
       Contoh: Jika koordinat semula(9,9) menjadi (0,9)
*/
#endif
