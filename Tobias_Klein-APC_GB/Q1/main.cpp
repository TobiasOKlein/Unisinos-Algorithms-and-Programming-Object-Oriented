/**
 * @author Tobias Klein
 * 
 * 
 */

#include <iostream>
#include "Funcionario.h"
#include "Departamento.h"
#include "Empresa.h"

int main(void)
{
    /* Variaveis */
    int Opcao_Menu = 0;
    Empresa Empresa_Usuario;
    std::string Nome, CNPJ;
    float Aumento;
    int Posicao_Vetor;
    Departamento* DP;

    while(Opcao_Menu != 9)
    {
        switch (Opcao_Menu)
        {
        case 1:
            Opcao_Menu = 0;
            std::cout << " Defina o nome da Empresa: ";
            std::cin  >> Nome;
            std::cout << " Digite seu CNPJ: ";
            std::cin  >> CNPJ;
            Empresa_Usuario.setEmpresa(Nome, CNPJ);
            break;

        case 2:
            Opcao_Menu = 0;
            std::cout << " Nome do Novo Departamento: ";
            std::cin  >> Nome;
            Empresa_Usuario.setDepartamento(Nome);
            break;

        case 3:
            Opcao_Menu = 0;
            Empresa_Usuario.printDepartamentos();
            break;

        case 4:
            Opcao_Menu = 0;
            std::cout << " Nome do Novo Funcionario: ";
            std::cin  >> Nome;
            std::cout << " Numero do Departamento: ";
            std::cin  >> Posicao_Vetor;
            DP = Empresa_Usuario.getDepartamento(Posicao_Vetor);
            DP->setFuncionarios(Nome);
            break;

        case 5:
            Opcao_Menu = 0;
            std::cout << " Numero do Departamento: ";
            std::cin  >> Posicao_Vetor;
            Empresa_Usuario.printDepartamentos();
            break;

        case 6:
            Opcao_Menu = 0;
            std::cout << " Valor do Aumento: ";
            std::cin  >> Aumento;
            std::cout << " Numero do Departamento: ";
            std::cin  >> Posicao_Vetor;
            DP = Empresa_Usuario.getDepartamento(Posicao_Vetor);
            DP->AumentoSalarial(Aumento);
            break;

        default:
            Opcao_Menu = 0;
            std::cout << std::endl;
            std::cout << " 1. Criar Empresa." << std::endl;
            std::cout << " 2. Adicionar Departamentos a Empresa." << std::endl;
            std::cout << " 3. Printar Departamentos." << std::endl;
            std::cout << " 4. Adicionar Funcionario a Departamento." << std::endl;
            std::cout << " 5. Printar Funcionarios de Departamento." << std::endl;
            std::cout << " 6. Dar Aumento Salarial." << std::endl;
            //std::cout << " 7. Transferir Funcionario Departamento. [NAO FUNCIONAL]" << std::endl;
            std::cout << " 9. Encerrar Sessao." << std::endl;
            std::cout << std::endl << " Opcao: ";
            std::cin >> Opcao_Menu;
            break;
        }
    }
    
    std::cout << std::endl << " Saindo..." << std::endl;
    return 0;
}