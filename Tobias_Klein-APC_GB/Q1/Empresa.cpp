/**
 * @author Tobias Klein
 * 
 * 
 */

#include "Empresa.h"
//#include "Departamento.h"

Empresa::Empresa(){}

Empresa::Empresa(std::string Nome, std::string CNPJ)
{
    this->Nome = Nome;
    this->CNPJ = CNPJ;
}

Empresa::~Empresa(){}

void Empresa::setDepartamento(std::string Nome)
{
    Departamentos[Contador_Departamentos] = new Departamento(Nome);
    Contador_Departamentos++;
}

Departamento* Empresa::getDepartamento(int Posicao_Vetor)
{
    return Departamentos[Posicao_Vetor];
}

void Empresa::printDepartamentos()
{
    std::cout << std::endl;
    for(int i = 0; i < Contador_Departamentos; i++)
    {
        std::cout << " " << Departamentos[i]->getNome() << std::endl;
    }
}

void Empresa::setEmpresa(std::string Nome, std::string CNPJ)
{
    this->Nome = Nome;
    this->CNPJ = CNPJ;
}