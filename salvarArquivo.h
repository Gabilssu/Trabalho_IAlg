#ifndef SALVARARQUIVO_H
#define SALVARARQUIVO_H

#include "personagem.h"
#include "remover.h"
#include <string>

using namespace std;

void salvarArquivo(string nomeArquivo,
                   Personagem*& vetor,
                   int &quantidade);

#endif