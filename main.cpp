#include <iostream>

#include "personagem.h"
#include "inicializarVetor.h"
#include "redimensionar.h"
#include "carregarArquivo.h"
#include "salvarArquivo.h"
#include "mostrarElemento.h"
#include "inserirFinal.h"
#include "inserirOrdenado.h"
#include "criarNovoPersonagem.h"

using namespace std;
int main()
{
    int opcao = -1;
    int opcaoInsercao = -1;
    //se quiser coloca mais elementos aqui, botei so o básico
    Personagem *vetor;
    Personagem novoPersonagem;
    int capacidade;
    int quantidade;

    inicializarVetor(vetor, capacidade, quantidade);

    carregarArquivo("personagens.csv",
                    vetor,
                    quantidade,
                    capacidade);

    while (opcao !=4)
    {
        cout << endl << "Digite o número referente ao que você deseja fazer: "<< endl;
        cout << "1 - Inserir elemento" << endl;
        cout << "2 - Mostrar elementos" << endl;
        cout << "3 - Salvar arquivo" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;
        if (opcao == 1)
        {
            opcaoInsercao = -1;
            while (opcaoInsercao!=3)
            {
                cout << "A inserção deve ser no final do arquivo ou ordenada?" << endl;
                cout << "1 - No final do arquivo" << endl;
                cout << "2 - Ordenada" << endl;
                cout << "3 - Voltar" << endl;
                cin >> opcaoInsercao;
                if (opcaoInsercao == 1)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirFinal(vetor, novoPersonagem, quantidade, capacidade);   
                    cout << "Inserindo novo personagem (final)..." << endl;
                    opcaoInsercao = 3;
                }
                else if (opcaoInsercao == 2)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirOrdenado(vetor, novoPersonagem, quantidade, capacidade);
                    cout << "Inserindo novo personagem (ordenado)..." << endl;
                    opcaoInsercao = 3;
                }
                else if (opcaoInsercao != 3)
                {
                    cout << "Opção inválida!" << endl;
                    cout << "Digite apenas valores válidos (1-3)" << endl;
                }
            }
        }
        else if (opcao == 2)
        {
            cout << "Mostrando elementos..." << endl;
            mostrarElemento(vetor, 0, quantidade-1, quantidade);
        }
        else if (opcao == 3)
        {
            cout << "Salvando arquivo..." << endl;
            salvarArquivo("saida.csv", vetor, quantidade);
        }
        else if (opcao == 4)
        {
            cout << "Saindo do programa..." << endl;
            delete[] vetor;
            return 0;
        }
        else
        {
            cout << "Opção inválida!" << endl;
            cout << "Digite apenas valores válidos (1-4)" << endl;
        }
    }

    return 0;
}