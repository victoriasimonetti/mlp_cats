#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main(){

    Pessoa p1("Ana", Pessoa::FEMININO, time(0));
    p1.printAtributos();

    //Cria uma pessoa no heap e a manipula por p2, que é uma veriável do tipo ponteiro alocada na pilha.
    Pessoa* p2 = new Pessoa();
    p2->printAtributos();

    //cria referencia para p1
    Pessoa& p3 = p1;
    p3.printAtributos();

    return 0;
}
