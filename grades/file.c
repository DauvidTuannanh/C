#include <stdio.h>

int main(void) {
  int cislo;

  printf("Napiste % vasej znamky\n");
  scanf("%d", &cislo);

  if (cislo >= 90) {
    printf("vasa znamka je 1");

  } else if (cislo >= 75) {
    printf("vasa znamka je 2");

  } else if (cislo >= 50) {
    printf("vasa znamka je 3");

  } else if (cislo >= 33) {
    printf("vasa znamka je 4");

  } else {
    printf("vasa znamka je 5");
  }
}
