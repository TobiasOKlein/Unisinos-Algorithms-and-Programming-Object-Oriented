/**
 * @author Tobias Klein
 * 
 * 
 */

#ifndef __DEPARTAMENTO_H__
#define __DEPARTAMENTO_H__

#include <iostream>
#include "Funcionario.h"

class Departamento{
    public:
        Departamento();
        Departamento(std::string Nome);
        ~Departamento();

        void setNome(std::string);
        std::string getNome();
        void AumentoSalarial(float);
        void setFuncionarios(std::string);

    private:
        std::string Nome;
        Funcionario *Funcionarios[100];
        int Contador_Funcionarios = 0;
};

#endif //__DEPARTAMENTO_H__