#ifndef IMOVEL_H
#define IMOVEL_H

#include "endereco.h"

class Imovel
{
    public:
        Imovel(const Endereco &endereco);
        virtual ~Imovel();
        virtual const Endereco &getEndereco() const;
        virtual const std::string &getDescricao() const = 0;

    protected:
        Endereco endereco;

};

#endif // IMOVEL_H
