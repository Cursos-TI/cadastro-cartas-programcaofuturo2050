#include <stdio.h>

int main(){
int Carta_1 = 1;
char Estado_1 = 'A'; 
int codigo_1 = 11;
float Habitacao_1 = 1104961;
float area_1 = 248219;
float PIB_1 = 35000000;
int pontos_1 = 50;

  printf("Escolha uma carta: \n");
  scanf("%d", &Carta_1);

  printf("Estado: %c\n", Estado_1);
  printf("Código: %i\n", codigo_1);
  printf("Habitantes: %.2f\n", Habitacao_1);
  printf("Área: %.2fkm²\n", area_1);
  printf("PIB: %.2f\n", PIB_1);
  printf("Numero de pontos turístico: %d", pontos_1);


}
