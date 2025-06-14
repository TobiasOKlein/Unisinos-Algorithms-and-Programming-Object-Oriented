/**
 * @author: Tobias Klein Steyer 
 * 
 */

// INCLUDES //

#include <iostream>
#include "Nodo.h"
#include "Pilha.h"
#include "Fila.h"

#include "Aluno.h"
#include "Nota.h"

using namespace std;

// FUNCTIONS //

void menu(){
    std::cout << " 1 - Cadastrar aluno"                      << std::endl <<
                 " 2 - Cadastrar nota"                       << std::endl <<
                 " 3 - Calcular media de um aluno"           << std::endl <<
                 " 4 - Listar os nomes dos alunos sem notas" << std::endl <<
                 " 5 - Excluir aluno"                        << std::endl <<
                 " 6 - Excluir nota"                         << std::endl <<
                 " 7 – Sair"                                 << std::endl <<
                 " ~ Opcao escolhida: "                                    ;
}


// MAIN //

int main(){

    // Inicializacao de Estruturas de Dados

    Pilha<Aluno> alunos;
    Fila<Nota>   notas;

    // Inicializacao de Objetos

    Aluno cadastroAlunoBuffer;
    Nota  cadastroNotaBuffer;
    Nodo<Aluno> *nodoAlunoBuffer;
    Nodo<Nota>  *nodoNotaBuffer;

    // Inicializacao de Buffer
   
    std::string nomeBuffer;
    int numAlunoBuffer;
    int notaBuffer;

    // Inicializacao de Variaveis Gerais

    int   Selecao     = 0;
    float mediaAluno  = 0;

    // LOOP

    while(Selecao != 7){
        menu();
        std::cin >> Selecao;
        std::cout << endl;
        switch(Selecao){
            case 1: // 1 - Cadastrar aluno
                
                std::cout << " Nome do Aluno a ser cadastrado: ";
                std::cin >> nomeBuffer;
                numAlunoBuffer = alunos.getSize() + 1;
                cadastroAlunoBuffer.setNome(nomeBuffer);
                cadastroAlunoBuffer.setNumAluno(numAlunoBuffer);
                alunos.push(cadastroAlunoBuffer);
                std::cout << std::endl << " Aluno Cadastrado." << std::endl;
                break;

            case 2: // 2 - Cadastrar nota

                std::cout << " Nota a ser cadastrada: ";
                std::cin  >> notaBuffer;
                std::cout << " Numero do aluno: ";
                std::cin  >> numAlunoBuffer;
                cadastroNotaBuffer.setNota(notaBuffer);
                cadastroNotaBuffer.setNumAluno(numAlunoBuffer);
                nodoAlunoBuffer = alunos.search(numAlunoBuffer);
                if (nodoAlunoBuffer != NULL) {
                    notas.enter(cadastroNotaBuffer);
                    std::cout << std::endl << " Nota Cadastrada." << std::endl;
                } else
                    std::cout << std::endl << " Aluno Não Cadastrado." << std::endl;

                break;

            case 3: // 3 - Calcular média de um aluno
                std::cout << " Numero do aluno de media a ser calculada: ";
                std::cin >> numAlunoBuffer;
                nodoAlunoBuffer = alunos.search(numAlunoBuffer);
                if(nodoAlunoBuffer != NULL) {
                    int contadorNotas = 0;
                    nodoNotaBuffer = notas.getFront();
                    while (nodoNotaBuffer != NULL) {
                        if (nodoNotaBuffer->getValue().getNumAluno() == numAlunoBuffer) {
                            mediaAluno += nodoNotaBuffer->getValue().getNota();
                            contadorNotas++;
                        }
                        nodoNotaBuffer = nodoNotaBuffer->getPrev();
                    }
                    if (contadorNotas == 0)
                        cout << " Aluno sem notas." << endl;
                    else {
                        mediaAluno /= contadorNotas;
                        cout << " Media do aluno = " << mediaAluno << endl;
                    }
                } else cout << " Aluno nao cadastrado." << endl;
                mediaAluno = 0;
                break;

            case 4: // 4 - Listar os nomes dos alunos sem notas
                cout << " Alunos sem notas:" << endl;
                nodoAlunoBuffer = alunos.getTop();
                while (nodoAlunoBuffer != NULL) {
                    numAlunoBuffer = nodoAlunoBuffer->getValue().getNumAluno();
                    nodoNotaBuffer = notas.search(numAlunoBuffer);
                    if (nodoNotaBuffer == NULL) {
                        cout << nodoAlunoBuffer->getValue().getNome() << endl;
                    }
                    nodoAlunoBuffer = nodoAlunoBuffer->getPrev();
                }

                break;

            case 5: // 5 - Excluir aluno
                if (alunos.getSize() == 0)
                     std::cout << " Pilha Vazia."    << endl;
                else {
                    numAlunoBuffer = alunos.getTop()->getValue().getNumAluno();
                    nodoNotaBuffer = notas.search(numAlunoBuffer);
                    if (nodoNotaBuffer != NULL)
                         std::cout << " Este aluno possui notas, logo nao podera ser excluido." << endl;
                    else {
                        alunos.pop();
                        std::cout << " Aluno Excluido." << endl;
                    }
                }
                break;

            case 6: // 6 - Excluir nota
                if (notas.exit() == NULL)
                     std::cout << " Fila Vazia."    << endl;
                else std::cout << " Nota Excluida." << endl;

                break;

            case 7: // 7 – Sair
                std::cout << " Saindo do Programa..." << std::endl;
                return 0;
                break;

            default:
                std::cout << " Opção inválida. Tente novamente" << std::endl;
                break;
        }
    }

    return 0;
}