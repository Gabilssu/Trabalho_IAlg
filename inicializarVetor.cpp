#include "inicializarVetor.h"

void inicializarVetor(Personagem *&vetor,
                      int &capacidade,
                      int &quantidade)
{
    capacidade = 40;
    quantidade = 0;

    vetor = new Personagem[capacidade];
}