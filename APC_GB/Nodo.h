/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef NODO_H
#define NODO_H

// CLASS

template <class T>
class Nodo{
    public:
        Nodo();
        ~Nodo();

        void setNext(void*);
        void setPrev(void*);
        void setValue(T);

        Nodo* getNext();
        Nodo* getPrev();
        T getValue();

    private:
        void *next;
        void *prev;
        T    value;
};

// FUNCTIONS

template <class T>
Nodo<T>::Nodo(){
    prev = next = NULL;
}


template <class T>
Nodo<T>::~Nodo(){}


template <class T>
void Nodo<T>::setNext(void *nextNode){
    next = nextNode;
}


template <class T>
void Nodo<T>::setPrev(void *prevNode){
    prev = prevNode;
}


template <class T>
void Nodo<T>::setValue(T val){
    value = val;
}


template <class T>
Nodo<T>* Nodo<T>::getNext(){
    return static_cast<Nodo<T>*>(next);
}


template <class T>
Nodo<T>* Nodo<T>::getPrev(){
    return static_cast<Nodo<T>*>(prev);
}


template <class T>
T Nodo<T>::getValue(){
    return value;
}


#endif // NODO_H //