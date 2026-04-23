include <stdio.h>

  // TORRE (recursão)
  void torre(int casas) {
    if (casas == 0) return;
    
    printf("Esquerda\n");
    torre(casas - 1);
  }
  
  
  // RAINHA (recursão)
  void rainha(int casas) {
    if (casas == 0) return;
    
    printf("Esquerda\n");
    rainha(casas - 1);
  }
  
  
  // BISPO (recursão + loop alinhado)
  void bispo(int v, int h) {
    if (v == 0) return;
    
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < h) {
            printf("Cima, Direita\n");
            j++;
        }
    }
    
    bispo(v - 1, h);
    
  }
  
  
  
  // CAVALO (loops complexos)
  void cavalo() {
    int cima = 2;
    int direita = 1;
    
    for (int i = 0; i < cima; i++) {
      
      for (int j = 0; j < 1; j++) {
        
        if (i == 1 && j == 0) {
          continue;
        }
        
        printf("Cima\n");
        
      }
    }
    
    printf("Direita\n");
    
  }
  
  int main() {
    
    printf("=== Torre ===\n");
    torre(5);
    
    printf("=== Bispo ===\n");
    bispo(5, 1);
    
    printf("=== Rainha ===\n");
    rainha(8);
    
    printf("=== Cavalo ===\n");
    cavalo();
    
    
    return 0;
    
  }
