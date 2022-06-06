#include <stdio.h>

int main(void){
	int cislo1;
	int cislo2;

	printf("Zadajte prve cislo\n");
	scanf("%d", &cislo1);
	
	printf("Zadajte druhe cislo\n");
	scanf("%d", &cislo2);

	int vysledok;
	vysledok = cislo1 + cislo2;

	printf("Vysledok je %d\n", vysledok);
}
