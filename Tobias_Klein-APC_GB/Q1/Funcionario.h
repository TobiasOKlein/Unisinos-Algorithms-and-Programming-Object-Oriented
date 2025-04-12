/**
 * @author Tobias Klein
 * 
 * 
 */

#include <iostream>

#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__

class Funcionario{
    public:
        Funcionario();
        Funcionario(std::string Nome);
        ~Funcionario();

        void setNome(std::string);
        void setSalario(float);
        void setDataAdmissao(std::string);
        std::string getNome();
        void AumentoSalarial(float);

    private:
        std::string Nome;
        float       Salario;
        std::string Data_Admissao;
};

#endif //__FUNCIONARIO_H__