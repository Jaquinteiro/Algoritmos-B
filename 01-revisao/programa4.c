#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// fazer um programa que sorteie 10 numeros aleatorios entre 0 e 100 e
//armazenando os em um vetor de tamanho 10
//ao final, exibir esses numeros

//1 sortear TAM n ( ate TAM n) no vetor, porem nao inserir numeros presentes no vetor. 
// ao final, exibir o vetor.

// plano carteseano

#define TAM 10
int main(){
    int numero;
    int posicaodoultimonumero = 0;
    int jainserido;
    int vetor[TAM];
    srand(time(NULL));
    

    for (int i = 0; i<TAM; i++){
        numero = rand() %100;
        jainserido = 0;
        for (int j = 0; j<posicaodoultimonumero; j++){
            if(numero ==vetor[j]){
                jainserido=1;
                break;
            }
        }

        if(jainserido ==0 ){
            vetor[posicaodoultimonumero]= numero;
            posicaodoultimonumero++;
        }
    }

    for (int i= 0; i<posicaodoultimonumero; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    return 1;
    
}