/*
 * @author: Tobias Klein
 *
 * 
 */

#include "Atleta.h"
#include "iostream"

Atleta::Atleta(){}

Atleta::Atleta(char *nome){
    this->nome = nome;
}

Atleta::Atleta(char *nome, int idade){
    this->nome  = nome;
    this->idade = idade;
}

Atleta::~Atleta(){}

void Atleta::imprime_info(void){
    std::cout << " Nome : " << nome  << std::endl;
    std::cout << " Idade: " << idade << std::endl;
}

char* Atleta::getNome (void){
    return nome;
}

int   Atleta::getIdade(void){
    return idade;
}

void  Atleta::setNome (char *nome){
    this->nome = nome;
}

void  Atleta::setIdade(int idade){
    this->idade = idade;
}