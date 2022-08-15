#include  <iostream>
using namespace std;

class Animal {
protected:
	string m_strName;
	Animal(string strName) : m_strName(strName){}

public:
	string GetName() { return m_strName;  }
	virtual const char* Speak() { return "???"; }
};


class Cat : public Animal {
public:
	Cat(string strName): Animal(strName) {}
	virtual const char* Speak() { return "Meaw"; }
};

class Dog: public Animal {
public:
	Dog(string strName): Animal(strName) {}
	virtual const char* Speak() { return "Woof"; }
};

void Report(Animal &rAnimal) {
		cout << rAnimal.GetName() << " says " << rAnimal.Speak() << endl;
	}

int main() {
	Cat cat1("Kedi");
	Report(cat1);

	Dog dog1("Kopek");
	Report(dog1);

	return 0;
}