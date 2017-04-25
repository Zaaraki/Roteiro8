#include "Endereco.h"

Endereco::Endereco(const string &logradouro, const string &bairro, int numero, const string &cidade, const string &cep)
        : logradouro(logradouro), bairro(bairro), numero(numero), cidade(cidade), cep(cep) {}

const string &Endereco::getLogradouro() const {
    return logradouro;
}

const string &Endereco::getBairo() const {
    return bairro;
}

int Endereco::getNumero() const {
    return numero;
}

const string &Endereco::getCidade() const {
    return cidade;
}

const string &Endereco::getCep() const {
    return cep;
}

const std::string &Endereco::getEnderecoString() const {
    static string s = "";
    s = "Rua: " + logradouro +"; Bairro: " + bairro + "; Numero: " + toString(numero)
    + "; Cidade: " + cidade + "; CEP: " + cep;
    return s;
}
