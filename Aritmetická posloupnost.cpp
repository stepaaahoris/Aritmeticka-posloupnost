#include <stdio.h>

int main(void) {
	int diference = 0, predchozi = 0;

	printf("Zadejte zacatecni clen poslopnosti: ");
	//Začáteční číslo celé řady
	scanf_s("%d", &predchozi);

	printf("\nZadejte cislo diferenci: ");
	//O kolik se mají čísla lišit
	scanf_s("%d", &diference);

	printf("\n");

	for (int i = 1; i <= 20; i++) {
		printf("Cislo v posloupnosti na miste %d: je %d\n", i, predchozi);
		//Už vygenerované číslo s uvedením pozice v řadě
		predchozi += diference;
	}
}