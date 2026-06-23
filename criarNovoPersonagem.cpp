#include "criarNovoPersonagem.h"
#include <iostream>
#include <string>

void criarNovoPersonagem(Personagem &novoPersonagem)
{
    cout << "Digite o nome do personagem: "<< endl;
    cin >> novoPersonagem.nome;

    cout << "Digite o criador do personagem: "<< endl;
    cin >> novoPersonagem.criador;

    cout << "Digite o titulo: "<< endl;
    cin >> novoPersonagem.titulo;

    cout << "Digite a especie do personagem: "<< endl;
    cin >> novoPersonagem.especie;

    cout << "Informações registradas com sucesso" << endl;
    cout << "----------------------------------------" << endl;
}

