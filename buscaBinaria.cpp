#include "buscaBinaria.h"
#include <iostream>

bool validarNumero(string &comparador)
{
    for(int i = 0; i < comparador.size(); i++)
    {
        if(comparador[i] < '0' || comparador[i] > '9')
        {
            return false;
        }
    }
    return true;
}

void buscarBinaria(Personagem *&vetor,
                   string &comparador,
                   int &quantidade)
{
    int inicio = 0;
    bool achou = false;
    int fim = quantidade - 1;
    if (validarNumero(comparador) == true)
    {
        int intComparador = stoi(comparador);
        while(inicio <= fim && achou == false)
        {
            int meio = (inicio + fim) / 2;

            if(vetor[meio].identificador == intComparador)
            {
                cout << "-------------------------" << endl;
                cout << "Identificador: " << vetor[meio].identificador << endl;
                cout << "Nome: " << vetor[meio].nome << endl;
                cout << "Criador: " << vetor[meio].criador << endl;
                cout << "Titulo: " << vetor[meio].titulo << endl;
                cout << "Especie: " << vetor[meio].especie << endl;

                achou = true;
            }

            if(intComparador < vetor[meio].identificador)
            {
                fim = meio - 1;
            }
            else
            {
                inicio = meio + 1;
            }
        }
        if (achou == false)
        {
            cout << "ID não encontrado!" << endl;
        }
    }
    else
    {
        cout << "Você informou algo que não é um inteiro positivo" << endl;
        cout << "Tenha noção que os identificadores são inteiros positivos" << endl;
    }
}