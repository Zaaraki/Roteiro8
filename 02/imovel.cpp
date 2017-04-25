#include "imovel.h"
#include "endereco.h"

Imovel::Imovel(const Endereco &endereco) : endereco(endereco)
{
    //ctor
}

const Endereco &Imovel::getEndereco() const {
    return endereco;
}

Imovel::~Imovel()
{
    //dtor
}
