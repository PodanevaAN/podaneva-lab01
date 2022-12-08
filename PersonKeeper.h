#ifndef PERSONKEEPER_H
#define PERSONKEEPER_H


#include "Person.h"
#include "Stack.h"

class PersonKeeper {
private:
    PersonKeeper() {}// конструкторы по умолчанию
    PersonKeeper(const PersonKeeper &);//конструктор копирования

public:
    static PersonKeeper &getInstance(); //возвращает экземпляр класса

    Stack<Person> readPersons(std::fstream &); //возвращает стек заполненный из файла

    void writePersons(Stack<Person>, std::fstream &); //из стека записывает в файл
};

#endif //PERSONKEEPER_H
