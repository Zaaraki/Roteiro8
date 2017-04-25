#include <iostream>
#include "Account.h"
#include "SpecialAccount.h"

int main() {

    Conta conta("Amaro", 20000, "444444", 0);
    ContaEspecial contaEspecial("Apollo", 5000, "333333", 0);

    cout << "Antes das operacoes" << endl;
    conta.print();
    conta.setSalarioMensal(17000);
    conta.depositar(10000);
    conta.sacar(5000);
    cout << "Depois das operacoes" << endl;
    conta.print();
    cout << endl;

    cout << "Antes das operacoes" << endl;
    contaEspecial.print();
    contaEspecial.setSalarioMensal(17000);
    contaEspecial.depositar(10000);
    contaEspecial.sacar(5000);
    cout << "Depois das operacoes" << endl;
    contaEspecial.print();
    cout << endl;

    cout << "--------- Polimorfismo ---------" << endl;
    ContaAbstrata* contaAbstrata1 = &conta;
    contaAbstrata1->print();
    cout << endl;

    ContaAbstrata* contaAbstrata2 = &contaEspecial;
    contaAbstrata2->print();
    cout << endl;

    ContaAbstrata* contaAbstrata3 = new Conta("Shiro", 40000, "22444", 0);
    contaAbstrata3->print();
    contaAbstrata3->depositar(20000);
    contaAbstrata3->sacar(5000);
    contaAbstrata3->print();
    cout << endl;

    ContaAbstrata* contaAbstrata4 = new ContaEspecial("Thor", 55000, "333333", 0);
    contaAbstrata4->print();
    contaAbstrata4->depositar(5000);
    contaAbstrata4->sacar(1000);
    contaAbstrata4->print();
    cout << endl;

    delete contaAbstrata3;
    delete contaAbstrata4;
    contaAbstrata3 = NULL;
    contaAbstrata4 = NULL;

    return 0;
}
