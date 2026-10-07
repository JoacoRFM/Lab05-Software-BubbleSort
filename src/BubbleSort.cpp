#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int>& vet) {
    int n = vet.size();
    if (n < 2) return;

    for (int i = n; i >= 2; i--) {
        for (int j = 1; j <= i - 1; j++) {
            if (vet[j - 1] > vet[j]) {
                int aux = vet[j - 1];
                vet[j - 1] = vet[j];
                vet[j] = aux;
            }
        }
    }
}