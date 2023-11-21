#include "MergeSort.h"
#include <stdio.h>
#include <stdlib.h>

/* Função responsável por combinar ordenadamente as partes esquerda e direita de um array,
   em uma única parte ordenada em arr.*/
void merge(int arr[], int left[], int right[], int leftSize, int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
// Função para ordenar um array usando Merge Sort.
void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, right, mid, size - mid);
}


int main() {

    //Código de entradas de dados.
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes do Merge Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Chamada para ordenar o array.
    mergeSort(arr, size);

    // Código para imprimir o array ordenado aqui.
    printf("\nArray depois do Merge Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}