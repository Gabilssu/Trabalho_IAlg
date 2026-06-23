//Ordenação por identificador, nome, desenho, autor ou especie

#include <iostream>
#include "Ordenacao.h"
using namespace std;

void ordenar(Personagem vetor[], int quantidade, int criterio){

    for (int i = 1; i < quantidade; i++)
    {
        Personagem chave = vetor[i];
        int j = i - 1;

        switch (criterio)
        {
        case 1: // Identificador
            while (j >= 0 && vetor[j].identificador > chave.identificador)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;

        case 2: // Nome
            while (j >= 0 && vetor[j].nome > chave.nome)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;

        case 3: // Título do desenho
            while (j >= 0 && vetor[j].titulo > chave.titulo)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;

        case 4: // Criador
            while (j >= 0 && vetor[j].criador > chave.criador)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;

        case 5: // Espécie
            while (j >= 0 && vetor[j].especie > chave.especie)
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            break;

        default:
            cout << "Critério de ordenação inválido!" << endl;
            return;
        }

        vetor[j + 1] = chave;
    }
}
