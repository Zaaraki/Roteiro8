#include <iostream>
#include <vector>
#include "imovel.h"
#include "casa.h"
#include "apartamento.h"
#include "terreno.h"

using namespace std;

int main()
{

    vector<Imovel*> propriedades(3);
    Endereco enderecos[] = {
            Endereco("Rua 1", "AAAAAAA", 111, "João Pessoa", "58888-888"),
            Endereco("Rua 2", "BBBBBB", 222, "João Pessoa", "58888-888"),
            Endereco("Rua 3", "CCCCC", 333, "João Pessoa", "58888-888"),
    };

    propriedades[0] = new Casa(enderecos[0], 1, 2, 300, 200);
    propriedades[1] = new Apartamento(enderecos[2], "South", 1000, 2);
    propriedades[2] = new Terreno(enderecos[4], 500);


        for(int i=0; i<3; i++){
            cout << propriedades[i].getDescricao() << endl;
        }
    }
    propriedades.clear();

    return 0;
}
