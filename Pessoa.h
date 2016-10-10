#ifndef PESSOA_H
#define PESSOA_H


#include <iostream>
#include <string>
#include <ctime>
#include "Pessoa.h"

using namespace std;

class Pessoa{

    public:

        enum Sexo {INDEFINIDO, MASCULINO, FENININO};
        Pessoa(); //Construtor padrão, cria uma pessoa com valores padrao

        Pessoa(const Pessoa&); //Construtor de cópia, usa uma outra pessoa como base e faz um clone dela (por cópia profunda).
                               //o mesmo que pessoa p; pessoa p2 = p; Copia de p.

        Pessoa(string pal, Sexo s, time_t tempo); // Construtor alternativo, cria uma pessoa padrao e tenta atribuir os valores passados.

        Pessoa& operator = (const Pessoa&); // Sobrecarga do operador de atribuição, ele cria uma nova pessoa tendo como base a pessoa passada.

        ~Pessoa(); //Destrutor

        string getName();
        void setName(string name);
        const time_t getDtnascimento();
        void setDtnascimento(time_t t);
        Sexo getSexo();
        void setSexo(Sexo s);
        void printAtributos();

    private:
        string name;
        time_t dtnascimento;
        Sexo sexo;

};

#endif 
