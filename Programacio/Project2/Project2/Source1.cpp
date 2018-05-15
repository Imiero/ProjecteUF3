#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

void main() {
	int opcio_menu, contador_socis = 0;
	Soci socis[MAX_SOCIS];
	Esport esports[MAX_ESPORTS];

	do { // Mostrar menú 'til opcio_menu = 0.
		opcio_menu = menu();
		if (opcio_menu == 1 && contador_socis <= MAX_SOCIS) {
			alta_soci(&contador_socis, socis);
		}
	} while (opcio_menu != 0);


	system("PAUSE");
}


