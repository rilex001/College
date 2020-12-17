#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

void PrviZadatak(const char *imeUlaznogFajla, const char *imeIzlaznogFajla) {
    char c[MAX], RevStr[MAX], kraj;
    int i, j, len, br;
    FILE *fin = fopen(imeUlaznogFajla, "r");
    if (fin == NULL) {
        printf("Greska prilikom otvaranja fajla '%s'.\n", imeUlaznogFajla);
        exit(EXIT_FAILURE);
    }
    fscanf(fin, "%s", c);

    j = 0;
  	len = strlen(c);
    for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = c[i];
  	}
  	RevStr[i] = '\0';

  	br = 0;
  	while (RevStr[br] != '\0') {
      kraj = RevStr[br];
      if (kraj >= 'A' && kraj <= 'Z')
         RevStr[br] = RevStr[br] + 32;
      else if (kraj >= 'a' && kraj <= 'z')
         RevStr[br] = RevStr[br] - 32;
      br++;
   }
    FILE *fptr = fopen(imeIzlaznogFajla, "w");
	if (fptr == NULL) {
        printf("Greska prilikom otvaranja fajla '%s'.\n", imeIzlaznogFajla);
        exit(EXIT_FAILURE);
    }
    fprintf(fptr, "%s", RevStr);
    fclose(fptr);

    fclose(fin);
}

int main() {

    PrviZadatak("domaci.txt", "proba.txt");

    return 0;
}
