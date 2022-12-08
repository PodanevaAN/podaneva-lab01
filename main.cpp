#include <iostream>
#include <fstream>
#include "PersonKeeper.h"

int main() {
//====================================================
// Проверка 1: Складываем в стек цифры от 1 до 24 и достаем из стека с обработкой исключения что стек пуст.
    Stack<int> stack;
    for (int i = 1; i < 25; i++) {
        stack.push(i);
    }

    for (int i = 0; i < 25; i++) {
        try {
            std::cout << stack.pop() << std::endl;
        } catch (EStackException &e) {
            std::cout << e.what() << std::endl;
        }
    }
//====================================================
// Проверка 2: Складываем в стек 2 FIO и достаем из стека с обработкой исключения что стек пуст.
    Stack<Person> stackPersonTest;
    stackPersonTest.push(Person("Ivan", "Ivanov", "Ivanovich"));
    stackPersonTest.push(Person("Name", "Last_Name", "Patronymic"));

    for (int i = 0; i < 3; ++i) {
        try {
            Person person = stackPersonTest.pop();
            std::cout << person.getFirstName() << " " << person.getLastName() << " " << person.getPatronymic()
                      << std::endl;
        } catch (EStackException &e) {
            std::cout << e.what() << std::endl;
        }
    }
//====================================================
// Проверка 3:
    Stack<Person> stackPerson;
    std::fstream streamIn("/home/daniil/Projects/tmp/amir_trpo/lab01/file", std::ios::in); //открываем файл на чтение
    stackPerson = PersonKeeper::getInstance().readPersons(streamIn); //получаем стек из файла
    if (streamIn.is_open()) {
        streamIn.close(); //Закрываем файл
    }

    stackPerson.push(Person("Ivan", "Ivanov", "Ivanovich")); //заносим в стек еще 2 новых значения
    stackPerson.push(Person("Name", "Last_Name", "Patronymic"));

    std::fstream streamOut("/home/daniil/Projects/tmp/amir_trpo/lab01/file", std::ios::out); //открываем файл на запись
    PersonKeeper::getInstance().writePersons(stackPerson, streamOut); //записываем значения стека в файл
    if (streamOut.is_open()) {
        streamOut.close(); //закрываем файл
    }
    return 0;
}
