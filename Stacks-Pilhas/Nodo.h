/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo{
    public:
        Nodo();
        ~Nodo();

        void setNext(*Nodo);
        void setPrev(*Nodo);
        void setValue(T);

        Nodo* getNext();
        Nodo* getPrev();
        T getValue();

    private:
        Nodo *next;
        Nodo *prev;
        T    value;
        unsigned int pos;
};

#endif // NODO_H