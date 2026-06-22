#ifndef CARREGARARQUIVO_H
#define CARREGARARQUIVO_H

#include "personagem.h"
#include <string>

using namespace std;

void carregarArquivo(string nomeArquivo,
                     Personagem *&vetor,
                     int &quantidade,
                     int &capacidade);

#endif