#ifndef INSERIR_H
#define INSERIR_H

#include "personagem.h"

void inserirFinal(Personagem *&vetor,
                  Personagem &novoPersonagem,
                  int &quantidade,
                  int &capacidade);

void inserirOrdenado(Personagem *&vetor,
                    Personagem &novoPersonagem,
                    int &quantidade,
                    int &capacidade,
                    int tipo);
#endif