/**
 * @author: Tobias Klein Steyer
 * 
 */

#ifndef PILHA_H
#define PILHA_H

class Pilha{
    public:

    private:
        Pilha *next;
        Pilha *prev;
        char  *name;
        unsigned int pos;
};

#endif // PILHA_H