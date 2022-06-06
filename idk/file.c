#include <stdio.h>

int zistiRozdiel(){
	return 'a' - 'A';
}

char premenMnaV (char pismeno){
	pismeno = pismeno - zistiRozdiel();
	return pismeno;
}

char premenVnaM(char pismeno){
	pismeno = pismeno + zistiRozdiel();
	return pismeno;
}

int zisti(char x){
	int vysledok;

	if (x > 'a' && x < 'z'){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){

	char pismenko;

	printf("napis pismeno\n");
	scanf("%c", &pismenko);

	if (zisti(pismenko) == 1){
		printf("%c\n", premenMnaV(pismenko));
	}
	else{
		printf("%c\n", premenVnaM(pismenko));
	}
	return 0;
}
