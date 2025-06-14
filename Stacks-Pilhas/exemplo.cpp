/**
 * @author: Tobias Klein Steyer 
 * 
 */

#include <iostream>
#include "Nodo.h"
#include "Pilha.h"
#include "Fila.h"
#include "Lista.h"

template <class T> // tem que usar antes de todo método de classe que for usado
T testando(T A, T B){
    return A + B;
}

int main(){

    std::cout << testando('A', '\1');

    Pilha<int> pilha;
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
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


    Fila<int> fila;
    fila.enter(10);
    fila.enter(20);
    fila.enter(30);
    std::cout << "Tamanho da fila: " << (int)fila.getSize() << std::endl;
    Nodo<int>* frenteFila = fila.getFront();
    while (frenteFila != NULL) {
        std::cout << "Valor do frente da fila: " << frenteFila->getValue() << std::endl;
        fila.exit();
        std::cout << "Tamanho da fila após pop: " << (int)fila.getSize() << std::endl;
        frenteFila = fila.getFront();
    }
    fila.clear();
    std::cout << "Fila limpa. Tamanho: " << (int)fila.getSize() << std::endl;


    Lista<int> lista;
    lista.pushBack(200);
    lista.pushFront(100);
    lista.pushBack(300);
    std::cout << "Tamanho da lista: " << (int)lista.getSize() << std::endl;
    Nodo<int>* frente = lista.getFront();
    while (frente != NULL) {
        std::cout << "Valor da frente: " << frente->getValue() << std::endl;
        lista.popFront();
        std::cout << "Tamanho da lista após pop: " << (int)lista.getSize() << std::endl;
        frente = lista.getFront();
    }
    lista.clear();
    std::cout << "Lista limpa. Tamanho: " << (int)lista.getSize() << std::endl;

    std::cout << "Fim do programa." << std::endl;

    return 0;
}