#ifndef TERRENO_H
#define TERRENO_H

#include <iostream>
#include "imovel.h"

using namespace std;

class Terreno : public Imovel
{
    public:
        Terreno(const Endereco &endereco, double area);
        const string &getDescricao() const override;

    private:
        double area;
};

#endif // TERRENO_H
