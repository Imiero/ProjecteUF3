#pragma once
#include <iostream>
#include <string>

using namespace std;

// Structs

const int MAX_SOCIS = 30, MAX_ESPORTS = 15;

struct Esport {
	string Nom;
	bool mati;
	int hores;
};

struct Soci {
	int codisoci;
	string nom;
	int edat;
	float quota;
	Esport esports[5];
};

// Funcions

int menu();
void alta_soci(int *contador_socis, Soci socis[]);
int verificar_codi(Soci socis[], int contador, int codi_introduit);

