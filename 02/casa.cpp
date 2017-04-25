#include <iomanip>
#include <sstream>
#include "casa.h"

Casa::Casa(const Endereco &endereco, int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno, double areaConstruida)
        : Imovel(endereco), numeroDePavimentos(numeroDePavimentos), numeroDeQuartos(numeroDeQuartos), areaDoTerreno(areaDoTerreno),
          areaConstruida(areaConstruida) {}

const string &Casa::getDescricao() const {
    stringstream landStream, builtStream;
    landStream << fixed << setprecision(2) << areaDoTerreno;
    builtStream << fixed << setprecision(2) << areaConstruida;

//    static string s = "";
    static string s = "";
    s = "Descricao da casa\n" + getEndereco().getEnderecoString();
    s += "\nNum de pavimentos: " + toString(numeroDePavimentos) + "; Num de quartos: " + toString(numeroDeQuartos)
            + "; Area do terreno: " + landStream.str() + "; Area Construida: " + builtStream.str();
    return s;
}
