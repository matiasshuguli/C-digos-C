#include <stdio.h>

int main() {
    int i, f, in;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &i);

    printf("Ingrese el numero final: ");
    scanf("%d", &f);

    printf("Ingrese el incremento: ");
    scanf("%d", &in);

    for (int i = i; i <= f; i = i + in) {
        printf("%d\n", i);
    }

    return 0;
}