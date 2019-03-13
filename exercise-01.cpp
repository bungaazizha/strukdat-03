/*
Author		: Bunga Azizha N
NPM			: 140810180016
Kelas		: B
Tanggal		: Rabu, 13 Maret 2019
Deskripsi	: Pointer
*/
//strukdat-03

#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s) {
	cout<<"Program Segiempat Menggunakan Pointer"<<endl;
	cout<<endl;
	cout<<"Masukkan panjang	: ";cin>> s->panjang;
	cout<<"Masukkan lebar		: ";cin>> s->lebar;
	cout<<endl;
}
float keliling(segiempat s) {
	return 2*(s.panjang + s.lebar);
}

float luas(segiempat s) {
	return (s.panjang * s.lebar );
}

float diagonal(segiempat s) {
	return (sqrt(s.panjang*s.panjang + s.lebar*s.lebar));
}
void print(segiempat s) {
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"Keliling		: "<<keliling(s)<<endl;
	cout<<"Luas			: "<<luas(s)<<endl;
	cout<<"Diagonal		: "<<diagonal(s)<<endl;
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}

int main(){
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
}
