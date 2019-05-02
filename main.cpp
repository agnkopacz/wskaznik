#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int strona_ksiazki; 
	int *zakladka; // wskaünik pokazujπcy polecany przepis
	zakladka = &strona_ksiazki; //ustawienie wskaznika na polecanej stronie
	int potwierdzenie = 0;
	
	do {
	cout << "Czy znasz dobry przepis na ciasto? Podaj prosze strone z ksiazki (1-200): " << endl; 
	cin >> strona_ksiazki;
	
	cout << "Wybrales " << *zakladka << ". strone ksiazki. Czy polecasz przepis na sernik wlasnie z tej?" << endl;
	
	cout << "Jesli tak - nacisnij 1, a program sie zakonczy; jesli nie - nacisnij 2 i zmienimy strone" << endl;
	
	cin >> potwierdzenie;
	} while(potwierdzenie==2);
	
	return 0;
}
