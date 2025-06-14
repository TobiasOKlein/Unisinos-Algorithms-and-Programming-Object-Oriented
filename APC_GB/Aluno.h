/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef ALUNO_H
#define ALUNO_H

// INCLUDES //

#include <string>

// CLASS //

class Aluno{
    public:
        Aluno();
        ~Aluno();

        std::string getNome();
        void setNome(std::string);

        int getNumAluno();
        void setNumAluno(int);

    private:
        std::string nome;
        int numAluno; 
};

// METHODS //

Aluno::Aluno(){
    nome = "";
    numAluno = 0;
}

Aluno::~Aluno(){}

std::string Aluno::getNome(){
    return nome;
}

void Aluno::setNome(std::string novoNome){
    nome = novoNome;
}

int Aluno::getNumAluno(){
    return numAluno;
}

void Aluno::setNumAluno(int numero){
    numAluno = numero;
}

#endif // ALUNO_H //