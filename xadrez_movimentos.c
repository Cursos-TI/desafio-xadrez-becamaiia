#include <stdio.h>
int main() {
  // TORRE (for)
  // Move 5 casas para a direita
  printf("=== Torre ===\n");
  for (int i = 0; i < 5; i++) {
       printf("Direita\n");
}

  // BISPO (while)
  // Move 5 casas para na diagonal (Cima + Direita)
  printf("=== Bispo ===\n");
  int i = 0;
  while (i < 5) {
     printf("Cima, Direita\n");
     i++;
}

  // RAINHA (do-while)
  // Move 8 casas para a esquerda
  printf("=== Rainha ===\n");
  int j = 0;
  do {
      printf("Esquerda\n");
      j++;
  } while (j < 8);

  
  return 0;
}
