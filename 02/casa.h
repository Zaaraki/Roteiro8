#ifndef CASA_H
#define CASA_H
#include "imovel.h"

class Casa : public Imovel
{
    private:
    int numeroDePavimentos;
    int numeroDeQuartos;
    double areaDoTerreno;
    double areaConstruida;

public:
    Casa(const Endereco &endereco, int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno, double areaConstruida);

    const string &getDescricao() const override;

    string toString(int num) const {
        cout << num<< endl;
            }
};

#endif // CASA_H
