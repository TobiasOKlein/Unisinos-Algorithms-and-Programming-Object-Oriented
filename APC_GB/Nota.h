/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef NOTA_H
#define NOTA_H

class Nota{
    public:
        Nota();
        ~Nota();
    
        int getNumAluno();
        void setNumAluno(int);

        int getNota();
        void setNota(int);

    private:
        int numAluno;
        int nota; 
};

// METODOS

Nota::Nota(){
    nota = 0;
}

Nota::~Nota(){}

int Nota::getNumAluno(){
    return numAluno;
}

void Nota::setNumAluno(int numero){
    numAluno = numero;
}

int Nota::getNota(){
    return nota;
}

void Nota::setNota(int resultado){
    nota = resultado;
}


#endif // NOTA_H //