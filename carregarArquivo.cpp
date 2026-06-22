#include "carregarArquivo.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "redimensionar.h"
void carregarArquivo(string nomeArquivo,
                     Personagem *&vetor,
                     int &quantidade,
                     int &capacidade)
{
    ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    string linha;

    while (getline(arquivo, linha))
    {
        if (quantidade == capacidade)
        {
            redimensionar(vetor, capacidade);
        }

        stringstream ss(linha);
        string campo;

        Personagem p;

        getline(ss, campo, ';');
        p.identificador = stoi(campo);

        getline(ss, p.nome, ';');
        getline(ss, p.criador, ';');
        getline(ss, p.titulo, ';');
        getline(ss, p.especie);

        vetor[quantidade] = p;
        quantidade++;
    }

    arquivo.close();
}