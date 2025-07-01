#include <stdio.h>
#include <stdlib.h>

int callOrder = 0;

void indent(int n) {
  for (int i = 0; i < n; i++) {
    putchar('\t');
  }
}

void hanoi(char ori, char dst, char aux, int nro, int nivel) {
    indent(nivel);
    printf("%02d - Entrou no calculo de hanoi(%c, %c, %c, %d).\n", ++callOrder, ori, dst, aux, nro);
    
    if (nro == 1) {
        indent(nivel);
        printf("Move de %c", ori);
        printf(" para %c\n", dst);

    } else {
        hanoi(ori, aux, dst, nro - 1, nivel + 1);
        indent(nivel);
        printf("%02d - Retornou ao calculo de hanoi(%c, %c, %c, %d).\n", ++callOrder, ori, dst, aux, nro);
        
        hanoi(ori, dst, aux, 1, nivel + 1);
        indent(nivel);
        printf("%02d - Retornou ao calculo de hanoi(%c, %c, %c, %d).\n", ++callOrder, ori, dst, aux, nro);
        
        hanoi(aux, dst, ori, nro - 1, nivel + 1);
        indent(nivel);
        printf("%02d - Retornou ao calculo de hanoi(%c, %c, %c, %d).\n", ++callOrder, ori, dst, aux, nro);
    }
}

int main(void) {
    hanoi('A', 'B', 'C', 4, 0);
    return 0;
}