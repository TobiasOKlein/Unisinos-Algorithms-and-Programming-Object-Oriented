/*
 * @author: Tobias Klein
 *
 * 1. Crie uma classe chamada Retângulo. Um retângulo possui uma base e uma altura.
 * Crie as funções necessárias para que o usuário possa obter informações sobre
 * a base, a altura e a área do retângulo.
 */

#include <iostream>

class Rectangle{

    Rectangle ();
    ~Rectangle();

    private:
        float base;
        float high;
        float area;

    public:
        float getBase(void);
        float getHigh(void);
        float getArea(void);
        float setRectangle(float base, float high);
};

Rectangle::Rectangle(){
    base = high = area = 0;
}

Rectangle::~Rectangle(){}

float Rectangle::getBase(void){
    return base;
}

float Rectangle::getHigh(void){
    return high;
}

int main(){


    return 0;
}