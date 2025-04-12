/**
 * @author Tobias Klein
 * 
 * 
 */

#include "Funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(std::string Nome)
{
    this->Nome = Nome;
}

Funcionario::~Funcionario(){}

void Funcionario::setNome(std::string Nome)
{
    this->Nome = Nome;
}

void Funcionario::setSalario(float Salario)
{
    this->Salario = Salario;
}

void Funcionario::setDataAdmissao(std::string Data_Admissao)
{
    this->Data_Admissao = Data_Admissao;
}

void Funcionario::AumentoSalarial(float Aumento)
{
    this->Salario = this->Salario * Aumento / 100;
}

std::string Funcionario::getNome()
{
    return Nome;
}