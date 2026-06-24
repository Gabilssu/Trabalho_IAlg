#include <iostream>

#include "personagem.h"
#include "inicializarVetor.h"
#include "redimensionar.h"
#include "carregarArquivo.h"
#include "salvarArquivo.h"
#include "mostrarElemento.h"
#include "inserir.h"
#include "criarNovoPersonagem.h"
#include "buscaElemento.h"
#include "buscaBinaria.h"
#include "Ordenacao.h"
#include "Remover.h"

using namespace std;
int main()
{
    int opcao = -1;
    int opcaoInsercao = -1;
    int opcaoBusca = -1;
    string comparador;
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

    while (opcao != 7)
    {
        cout << endl << "Digite o número referente ao que você deseja fazer: "<< endl;
        cout << "1 - Inserir elemento" << endl;
        cout << "2 - Mostrar elementos" << endl;
        cout << "3 - Buscar elementos" << endl;
        cout << "4 - Salvar arquivo" << endl;
        cout << "5 - Ordenar elementos" << endl;
        cout << "6 - Remover elementos" << endl;
        cout << "7 - Sair" << endl;
        cin >> opcao;
        if (opcao == 1)
        {
            opcaoInsercao = -1;
            while (opcaoInsercao!=6)
            {
                cout << "A inserção deve ser no final do arquivo ou ordenada?" << endl;
                cout << "1 - No final do arquivo" << endl;
                cout << "2 - Ordenada por nome" << endl;
                cout << "3 - Ordenada por autor" << endl;
                cout << "4 - Ordenada por título" << endl;
                cout << "5 - Ordenada por espécie" << endl;
                cout << "6 - Voltar" << endl;
                cin >> opcaoInsercao;
                if (opcaoInsercao == 1)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirFinal(vetor, novoPersonagem, quantidade, capacidade);   
                    cout << "Inserindo novo personagem (final)..." << endl;
                    opcaoInsercao = 6;
                }
                else if (opcaoInsercao == 2)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirOrdenado(vetor, novoPersonagem, quantidade, capacidade, 2);
                    cout << "Inserindo novo personagem (ordenado por nome)..." << endl;
                    opcaoInsercao = 6;
                }
                else if (opcaoInsercao == 3)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirOrdenado(vetor, novoPersonagem, quantidade, capacidade, 3);
                    cout << "Inserindo novo personagem (ordenado por autor)..." << endl;
                    opcaoInsercao = 6;
                }
                else if (opcaoInsercao == 4)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirOrdenado(vetor, novoPersonagem, quantidade, capacidade, 4);
                    cout << "Inserindo novo personagem (ordenado por título)..." << endl;
                    opcaoInsercao = 6;
                }
                else if (opcaoInsercao == 5)
                {
                    criarNovoPersonagem(novoPersonagem);
                    inserirOrdenado(vetor, novoPersonagem, quantidade, capacidade, 5);
                    cout << "Inserindo novo personagem (ordenado por espécie)..." << endl;
                    opcaoInsercao = 6;
                }
                else if (opcaoInsercao != 6)
                {
                    cout << "Opção inválida!" << endl;
                    cout << "Digite apenas valores válidos (1-6)" << endl;
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
            opcaoBusca = -1;
            while (opcaoBusca!=6)
            {
                cout << "O que você deseja buscar?" << endl;
                cout << "1 - Identificador" << endl;
                cout << "2 - Nome" << endl;
                cout << "3 - Autor" << endl;
                cout << "4 - Título" << endl;
                cout << "5 - Espécie" << endl;
                cout << "6 - Voltar" << endl;
                cin >> opcaoBusca;
                if (opcaoBusca == 1)
                {
                    cout << "Qual id devo buscar? (Apenas números inteiros positivos)" << endl;
                    cin.ignore();
                    getline(cin, comparador);
                    buscarBinaria(vetor, comparador, quantidade);
                    cout << endl;
                    opcaoBusca = 6;
                }
                else if (opcaoBusca == 2)
                {
                    cout << "Qual nome devo buscar?" << endl;
                    cin.ignore();
                    getline(cin, comparador);
                    buscarElementoIterativo(vetor, comparador, 2, quantidade);
                    cout << endl;
                    opcaoBusca = 6;
                }
                else if (opcaoBusca == 3)
                {
                    cout << "Qual autor devo buscar?" << endl;
                    cin.ignore();
                    getline(cin, comparador);
                    buscarElementoIterativo(vetor, comparador, 3, quantidade);
                    cout << endl;
                    opcaoBusca = 6;
                }
                else if (opcaoBusca == 4)
                {
                    cout << "Qual título devo buscar?" << endl;
                    cin.ignore();
                    getline(cin, comparador);
                    buscarElementoIterativo(vetor, comparador, 4, quantidade);
                    cout << endl;
                    opcaoBusca = 6;
                }
                else if (opcaoBusca == 5)
                {
                    cout << "Qual espécie devo buscar?" << endl;
                    cin.ignore();
                    getline(cin, comparador);
                    buscarElementoIterativo(vetor, comparador, 5, quantidade);
                    cout << endl;
                    opcaoBusca = 6;
                }
                else if (opcaoBusca != 6)
                {
                    cout << "Opção inválida!" << endl;
                    cout << "Digite apenas valores válidos (1-6)" << endl;
                }
            }
        }
        else if (opcao == 4)
        {
            cout << "Salvando arquivo..." << endl;
            salvarArquivo("saida.csv", vetor, quantidade);
        }
        else if (opcao == 5)
        {
            int criterio;
            cout << "Escolha o critério de ordenação:" << endl;
            cout << "1 - Identificador" << endl;
            cout << "2 - Nome" << endl;
            cout << "3 - Título do desenho" << endl;
            cout << "4 - Criador" << endl;
            cout << "5 - Espécie" << endl;
            cin >> criterio;

            ordenar(vetor, quantidade, criterio);
            cout << "Elementos ordenados com sucesso!" << endl;
        }
        
        else if (opcao == 6)
        {
            int indentificador;
            cout << "Digite o identificador do personagem que deseja remover: ";
            cin >> indentificador;
            removerLogico(vetor, quantidade, indentificador);
        }
        else if (opcao == 7)
        {
            cout << "Saindo do programa..." << endl;
            delete[] vetor;
            return 0;
        }
        else
        {
            cout << "Opção inválida!" << endl;
            cout << "Digite apenas valores válidos (1-7)" << endl;
        }
    }

    return 0;
}