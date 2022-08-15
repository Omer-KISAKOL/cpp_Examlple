#include <iostream>
using namespace std;

struct Kariyer {
	int kullanicino;
	string ad;
	string bolum;
};

void Structshow(Kariyer struct1) {
	cout << "Kullanici numarasi: " << struct1.kullanicino << endl;
	cout << "Isim: " << struct1.ad << endl;
	cout << "Bolum: " << struct1.bolum << endl << endl;
}

void StructshowPr(Kariyer* struct2) {
	struct2->kullanicino = 20;
	cout << "Kullanici numarasi: " << struct2->kullanicino << endl;
	cout << "Isim: " << struct2->ad << endl;
	cout << "Bolum: " << struct2->bolum << endl << endl;
}


int main() {
	Kariyer omer;
	omer = { 201502216, "   Omer", "   PC" };

	Structshow(omer);
	StructshowPr(&omer);

	cout << omer.kullanicino;

	return 0;
}


