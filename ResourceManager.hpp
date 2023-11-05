#include <iostream>

class ResourceManager
{
public:
	ResourceManager() {
		// konstruktor domyślny klasy ResourceManager
		data = new Resource();
	}
	~ResourceManager() {
		delete data;
	}
	// metoda double get
	double get() {
		return data->get();
}

ResourceManager& operator=(const Resource& t) { return *this; }

private: 
	Resource* data;

};

class Wektor {
public:
	Wektor() { std::cout << "to ja" << std::endl; }
	Wektor(int n) :dlugosc(n) {
		vektor = new double[dlugosc];
		for (int i = 0; i < dlugosc; i++)
			vektor[i] = 0;
	}
	~Wektor() { delete[] vektor; }

	void print()
	{
		for (int i = 0; i < dlugosc; i++)
			std::cout << vektor[i] << std::endl;
	}
	void zmiana(int n) {
		double* bufor = new double[n];
		for (int i = 0; i < n; i++) i < dlugosc ? bufor[i] = vektor[i] : bufor[i] = 2;
		dlugosc = n;
		delete[] vektor;
		vektor = bufor;
	}

	double operator[](int n) {
		if (n < 0) n = 0;
		if (n > dlugosc) this->zmiana(n);
		return vektor[n];
	}

	int get_vol();
	int dlugosc;

private:
	
	double* vektor;


Wektor(int n) :pojemnosc(p) {
	vektor = new double[pojemnosc];
	for (int i = 0; i < pojemnosc; i++)
		vektor[i] = 0;
}
~Wektor() { delete[] vektor; }


};

int Wektor::get_vol() {
	return this->pojemnosc;

}
