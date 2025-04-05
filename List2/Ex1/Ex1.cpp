/* 
 * @author: Tobias Klein
 * 
 * @description: Crie uma classe Atleta, que possui um nome e uma idade.
 * No construtor de Atleta, receba todos os parâmetros necessários para
 * inicializar os atributos. Crie os métodos de acesso para os atributos
 * e o método imprime_info, que não recebe parâmetros e imprime as
 * informações do Atleta.
 */

#include "Atleta.h"

int main(void){
    Atleta aaa("Aristoteles", 2456);

    aaa.imprime_info();

    return 0;
}