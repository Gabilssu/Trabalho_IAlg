#include "salvarArquivo.h"
#include <fstream>
#include <iostream>

void salvarArquivo(string nomeArquivo,
                   Personagem vetor[],
                   int quantidade)
{
    ofstream arquivo(nomeArquivo);

    if (!arquivo.is_open())
    {
        cout << "Erro ao salvar o arquivo!" << endl;
        return;
    }

    for (int i = 0; i < quantidade; i++)
    {
        if (vetor[i].identificador > 0)
        {
            arquivo
                << vetor[i].identificador << ";"
                << vetor[i].nome << ";"
                << vetor[i].criador << ";"
                << vetor[i].titulo << ";"
                << vetor[i].especie << endl;
        }
    }

    arquivo.close();
}