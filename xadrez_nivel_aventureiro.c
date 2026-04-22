#include <stdio.h>

int main() {
  
  // TORRE (for)
  printf("=== Torre ===\n");
  
  for (int i; i < 5; i++) {
       printf("Direita\n");
  }
  
  
  // BISPO (while)
  printf("=== Bispo ===\n");
  
  int i = 0;
  while (i < 5) {
      printf("Cima, Direita\n");
      i++;
  }
  
  
  // RAINHA (do-while)
  printf("=== Rainha ===\n");
  
  int j = 0;
  do {
      printf("Esquerda\n");
      j++;
  } while (j < 8);
  
  
  // CAVALO (loops alinhados)
  printf("=== Cavalo ===\n");
  
  for (int k = 0; k < 2; k++) {
       printf("Baixo\n");
  }
  
  int n = 0;
  do {
      printf("Esquerda\n");
      n++;
  } while (n < 1);
  
    return 0;
  }
