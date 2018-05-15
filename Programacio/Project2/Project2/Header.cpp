#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//Menu
int menu() {
	int opcio;
	cout << "-- CLUB ESPORTIU POLITECNICS --" << endl << endl;
	cout << "1.  Alta Soci." << endl
		<< "2.  Matricular Soci en un Esport." << endl
		<< "3.  Mostrar Socis" << endl
		<< "4.  Mostrar Esports d'un Soci." << endl
		<< "5.  Baixa Soci." << endl
		<< "6.  Baixa d'Esport d'un Soci. (OPCIONAL)" << endl
		<< "7.  Carregar dades des del fitxer." << endl
		<< "8.  Guardar dades al fitxer." << endl
		<< "9.  General fitxer de Socis per Edat." << endl
		<< "10. Socis Donats de Baixa a l'Esport... (OPCIONAL)" << endl
		<< "0.  Sortir." << endl
		<< "Opcio:";

	do {
		cin >> opcio;
		if (opcio < 0 || opcio > 10) {
			cout << "Opcio incorrecta." << endl << "Opcio:";
		}
	} while (opcio < 0 || opcio > 10);
	return opcio;
}
//Opcio 1
void alta_soci(int *contador_socis, Soci socis[]) {
	Soci temp_soci;
	cin.ignore(1, '\n');
	cout << "-- ALTA SOCI --" << endl;
	cout << "Codi:";
	cin >> temp_soci.codisoci;
	if (verificar_codi(socis, *contador_socis, temp_soci.codisoci) == -1) {
		cin.ignore(1, '\n');
		cout << "Nom:";
		getline(cin, temp_soci.nom);
		cout << "Edad:";
		cin >> temp_soci.edat;
		cout << "Quota:";
		cin >> temp_soci.quota;
		socis[*contador_socis] = temp_soci;
		(*contador_socis)++;
	}
	else {
		cout << "El codi introduit ja existeix." << endl;
	}
}

//Verificar Soci && Buscar Soci //
int verificar_codi(Soci socis[], int contador, int codi_introduit) {
	bool codi_correcte = false;
	int posicio_soci = -1;

	for (int i = 0; i <= contador && !codi_correcte; i++) {
		if (socis[i].codisoci == codi_introduit) {
			codi_correcte = true;
			posicio_soci = i;
		}
	}
	return posicio_soci;
}



