#include <iostream>

#include "personagem.h"
#include "inicializarVetor.h"
#include "redimensionar.h"
#include "carregarArquivo.h"
#include "salvarArquivo.h"
#include "mostrarElemento.h"

using namespace std;
int main()
{
    Personagem *vetor;
    int capacidade;
    int quantidade;

    inicializarVetor(vetor, capacidade, quantidade);

    carregarArquivo("personagens.csv",
                    vetor,
                    quantidade,
                    capacidade);

    mostrarElemento(vetor, 0, quantidade-1, quantidade);

    salvarArquivo("saida.csv", vetor, quantidade);

    delete[] vetor;

    return 0;
}