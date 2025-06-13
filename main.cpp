/**
 * @author: Tobias Klein Steyer 
 * 
 */

#include <iostream>
#include "Nodo.h"
#include "Pilha.h"
#include "Fila.h"

template <class T> // tem que usar antes de todo método de classe que for usado
T testando(T A, T B){
    return A + B;
}

int main(){

    Pilha<int> pilha;
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    std::cout << "Tamanho da pilha: " << (int)pilha.getSize() << std::endl;
    Nodo<int>* topo = pilha.getTop();
    while (topo != NULL) {
        std::cout << "Valor do topo: " << topo->getValue() << std::endl;
        pilha.pop();
        std::cout << "Tamanho da pilha após pop: " << (int)pilha.getSize() << std::endl;
        topo = pilha.getTop();
    }
    pilha.clear();
    std::cout << "Pilha limpa. Tamanho: " << (int)pilha.getSize() << std::endl;

    //std::cout << testando('A', '\1');

    return 0;
}