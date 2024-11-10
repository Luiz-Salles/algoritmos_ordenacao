#include <stdio.h>
#include <time.h>

void algumAlgoritmoDeOrdenacao(int arr[], int n) {
    // Implementação do algoritmo aqui
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    clock_t inicio, fim;
    double tempo_cpu;
    
    inicio = clock();
    algumAlgoritmoDeOrdenacao(arr, n);
    fim = clock();
    
    tempo_cpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    
    printf("Tempo de execução: %f segundos\n", tempo_cpu);
    
    return 0;
}
