#include <iostream>
using namespace std;

class Insan {
protected:
	string isim;
	string soyisim;
public:
	/*void insan(string _isim, string _soyisim) {
		this->isim = _isim;
		this->soyisim = _soyisim;
	}*/

	Insan(string isim = "", string soyisim = "");
	string Get_i() { return isim; }
	void Set_i(string isim) { this->isim; }
	string Get_s() { return soyisim; }
	void Set_s(string soyisim) { this->soyisim; }
};

class Ogrenci : public Insan {
private:
	string ogrenciNo;
public:
	Ogrenci(string ogrenciNo = "", string isim = "", string soyisim = "");
	string Get_i() { return ogrenciNo; }
	void Set_i(string ogrenciNo) { this->ogrenciNo; }
	
		
};

int main() {
	Ogrenci ogrenci1("201502216", "omer", "kisakol");

}




