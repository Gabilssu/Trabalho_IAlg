#include "redimensionar.h"
void redimensionar(Personagem *&vetor,
                   int &capacidade)
{
    int novaCapacidade = capacidade + 10;

    Personagem *novo = new Personagem[novaCapacidade];

    for (int i = 0; i < capacidade; i++)
    {
        novo[i] = vetor[i];
    }

    delete[] vetor;

    vetor = novo;
    capacidade = novaCapacidade;
}