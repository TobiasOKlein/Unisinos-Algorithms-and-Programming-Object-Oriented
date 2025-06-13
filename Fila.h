/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef FILA_H
#define FILA_H

#include "Nodo.h"

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

    private:
        Nodo<T> *front;
        signed char tamanho;
};

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


#endif // FILA_H //