/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef PILHA_H
#define PILHA_H

#include "Nodo.h"

template <class T>
class Pilha{
    public:
        Pilha();
        ~Pilha();


    private:
        Nodo<T> *top;
        signed char atual;
        signed char tamanho;        
};

template <class T>
Pilha<T>::Pilha(){
    top = NULL;
    atual = tamanho = 0;
}

#endif // PILHA_H