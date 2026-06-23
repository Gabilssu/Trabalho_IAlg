// Remoção Logica e Fisica de Personagens
#include <iostream>
#include "main.cpp"
#include "personagem.h"
using namespace std;

void remover(Personagem vetor[], int &quantidade, int identificador)
{
    bool encontrado = false;
    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i].identificador == identificador)
        {
            encontrado = true;
            vetor[i].identificador = -1;
            cout << "Personagem com identificador " << identificador << " removido logicamente." << endl;

        }
    }

    if (!encontrado)
    {
        cout << "Personagem com identificador " << identificador << " nao encontrado." << endl;
    }
}

void removerFisico(Personagem vetor[], int &quantidade)
{
    int novoTamanho = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i].identificador != -1) 
        {
            vetor[novoTamanho] = vetor[i];
            novoTamanho++;
        }
    }
    quantidade = novoTamanho;
    cout << "Remocao fisica concluida." << quantidade << endl;
}