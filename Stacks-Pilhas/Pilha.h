/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef STACK_H
#define STACK_H

#include "Nodo.h"

template <class T>
class Pilha{
    public:
        Pilha();
        ~Pilha();

        void push(T value);
        Nodo<T>* pop();
        Nodo<T>* getTop();
        signed char getSize();
        void clear();

    private:
        Nodo<T> *top;
        signed char tamanho;        
};

template <class T>
Pilha<T>::Pilha(){
    top = NULL;
    tamanho = 0;
}

template <class T>
Pilha<T>::~Pilha(){}


template <class T>
signed char Pilha<T>::getSize() {
    return tamanho;
}


template <class T>
Nodo<T>* Pilha<T>::getTop() {
    return top;
}


template <class T>
void Pilha<T>::push(T value) {
    Nodo<T>* newNode = new Nodo<T>();
    newNode->setValue(value);
    newNode->setPrev(top);
    if (top != NULL) {
        top->setNext(newNode);
    }
    newNode->setNext(NULL);
    top = newNode;
    tamanho++;
}


template <class T>
Nodo<T>* Pilha<T>::pop() {
    if (top == NULL) {
        return NULL; // Pilha vazia
    }
    Nodo<T>* nodeToPop = top;
    top = top->getPrev();
    tamanho--;
    return nodeToPop;
}


template <class T>
void Pilha<T>::clear() {
    while (top != NULL) {
        Nodo<T>* nodeToDelete = top;
        top = top->getPrev();
        delete nodeToDelete;
    }
    tamanho = 0; // Reseta os contadores
}


#endif // STACK_H //