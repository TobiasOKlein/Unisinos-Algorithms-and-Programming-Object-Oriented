/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef FILA_H
#define FILA_H

// INCLUDES

#include "Nodo.h"

// CLASS //

template <class T>
class Fila{
    public:
        Fila();
        ~Fila();
        void enter(T value);
        Nodo<T>* exit();
        Nodo<T>* getFront();
        signed char getSize();
        void clear();
        Nodo<T>* search(int numAluno);

    private:
        Nodo<T> *front;
        signed char tamanho;
};

// METHODOS //

template <class T>
Fila<T>::Fila(){
    front = NULL;
    tamanho = 0;
}

template <class T>
Fila<T>::~Fila(){}


template <class T>
signed char Fila<T>::getSize() {
    return tamanho;
}


template <class T>
Nodo<T>* Fila<T>::getFront() {
    return front;
}


template <class T>
void Fila<T>::enter(T value) {
    Nodo<T>* newNode = new Nodo<T>();
    newNode->setValue(value);
    newNode->setPrev(front);
    if (front != NULL) {
        front->setNext(newNode);
    }
    newNode->setNext(NULL);
    front = newNode;
    tamanho++;
}


template <class T>
Nodo<T>* Fila<T>::exit() {
    if (front == NULL) {
        return NULL; // Fila vazia
    }
    Nodo<T>* nodefronfront = front;
    front = front->getPrev();
    tamanho--;
    return nodefronfront;
}


template <class T>
void Fila<T>::clear() {
    while (front != NULL) {
        Nodo<T>* nodeToDelete = front;
        front = front->getPrev();
        delete nodeToDelete;
    }
    tamanho = 0; // Reseta os contadores
}


template <class T>
Nodo<T>* Fila<T>::search(int numAluno) {
    Nodo<T>* nodoDeBusca = front;
    while (nodoDeBusca != NULL) {
        if (nodoDeBusca->getValue().getNumAluno() == numAluno){
            // Sor, finge que isso não daria erro se o template não fosse as classe requisitadas, obrigado :)
            // Era isso ou tudo direto no switch, o que eu tinha feito na verdade, mas trouxe pra cá agr e funfou
            return nodoDeBusca;
        }
        nodoDeBusca = nodoDeBusca->getPrev();
    }
    return NULL;
}


#endif // FILA_H //