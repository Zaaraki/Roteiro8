#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "imovel.h"

class Apartamento : public Imovel
{
   private:
    string posicao;
    double valorDoCondominio;
    int numeroDeVagasNaGaragem;

public:
    Apartamento(const Endereco &endereco, const string &posicao, double valorDoCondominio, int numeroDeVagasNaGaragem);

    const string &getDescricao() const override;

    string toString(int num);
};

#endif // APARTAMENTO_H
