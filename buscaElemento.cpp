#include "buscaElemento.h"
#include <iostream>
#include <cctype>
string padronizar(string texto)
{
    for(int i = 0; i < texto.size(); i++)
    {
        if (texto[i]>='A' && texto[i]<='Z')
        {
            texto[i] = tolower(texto[i]);
        }
    }

    return texto;
}

void aparecerDados (Personagem *&vetor, 
                    int i)
{
    cout << "-------------------------" << endl;
    cout << "Identificador: " << vetor[i].identificador << endl;
    cout << "Nome: " << vetor[i].nome << endl;
    cout << "Criador: " << vetor[i].criador << endl;
    cout << "Titulo: " << vetor[i].titulo << endl;
    cout << "Especie: " << vetor[i].especie << endl;
}

void buscarElementoIterativo(Personagem *&vetor,
                            string &comparador,
                            int tipo,
                            int &quantidade)
{
    bool achou = false;
    comparador = padronizar(comparador);
    for(int i = 0; i < quantidade; i++)
    {
        if (tipo==2)
        {
             if(padronizar(vetor[i].nome) == comparador)
            {
                aparecerDados(vetor, i);
                achou = true;
            }
        }
        else if (tipo==3)
        {
             if(padronizar(vetor[i].criador) == comparador)
            {
                aparecerDados(vetor, i);
                achou = true;
            }
        }
        else if (tipo==4)
        {
             if(padronizar(vetor[i].titulo) == comparador)
            {
                aparecerDados(vetor, i);
                achou = true;
            }
        }
        else if (tipo==5)
        {
             if(padronizar(vetor[i].especie) == comparador)
            {
                aparecerDados(vetor, i);
                achou = true;
            }
        }
    }      
    if (achou==false)
    {
        cout << "Não foi encontrado nenhum elemento que corresponda com: " << comparador << endl;
        cout << "Confira se a informação está corretamente digitada" << endl;
    }                   
}