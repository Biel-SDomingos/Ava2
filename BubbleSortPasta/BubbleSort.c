
#include "BubbleSort.h"
#include <stdio.h>

// Função para ordenar um array usando Bubble Sort.
void bubbleSort(int arr[], int size) {

    // Implementação do Bubble Sort.
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    // Código de entrada de dados.
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes do Bubble Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Chamada para ordenar o array.
    bubbleSort(arr, size);

    // Código para imprimir o array ordenado.
    printf("\nArray depois do Bubble Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}