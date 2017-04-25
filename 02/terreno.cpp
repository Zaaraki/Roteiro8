#include <sstream>
#include <iomanip>
#include "terreno.h"

Terreno::Terreno(const Endereco &endereco, double area) : Imovel(endereco), area(area) {}

const string &Terreno::getDescricao() const {
    stringstream areaStream;
    areaStream << fixed << setprecision(2) << area;

    static string s = "";
    s = "Descricao do terreno\n" + Terreno::endereco.getEnderecoString();
    s += "\nArea: " + areaStream.str();
    return s;
}
