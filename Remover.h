#ifndef REMOVER_H
#define REMOVER_H

#include "personagem.h"

void removerLogico(Personagem vetor[],
                    int quantidade,
                    int identificador);

void removerFisico(Personagem*& vetor,
                    int &quantidade);

#endif