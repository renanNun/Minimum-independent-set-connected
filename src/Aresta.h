#ifndef ARESTA_H
#define ARESA_H

#include <iostream>

using namespace std;


/**
*   Universidade Federal de Juiz de Fora
*   Criador: Renan Nunes da Costa Gonçalves e Luan Reis Ciribelli
*   versão: 1.0
*/
class Aresta{

public:
    Aresta();
    Aresta(int id_alvo);
    Aresta(int id_alvo, int peso);
    Aresta(int id_alvo, int id_origem, int peso);

    virtual ~Aresta();

    int getId_Alvo();
    int getId_Origem();
    int getPeso();
    Aresta* getProxAresta();

    void setProxAresta(Aresta* aresta);
    void setPeso(int peso);
    void setId_Origem(int novo_id_origem);
    void setId_alvo(int novo_id_alvo);

private:
    int id_alvo;
    int id_origem;
    int peso;
    Aresta* prox;
};

#endif // ARESTA_H