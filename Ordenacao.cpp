//Ordenação por identificador, nome, desenho, autor ou especie

#include <iostream>
#include "main.cpp"
#include "personagem.h"
using namespace std;

void ordenar(Personagem vetor[], int quantidade, int criterio)
{
    for (int i = 1; i < quantidade; i++)
    {
        Personagem chave = vetor[i];
        int j = i - 1;

        switch (criterio)
        {
        case 1: // Ordenar por identificador
            while (j >= 0 && vetor[j].identificador > chave.identificador)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;
        case 2: // Ordenar por nome
            while (j >= 0 && vetor[j].nome > chave.nome)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;
        case 3: // Ordenar por desenho
            while (j >= 0 && vetor[j].titulo > chave.titulo)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;
        case 4: // Ordenar por autor
            while (j >= 0 && vetor[j].criador > chave.criador)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;
        case 5: // Ordenar por tipo
            while (j >= 0 && vetor[j].especie > chave.especie)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;
        default:
            cout << "Criterio de ordenacao invalido!" << endl;
            return;
        }

        vetor[j + 1] = chave;
    }
}
