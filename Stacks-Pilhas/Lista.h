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
        void ordenar();
        void clear();

    private:
        Nodo<T> *front; // Seria a posição 0
        Nodo<T> *back; // Seria a posição maxima
        signed char tamanho;
        signed char prioridade;
};


template <class T>
Lista<T>::Lista(){
    front = NULL;
    back  = NULL;
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
    if (back == NULL) {
        novoNodo->setPrev(NULL);
        novoNodo->setNext(NULL);
        front = novoNodo;
        back  = novoNodo;
    } else {
        novoNodo->setPrev(back);
        novoNodo->setNext(NULL);
        back->setNext(novoNodo);
        back = novoNodo;
    }
    tamanho++;
}

template <class T>
void Lista<T>::pushFront(T value) {
    Nodo<T>* novoNodo = new Nodo<T>();
    novoNodo->setValue(value);
    if (front == NULL) {
        novoNodo->setPrev(NULL);
        novoNodo->setNext(NULL);
        front = novoNodo;
        back  = novoNodo;
    } else {
        novoNodo->setPrev(NULL);
        novoNodo->setNext(front);
        front->setPrev(novoNodo);
        front = novoNodo;
    }
    tamanho++;
}


template <class T>
Nodo<T>* Lista<T>::popFront() {
    if (front == NULL) {
        return NULL;
    }
    Nodo<T>* nodoFrente = front;
    front = front->getNext();

    if (front != NULL)
        front->setPrev(NULL);
    else
        back = NULL;

    tamanho--;
    return nodoFrente;
}


template <class T>
Nodo<T>* Lista<T>::popBack() {
    if (back == NULL) {
        return NULL;
    }
    Nodo<T>* nodoAtras = back;
    back = back->getPrev();

    if (back != NULL)
        back->setNext(NULL);
    else 
        front = NULL;

    tamanho--;
    return nodoAtras;
}


template <class T>
Nodo<T>* Lista<T>::popValue(T value) {
    Nodo<T>* nodoDeBusca = front;
    while (nodoDeBusca != NULL) {
        if (nodoDeBusca->getValue() == value) {

            if (nodoDeBusca->getPrev() != NULL)
                nodoDeBusca->getPrev()->setNext(nodoDeBusca->getNext());
            else
                front = nodoDeBusca->getNext();

            if (nodoDeBusca->getNext() != NULL)
                nodoDeBusca->getNext()->setPrev(nodoDeBusca->getPrev());
            else
                back = nodoDeBusca->getPrev();

            tamanho--;
            return nodoDeBusca;
        }
        nodoDeBusca = nodoDeBusca->getNext();
    }
    return NULL;
}


template <class T>
void Lista<T>::ordenar() {
    Lista<T> buffer;
    Nodo<T>* nodoDeletado = front;
    while (nodoDeletado != NULL) {
        
    }
}


template <class T>
void Lista<T>::clear() {
    Nodo<T>* nodoDeletado = front;
    while (nodoDeletado != NULL) {
        nodoDeletado = nodoDeletado->getNext();
        delete nodoDeletado->getPrev();
        front = nodoDeletado;
    }
    front = NULL;
    back = NULL;
    tamanho = 0;
}

#endif // LISTA_H //