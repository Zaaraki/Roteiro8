#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
using namespace std;

class Endereco
{
    public:
        Endereco(const string &logradouro, const string &bairro, int numero, const string &cidade, const string &cep);

    const string &getLogradouro() const;

    const string &getBairo() const;

    int getNumero() const;

    const string &getCidade() const;

    const string &getCep() const;

    const string &getEnderecoString() const;

    string toString(int num) const {
        cout << num<< endl;
            }

    private:
        string logradouro;
        string bairro;
        int numero;
        string cidade;
        string cep;
};

#endif // ENDERECO_H
