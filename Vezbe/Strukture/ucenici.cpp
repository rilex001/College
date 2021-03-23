#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define Max 100

typedef struct {
	char ime[100];
	int matematika;
	int srpski;
	int jezik;
} Ucenik;

typedef bool UporedjivacUcenika(Ucenik, Ucenik);

bool citanjeUcenika(FILE *fin, Ucenik *r) {
	return fscanf(fin, "%s%d%d%d", r->ime, &r->matematika, &r->srpski, &r->jezik);
}

void ispisUcenika(FILE *fout, Ucenik *r) {
	float prosek;
	prosek =  float(r->jezik + r->matematika + r->srpski)  / 3;
	fprintf(fout, "%20s    %4f \n", r->ime , prosek);
}

void zamena(Ucenik *a, Ucenik *b) {
	Ucenik pom = *a;
	*a = *b;
	*b = pom;
}

bool imaManjiProsek(Ucenik a, Ucenik b) {
	float prosek1, prosek2;
	prosek1 = float(a.jezik + a.matematika + a.srpski) / 3;
	prosek2 = float(b.jezik + b.matematika + b.srpski) / 3;
	return prosek1 > prosek2;
}

void sortirajUcenike(int n , Ucenik *ucenici, UporedjivacUcenika jeManji) {
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(jeManji(ucenici[j], ucenici[i])) {
				zamena(&ucenici[i], &ucenici[j]);
			}
		}
	}
}


int main() {
	
	int brojUcenika = 0; 
	Ucenik ucenici[Max];
	
	// Ucitavanje iz fajla
	
	FILE *fin = fopen("ulaz2.txt", "r");
	if(fin == NULL) {
		printf("Greska prilikom otvaranja fajla");
	}
	while(!feof(fin)) {
		if(!citanjeUcenika(fin, &ucenici[brojUcenika])) break;
		brojUcenika++;
	}
	fclose(fin);
	
	// Sortiranje ucenika
	sortirajUcenike(brojUcenika ,ucenici, imaManjiProsek);
	
	// Ispis ucenika
	
	FILE *fout = fopen("izlaz2.txt", "w");
	if(fout == NULL) {
		printf("Greska prilikom ucitavanja fajla");
	}
	for(int i = 0; i < brojUcenika; i++) {
		ispisUcenika(fout, &ucenici[i]);
	}
	
	fclose(fout);

	
	
	
	
}
