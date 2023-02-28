#include <iostream>
using namespace std;
int main() {
  double vet[30] , soma=0;
  int maior=0, menor=0;
  for (int i = 0; i < 30; i++) {
    if (i == 0) {
        vet[i] = maior;
    }
    if (vet[i] > maior) {
        maior = vet[i];
    }
}
  for (int i = 0; i < 30; i++) {
    if (i == 0) {
        vet[i] = menor;
    }
    if (vet[i] < menor) {
        menor = vet[i];
    }
}
  for (int i = 0; i < 30; i++) {
    soma = soma + vet[i];
    double med = soma/30;
}
  
}