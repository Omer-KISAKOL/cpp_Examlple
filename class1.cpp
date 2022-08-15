#include <iostream>
using namespace std;

class Ogrenci{
	private:
		int okulNo;
		int dersNot;
		string isim;
		
	public:
		Ogrenci(){
			isim = "Omer";
			okulNo = 201502216;
			dersNot = 50;
		}
		
		Ogrenci(string isim){
			this->isim = isim;
			okulNo = 4121;
			dersNot = 100;
		}
		
		Ogrenci(int okulNo, int dersNot, string isim){
			this->isim = isim;
			this->okulNo = okulNo;
			this->dersNot = dersNot;
		}
		
		string isimGetir(){
			return this->isim;
		}
		
		int okulNoGetir(){
			return this->okulNo;
		}
		
		int dersNotGetir(){
			return this->dersNot;
		}
		
		void setDersNot(int deger){
			dersNot = deger;
		}
		
		void setOkulNo(int deger){
			okulNo = deger;
		}
};

int main(){
	Ogrenci ogrenci1;
	cout << " 1. " << ogrenci1.isimGetir() << endl << endl;
	
	Ogrenci ogrenci2(4000, 90, "Mert");
	
	cout << " 2. " << ogrenci2.isimGetir() << endl<< endl;
	
	cout << " 3. " << ogrenci1.okulNoGetir() << endl;
	cout << " 4. " << ogrenci2.okulNoGetir() << endl << endl;
	
	cout << " 5. " << ogrenci1.dersNotGetir() << endl;
	cout << " 6. " << ogrenci2.dersNotGetir() << endl << endl;
	
	ogrenci2.setDersNot(100);
	cout << " 7. " << ogrenci2.dersNotGetir() << endl << endl;
	
	ogrenci2.setOkulNo(4121);
	cout << " 8. " << ogrenci2.okulNoGetir() << endl << endl;
	
	Ogrenci ogrenci3("Ali");
	cout << " 9. " << ogrenci3.isimGetir() << endl << "10. " << ogrenci3.okulNoGetir() << endl << "11. " << ogrenci3.dersNotGetir();
	
}






