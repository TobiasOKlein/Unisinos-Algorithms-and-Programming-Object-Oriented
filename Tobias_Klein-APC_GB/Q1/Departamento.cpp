/**
 * @author Tobias Klein
 * 
 * 
 */

#include "Funcionario.h"
#include "Departamento.h"

Departamento::Departamento(){}

Departamento::Departamento(std::string Nome)
{
    this->Nome = Nome;
}

Departamento::~Departamento(){}

void Departamento::setNome(std::string Nome)
{
    this->Nome = Nome;
}

void Departamento::AumentoSalarial(float Aumento)
{
    for(int i = 0; i < Contador_Funcionarios; i++)
    {
        Funcionarios[i]->AumentoSalarial(Aumento);
    }
}

void Departamento::setFuncionarios(std::string Nome)
{
    Funcionarios[Contador_Funcionarios] = new Funcionario(Nome);
    Contador_Funcionarios++;
}

std::string Departamento::getNome()
{
    return Nome;
}