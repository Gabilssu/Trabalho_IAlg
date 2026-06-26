#include "inserir.h"
#include "redimensionar.h"
#include <cctype>
#include <iostream>

int acharId(Personagem *vetor, 
            int quantidade)
{
    int auxId = 1;
    while (true)
    {
        int contador = 0;

        for (int i = 0; i < quantidade; i++)
        {
            if (vetor[i].identificador != auxId)
            {
                contador++;
            }
        }

        if (contador == quantidade)
        {
            return auxId;
        }
        auxId++;
    }
}
void inserirFinal(Personagem *&vetor, 
                  Personagem &novoPersonagem, 
                  int &quantidade, 
                  int &capacidade)
{
    if (quantidade == capacidade)
    {
        redimensionar(vetor, capacidade);
    }
    
    if (quantidade == 0)
    {
        novoPersonagem.identificador = 1;
    }
    else
    {
        novoPersonagem.identificador = acharId(vetor,quantidade);
    }
    vetor[quantidade] = novoPersonagem;
    quantidade++;
}

string toLowerString(string texto)
{
    for (int i = 0; i < texto.size(); i++)
    {
        texto[i] = tolower(texto[i]);
    }
    return texto;
}

void inserirOrdenado(Personagem *&vetor,
                    Personagem &novoPersonagem,
                    int &quantidade,
                    int &capacidade,
                    int tipo)
{
    if (quantidade == capacidade)
    {
        redimensionar(vetor, capacidade);
    }

    int posicao = 0;
    bool achou = false;
    while (posicao < quantidade && achou == false)
    {
        bool menor = false;

        if (tipo == 2)
        {
            menor = toLowerString(vetor[posicao].nome)
                  < toLowerString(novoPersonagem.nome);
        }
        else if (tipo == 3)
        {
            menor = toLowerString(vetor[posicao].criador)
                  < toLowerString(novoPersonagem.criador);
        }
        else if (tipo == 4)
        {
            menor = toLowerString(vetor[posicao].titulo)
                  < toLowerString(novoPersonagem.titulo);
        }
        else if (tipo == 5)
        {
            menor = toLowerString(vetor[posicao].especie)
                  < toLowerString(novoPersonagem.especie);
        }


        if (menor == false)
        {
            achou = true;
        }
        else
        {
            posicao++;
        }
    }
    for (int i = quantidade; i > posicao; i--)
    {
        vetor[i] = vetor[i - 1];
    }

    if (achou==false)
    {
        cout << "O elemento será adicionado no final (id: " << posicao << ")" << endl;
    }
    else
    {
        cout << "O elemento será adicionado na posição correspondente (id: " << posicao << ")" << endl;
    }

    if (quantidade == 0)
    {
        novoPersonagem.identificador = 1;
    }
    else
    {
        novoPersonagem.identificador = acharId(vetor,quantidade);
    }
    vetor[posicao] = novoPersonagem;
    quantidade++;
}
