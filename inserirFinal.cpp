#include "inserirFinal.h"
#include "redimensionar.h"

void inserirFinal(Personagem *&vetor, 
                  Personagem &novoPersonagem, 
                  int &quantidade, 
                  int &capacidade)
{
    if (quantidade == capacidade)
    {
        redimensionar(vetor, capacidade);
    }
    
    int novoId = (vetor[quantidade-1].identificador) + 1;
    novoPersonagem.identificador = novoId;
    vetor[quantidade] = novoPersonagem;
    quantidade++;
}