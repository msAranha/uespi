#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vetor1{
 int vet[1000];
 int cVet[1000];
 int dVet[1000];
}v1;

struct vetor2{
    int vet[5000];
    int cVet[5000];
    int dVet[5000];
}v2;

struct vetor3{
    int vet[25000];
    int cVet[25000];
    int dVet[25000];
}v3;

struct vetor4{
    int vet[125000];
    int cVet[125000];
    int dVet[125000];
}v4;

struct vetor5{
    int vet[625000];
    int cVet[625000];
    int dVet[625000];
}v5;

struct vetor6{
    int vet[1000000];
    int cVet[1000000];
    int dVet[1000000];
}v6;

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


//BubbleSort
void
bubbleSort(int *vet, int tam, unsigned long int *comp, unsigned long int *atrib){
    int i, j, ax;

    for (i = tam - 1; i > 1; i--){
        for (j = 0; j < i; j++){
            (*comp)++;
            if(vet[j] > vet[j+1]){
                ax = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = ax;
                (*atrib)++;
            }
        }
    }
}

void
bubbleSort_noOrder(){
    double t1 = 0.0, t2 = 0.0;
    unsigned long int comp, atrib;

    printf("\nSEM ORDENAÇÃO\n");
    printf("Tamanho\tTempo\tComparação\tAtribuição\n");

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v1.vet, sizeof(v1.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v1.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v2.vet, sizeof(v2.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v2.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v3.vet, sizeof(v3.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v3.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v4.vet, sizeof(v4.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v4.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v5.vet, sizeof(v5.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v5.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v6.vet, sizeof(v6.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v6.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

}

void
bubbleSort_cresOrder(){
    double t1 = 0.0, t2 = 0.0;
    unsigned long int comp, atrib;

    printf("\n\nORDENADO CRESCENTE\n");
    printf("Tamanho\tTempo\tComparação\tAtribuição\n");

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v1.cVet, sizeof(v1.cVet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v1.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v2.cVet, sizeof(v2.cVet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v2.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v3.cVet, sizeof(v3.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v3.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v4.cVet, sizeof(v4.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v4.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v5.cVet, sizeof(v5.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v5.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v6.cVet, sizeof(v6.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v6.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

}

void
bubbleSort_decresOrder(){
    double t1 = 0.0, t2 = 0.0;
    unsigned long int comp, atrib;

    printf("\n\nORDENADO DECRESCENTE\n");
    printf("Tamanho\tTempo\tComparação\tAtribuição\n");

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v1.dVet, sizeof(v1.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v1.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v2.dVet, sizeof(v2.cVet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v2.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v3.dVet, sizeof(v3.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v3.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v4.dVet, sizeof(v4.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v4.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v5.dVet, sizeof(v5.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v5.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

    comp = 0, atrib = 0;
    t1 = clock();
    bubbleSort(v6.dVet, sizeof(v6.vet) / sizeof(int), &comp, &atrib);
    t2 = clock();
    printf("%lu\t%f\t%lu\t%lu\n", sizeof(v6.vet) / sizeof(int), (t2 - t1) / CLOCKS_PER_SEC, comp, atrib);

}

int
main(){

    functVetor(v1.vet, v1.cVet, v1.dVet, sizeof(v1.vet) / sizeof(int));
    functVetor(v2.vet, v2.cVet, v2.dVet, sizeof(v2.vet) / sizeof(int));
    functVetor(v3.vet, v3.cVet, v3.dVet, sizeof(v3.vet) / sizeof(int));
    functVetor(v4.vet, v4.cVet, v4.dVet, sizeof(v4.vet) / sizeof(int));
    functVetor(v5.vet, v5.cVet, v5.dVet, sizeof(v5.vet) / sizeof(int));
    functVetor(v6.vet, v6.cVet, v6.dVet, sizeof(v6.vet) / sizeof(int));


    printf("- - - - - - - - - - METODO bubbleSort - - - - - - - - - -");
    bubbleSort_noOrder();
    bubbleSort_cresOrder();
    bubbleSort_decresOrder();

    return 0;
}
