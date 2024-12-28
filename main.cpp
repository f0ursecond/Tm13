
#include <iostream>
#include <cmath>

using namespace std;


typedef struct koordinat {
 float x;
 float y;
} titik;


/* Konstruktor */
void makePoint(titik &t, float absis, float ordinat);

/* Baca Tulis */
void tulis(titik t);
void bacaPoint(titik &t);

/* Selector */
float getAbsis(titik t);
float getOrdinat(titik t);

/* Korektor */
void setAbsis(titik &t, float newY);
void setOrdinat(titik &t, float newX);

/* Cetak Garis */
void cetakGaris();

/* Posisi */
bool isOrigin(titik t);
bool isOnSbX(titik t);
bool isOnSbxY(titik t);
int kuadran(titik t);

/* Operasi Tipe */
void nextX(titik &t);
void nextY(titik &t);
void mirror(titik &t, char sumbu);
void geser(titik &t, float deltaX, float deltaY);
float jarakPusat(titik t);
float jarak2titik(titik t1, titik t2);


int main(int argc, char *argv[]) {
 titik A;
 float a,b;

 cout<<"Masukkan sumbu x = ";
 cin >> a;
 cout << "Masukkan sumbu y = ";
 cin >> b;
 makePoint (A, a, b);
 cout << "Titik A: "; tulis (A);
 cout<<getAbsis (A) << " sebagai titit x atau absis\n";
 cout << getOrdinat (A) << " sebagai titik y atau ordinat\n";
 setOrdinat (A, 0);
 cout<<"Proses setordinat (A, 0)\n";
 cout << "Titik A Baru: "; tulis (A);
 cout<<"isOrigin (A) = " << isOrigin (A) << endl;
 cout<<"isOnSbX (A) = " << isOnSbX (A) << endl; cout << "isOnSbY (A) = " << isOnSbxY (A) << endl;

 cetakGaris();

 titik B;
 bacaPoint (B);
 cout << "Titik B: "; tulis(B);
 cout << getAbsis (B) << "  sebagai titit x atau absis\n";

 cout << getOrdinat (B) <<" sebagai titik y atau ordinat\n";
 cout << "isOrigin (B) " << isOrigin (B) << endl;
 cout<<"kuadran (B) " << kuadran (B) << endl;

 cout << "nextX (B)"; nextX (B); tulis (B);
 cout << "nexty (B)"; nextY (B); tulis (B);

 cout << "mirror (B, 'x')"; mirror (B, 'x'); tulis (B);
 cout << "mirror (B, 'y')"; mirror (B, 'y'); tulis (B);

 cout << "geser (B, 2, 2)"; geser (B, 2, 2); tulis (B);
 cout << "Jarak pusat (B) " << jarakPusat (B) << endl;
 cout << "Jarak 2 titik (A, B) " << jarak2titik (A, B) << endl;
}

void makePoint(titik &t, float absis, float ordinat) {
 t.x = absis;
 t.y = ordinat;
}

void tulis(titik t) {
 cout << "(" << t.x << ", " << t.y << ")" << endl; // Format (X, Y)
}

void bacaPoint(titik &t) {
 cout << "Masukan sumbu x = ";
 cin >> t.x;
 cout << "Masukan sumbu y = ";
 cin >> t.y;
}

float getAbsis(titik t) {
 return t.x;
}

float getOrdinat(titik t) {
 return t.y;
}

void setAbsis(titik &t, float newY) {
 t.y = newY;
}

void setOrdinat(titik &t, float newX) {
 t.x = newX;
}

void cetakGaris() {
 cout << "===========================================================" << endl;
}

bool isOrigin(titik t) {
 return t.x == 0 && t.y == 0;
}

bool isOnSbX(titik t) {
 return t.y == 0;
}

bool isOnSbxY(titik t) {
 return t.x == 0;
}

int kuadran(titik t) {
 if (t.x > 0 && t.y > 0) {
  return 1;
 }
 if (t.x < 0 && t.y > 0) {
  return 2;
 }
 if (t.x < 0 && t.y < 0) {
  return 3;
 }
 if (t.x > 0 && t.y < 0) {
  return 4;
 }
 return 0;
}

void nextX(titik &t) {
 t.x = t.x + 1;
}

void nextY(titik &t) {
 t.y = t.y + 1;
}

void mirror(titik &t, char sumbu) {
 if (sumbu == 'x') {
  t.x = -t.x;
 } else {
  t.y = -t.y;
 }
}

void geser(titik &t, float deltaX, float deltaY) {
 t.x = t.x + deltaX;
 t.y = t.y + deltaY;
}

float jarakPusat(titik t) {
 return sqrt(t.x * t.x + t.y * t.y);
}

float jarak2titik(titik t1, titik t2) {
return sqrt((t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y));
}





