#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vetor1{
   int vet[1000];
   int cVet[1000];
   int dVet[1000];
}v1;

struct vetor2{
    int vet[10000];
    int cVet[10000];
    int dVet[10000];
}v2;

struct vetor3{
    int vet[100000];
    int cVet[100000];
    int dVet[100000];
}v3;

struct vetor4{
    int vet[1000000];
    int cVet[1000000];
    int dVet[1000000];
}v4;

int
cres(const int *a, const int *b){
    return *a - *b;
}

int
decres(const int *a, const int *b){
    return *b - *a;
}

void
functVetor(int *vetor, int *cVetor, int *dVetor, int tam){
    int i;

    for(i = 0; i < tam; i++)
        vetor[i] = cVetor[i] = dVetor[i] = rand() % 10000;

    qsort(cVetor, tam, sizeof(int), cres);
    qsort(dVetor, tam, sizeof(int), decres);
}

void
selectSort(int *vetor, int tam){
    int i, j, aux, min;
    unsigned int inter = 0, associ = 0;

    for(i=0; i < tam-1; i++){
        min = i;
        for(j = i+1; j < tam; j++){
            inter++;
            if(vetor[j] < vetor[min])
                min = j;
        }

        if (i != min){
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
            associ++;
        }
    }
    printf("Comparações: %d\nAtribuições: %d\n", inter, associ);
}

void
inicSelectSort(){
    float t1 = 0.0, t2 = 0.0;


    printf("SelectSort -  1.000 posições [DESORDENADO]: \n");
    t1 = clock();
    selectSort(v1.vet, sizeof(v1.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 1.000 posições [ORDENADO CRESCENTE]: \n");
    t1 = clock();
    selectSort(v1.cVet, sizeof(v1.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 1.000 posições - [ORDENADO DECRESCENTE]: \n");
    t1 = clock();
    selectSort(v1.dVet, sizeof(v1.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);


    printf("\n\nSelectSort -  10.000 posições [DESORDENADO]: \n");
    t1 = clock();
    selectSort(v2.vet, sizeof(v2.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 10.000 posições [ORDENADO CRESCENTE]: \n");
    t1 = clock();
    selectSort(v2.cVet, sizeof(v2.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 10.000 posições - [ORDENADO DECRESCENTE]: \n");
    t1 = clock();
    selectSort(v2.dVet, sizeof(v2.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);


    printf("\n\nSelectSort -  100.000 posições [DESORDENADO]: \n");
    t1 = clock();
    selectSort(v3.vet, sizeof(v3.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 100.000 posições [ORDENADO CRESCENTE]: \n");
    t1 = clock();
    selectSort(v3.cVet, sizeof(v3.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 100.000 posições - [ORDENADO DECRESCENTE]: \n");
    t1 = clock();
    selectSort(v3.dVet, sizeof(v3.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);


    printf("\n\nSelectSort -  1.000.000 posições [DESORDENADO]: \n");
    t1 = clock();
    selectSort(v4.vet, sizeof(v4.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 1.000.000 posições [ORDENADO CRESCENTE]: \n");
    t1 = clock();
    selectSort(v4.cVet, sizeof(v4.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

    printf("SelectSort - 1.000.000 posições - [ORDENADO DECRESCENTE]: \n");
    t1 = clock();
    selectSort(v4.dVet, sizeof(v4.vet) / sizeof(int));
    t2 = clock();
    printf("Tempo: %fms\n", (t2 - t1) / CLOCKS_PER_SEC);

}

int
main(){

    functVetor(v1.vet, v1.cVet, v1.dVet, sizeof(v1.vet) / sizeof(int));
    functVetor(v2.vet, v2.cVet, v2.dVet, sizeof(v2.vet) / sizeof(int));
    functVetor(v3.vet, v3.cVet, v3.dVet, sizeof(v3.vet) / sizeof(int));
    functVetor(v4.vet, v4.cVet, v4.dVet, sizeof(v4.vet) / sizeof(int));

    inicSelectSort();

    return 0;
}
