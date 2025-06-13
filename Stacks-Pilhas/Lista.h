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

        void pushBack(T value);
        void pushFront(T value);
        
        Nodo<T>* popBack();
        Nodo<T>* popFront();

        Nodo<T>* popValue(T value);

        Nodo<T>* getBack();
        Nodo<T>* getFront();

        signed char getSize();
        void clear();

    private:
        Nodo<T> *front;
        Nodo<T> *back;
        signed char tamanho;
};


template <class T>
Lista<T>::Lista(){
    front = NULL;
    tamanho = 0;
}

template <class T>
Lista<T>::~Lista(){}


template <class T>
signed char Lista<T>::getSize() {
    return tamanho;
}


template <class T>
Nodo<T>* Lista<T>::getFront() {
    return front;
}


template <class T>
Nodo<T>* Lista<T>::getBack() {
    Nodo<T>* current = front;
    while (current != NULL && current->getPrev() != NULL) {
        current = current->getPrev();
    }
    return current;
}


template <class T>
void Lista<T>::pushBack(T value) {
    Nodo<T>* novoNodo = new Nodo<T>();
    novoNodo->setValue(value);
    novoNodo->setPrev(back);
    if (front != NULL) {
        back->setNext(novoNodo);
    }
    novoNodo->setNext(NULL);
    back = novoNodo;
    tamanho++;
}

template <class T>
void Lista<T>::pushFront(T value) {
    Nodo<T>* novoNodo = new Nodo<T>();
    novoNodo->setValue(value);
    novoNodo->setNext(front);
    if (back != NULL) {
        front->setPrev(novoNodo);
    }
    novoNodo->setPrev(NULL);
    front = novoNodo;
    tamanho++;
}


template <class T>
Nodo<T>* Lista<T>::popFront() {
    if (front == NULL) {
        return NULL; // Lista vazia
    }
    Nodo<T>* nodoFrente = front;
    front = front->getPrev();
    tamanho--;
    return nodoFrente;
}


template <class T>
Nodo<T>* Lista<T>::popBack() {
    if (back == NULL) {
        return NULL; // Lista vazia
    }
    Nodo<T>* nodoAtras = back;
    back = back->getNext();
    tamanho--;
    return nodoAtras;
}


template <class T>
Nodo<T>* Lista<T>::popValue(T value) {
    Nodo<T>* nodoDeBusca = front;
    while (nodoDeBusca->getValue != NULL) {
        if (nodoDeBusca->getValue() == value) {
            nodoDeBusca->getFront();
            return nodoDeBusca->popPrev();
        }
        else if (nodoDeBusca->getValue() == value) {
            nodoDeBusca->getBack();
            return nodoDeBusca->popNext();
        }
        nodoDeBusca = nodoDeBusca->getPrev();
    }
}


template <class T>
void Lista<T>::clear() {
    while (front != NULL) {
        Nodo<T>* nodeToDelete = front;
        front = front->getPrev();
        delete nodeToDelete;
    }
    tamanho = 0; // Reseta os contadores
}

#endif // LISTA_H //