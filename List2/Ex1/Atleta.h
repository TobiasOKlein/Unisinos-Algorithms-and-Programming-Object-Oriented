/*
 * @author: Tobias Klein
 *
 * 
 */

#ifndef __ATLETA_H__
#define __ATLETA_H__

class Atleta{
    public:

        Atleta ();
        ~Atleta();

        Atleta(char *);
        Atleta(char *, int);
        
        char* getNome ( void );
        int   getIdade( void );
        void  setNome (char *);
        void  setIdade( int  );
        void  imprime_info( void );

    protected:
        char *nome;
        int  idade;
};

#endif // __ATLETA_H__