#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int idade;
    int tempoSono;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    tempoSono = (int)(idade/3);

    printf ("Voce ja dormiu %d anos\n", tempoSono);

    return 1;
}