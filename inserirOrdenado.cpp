#include "inserirOrdenado.h"
#include "redimensionar.h"

void inserirOrdenado(Personagem *&vetor, 
                  Personagem &novoPersonagem, 
                  int &quantidade, 
                  int &capacidade)
{
    if (quantidade == capacidade)
    {
        redimensionar(vetor, capacidade);
    }

    vetor[quantidade] = novoPersonagem;
    quantidade++;
}