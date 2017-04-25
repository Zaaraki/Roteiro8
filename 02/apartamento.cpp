#include <iomanip>
#include <sstream>
#include "apartamento.h"

Apartamento::Apartamento(const Endereco &endereco, const string &posicao, double valorDoCondominio, int numeroDeVagasNaGaragem)
        : Imovel(endereco), posicao(posicao), valorDoCondominio(valorDoCondominio), numeroDeVagasNaGaragem(numeroDeVagasNaGaragem) {}

string Apartamento::toString(int num)
{
    cout << num << endl;
}



const string &Apartamento::getDescricao() const {
    stringstream valorStream;
    valorStream << fixed << setprecision(2) << valorDoCondominio;

    static string s = "";
    s = "Descricao do Apartamento \n" + Apartamento::endereco.getEnderecoString();
    s += "\nPosition: " + posicao + "; Valor do condominio: " + valorStream.str()
         + "; Numero de vagas na garagem: " + toString(numeroDeVagasNaGaragem);
    return s;
}
