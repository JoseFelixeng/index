#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  int i, j, linhas = 0;
  printf("Entre com o numero de Linhas \n");
  // scanf("%d", &linhas);
  while (linhas < 30) {
    for (i = linhas / 2; i <= linhas - 1; i += 2) {
      for (j = 1; j < linhas - 1; j += 2) {
        printf("");
      }

      for (j = 1; j <= i; j++) {
        printf("#");
      }

      for (j = 1; j <= linhas - i; j++) {
        printf(" ");
      }

      for (j = 1; j <= i; j++) {
        printf("#");
      }

      printf("\n");
    }
    for (i = linhas; i >= 1; i--) {
      for (j = i; j < linhas; j++) {
        printf(" ");
      }

      for (j = 1; j <= (i * 2) - 1; j++) {
        printf("#");
      }
      printf("\n");
    }
    linhas++;
    usleep(3);
    system("clear");
  }
  printf("I love you!\n");

  return 0;
}