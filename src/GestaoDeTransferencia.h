//
// Created by anete on 22/10/2022.
//

#ifndef SRC_GESTAODETRANSFERENCIA_H
#define SRC_GESTAODETRANSFERENCIA_H


class GestaoDeTransferencia {
private:
    string oldClass;
    string newClass;
    //changeRequest

public:

    GestaoDeTransferencia();
    GestaoDeTransferencia(string oldClass, string newClass /*, changeRequest*/);
    /**
		  * Instancia um contrutor de Gestão de Transferência com atributos definidos pelos parâmetros da função.rmas
		  * @param changeRequest: Queue de pedidos dos estudantes troca de turma.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  */
    /* Argumentos comentados pois não são atributos da classe gestão de transferencia, mas sim de
     * das classes aula e estudante (encontrar um meio de fazer a chamada destes atributos futuramente)
     */

    void changeStudentClass(/*studentCode, ucCode,*/string oldClass, string newClass);
    /**
		  * Muda o estudante de uma caadeira para outra através da mudança de turmas
		  * @param studentCode: Nº do estudante.
		  * @param ucCode: Código de uma aula.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  * @return ...
		  */

    bool verifyClassesBalance(string oldClass,string newClass /*, ucCode*/);
    /**
		  * Verifica se a diferença de turmas é maior ou igual a 4
		  * @param ucCode: Código de uma aula.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  * @return Retorna True se o equilíbrio for cumprido (diferença menor que 4) e False caso não.
		  */

    bool verifyScheduleOverlap(string oldClass,string newClass /*, ucCode*/);
    /**
		  * Verifica se os horários do novo horário de aulas é compativel com seu cronograma atual
		  * @param ucCode: Código de uma aula.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  * @return Retorna True se não houverem sobreposições de horário e False caso o contrário.
		  */

    void addStudentToClass(/*studentCode, ucCode, */string oldClass, string newClass);
    /**
		  * Adiciona um estudante a uma turma
		  * @param studentCode: Nº do estudante.
		  * @param ucCode: Código de uma aula.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  * @return ...
		  */

    void removeStudentFromClass(/*studentCode, ucCode, */string oldClass);
    /**
		  * Remove um estudante de uma turma
		  * @param studentCode: Nº do estudante.
		  * @param ucCode: Código de uma aula.
          * @param oldClass: Código da turma atual do estudante.
          * @param newClass: Código da turma desejada do estudante.
		  * @return ...
		  */
};


#endif //SRC_GESTAODETRANSFERENCIA_H
