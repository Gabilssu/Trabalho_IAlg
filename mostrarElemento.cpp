#include "mostrarElemento.h"
#include <iostream>

void mostrarElemento(Personagem vetor[],
                     int inicio,
                     int fim,
                     int &quantidade)
{
    if (inicio < 0)
        inicio = 0;

    if (fim >= quantidade)
        fim = quantidade - 1;

    for (int i = inicio; i <= fim; i++)
    {
        cout << "-------------------------" << endl;
        cout << "Identificador: " << vetor[i].identificador << endl;
        cout << "Nome: " << vetor[i].nome << endl;
        cout << "Criador: " << vetor[i].criador << endl;
        cout << "Titulo: " << vetor[i].titulo << endl;
        cout << "Especie: " << vetor[i].especie << endl;
    }
}