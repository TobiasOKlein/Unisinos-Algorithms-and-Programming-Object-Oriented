/**
 * @author Tobias Klein
 * 
 * 
 */

#ifndef __EMPRESA_H__
#define __EMPRESA_H__

#include <iostream>
#include "Departamento.h"

class Empresa{
    public:
        Empresa();
        Empresa(std::string, std::string);
        ~Empresa();

        void setEmpresa(std::string, std::string);
        void setDepartamento(std::string);
        Departamento* getDepartamento(int);
        void printDepartamentos();
        void AumentoSalarial(float);

    private:
        std::string  Nome;
        std::string  CNPJ;
        Departamento *Departamentos[10];
        int Contador_Departamentos = 0;
};

#endif //__EMPRESA_H__