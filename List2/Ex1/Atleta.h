/*
 * @author: Tobias Klein
 *
 * 
 */

#ifndef __ATLETA_H__
#define __ATLETA_H__

class Atleta{
    public:
        char* getNome (void);
        char* getIdade(void);
        void  setNome (char nome);
        void  setIdade(int idade);
    protected:
        char *nome;
        int  idade;
}

#endif // __ATLETA_H__