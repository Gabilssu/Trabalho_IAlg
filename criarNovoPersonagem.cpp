#include "criarNovoPersonagem.h"
#include <iostream>
#include <string>

void criarNovoPersonagem(Personagem &novoPersonagem)
{
    cin.ignore();
    cout << "Digite o nome do personagem: " << endl;
    getline(cin, novoPersonagem.nome);

    cout << "Digite o criador do personagem: " << endl;
    getline(cin, novoPersonagem.criador);

    cout << "Digite o titulo: " << endl;
    getline(cin, novoPersonagem.titulo);

    cout << "Digite a especie do personagem: " << endl;
    getline(cin, novoPersonagem.especie);

    cout << "Informações registradas com sucesso" << endl;
    cout << "----------------------------------------" << endl;
}

