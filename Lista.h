/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

template <class T>
class Lista{
    public:
        Lista();
        ~Lista();
        void insert(T value);
        Nodo<T>* remove();
        Nodo<T>* getFirst();
        Nodo<T>* getLast();
        signed char getSize();
        void clear();

    private:
        Nodo<T> *first;
        Nodo<T> *last;
        signed char tamanho;
};


template <class T>
Lista<T>::Lista(){
    first = NULL;
    tamanho = 0;
}

template <class T>
Lista<T>::~Lista(){}


template <class T>
signed char Lista<T>::getSize() {
    return tamanho;
}


template <class T>
Nodo<T>* Lista<T>::getFirst() {
    return first;
}


template <class T>
Nodo<T>* Lista<T>::getLast() {
    Nodo<T>* current = first;
    while (current != NULL && current->getPrev() != NULL) {
        current = current->getPrev();
    }
    return current;
}


template <class T>
void Lista<T>::insert(T value) {
    Nodo<T>* newNode = new Nodo<T>();
    newNode->setValue(value);
    newNode->setPrev(first);
    if (first != NULL) {
        first->setNext(newNode);
    }
    newNode->setNext(NULL);
    first = newNode;
    tamanho++;
}


template <class T>
Nodo<T>* Lista<T>::remove() {
    if (first == NULL) {
        return NULL; // Lista vazia
    }
    Nodo<T>* nodefronfirst = first;
    first = first->getPrev();
    tamanho--;
    return nodefronfirst;
}


template <class T>
void Lista<T>::clear() {
    while (first != NULL) {
        Nodo<T>* nodeToDelete = first;
        first = first->getPrev();
        delete nodeToDelete;
    }
    tamanho = 0; // Reseta os contadores
}

#endif // LISTA_H //