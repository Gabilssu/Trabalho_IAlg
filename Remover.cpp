// Remoção Logica e Fisica de Personagens
#include <iostream>
#include "Remover.h"
using namespace std;

void removerLogico(Personagem vetor[], int quantidade, int identificador){

    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i].identificador == identificador)
        {
            vetor[i].identificador = -1;
            cout << "Personagem marcado como removido." << endl;
            return;
        }
    }

    cout << "Personagem com identificador " << identificador
         << " nao encontrado." << endl;
}

void removerFisico(Personagem vetor[], int &quantidade){

    int novaQuantidade = 0;

    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i].identificador != -1)
        {
            vetor[novaQuantidade] = vetor[i];
            novaQuantidade++;
        }
    }

    quantidade = novaQuantidade;

    cout << "Remocao fisica realizada com sucesso." << endl;
}