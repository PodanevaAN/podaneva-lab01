#include <fstream>
#include "PersonKeeper.h"

static PersonKeeper *instance = nullptr;

PersonKeeper &PersonKeeper::getInstance() {
    if (instance == nullptr) {
        instance = new PersonKeeper;
    }
    return *instance;
}

Stack<Person> PersonKeeper::readPersons(std::fstream &stream) {
    Stack<Person> stack;
    std::string firstName;
    std::string lastName;
    std::string patronymic;

    while (!stream.eof()) {
        stream >> firstName >> lastName >> patronymic;
        stack.push(Person(firstName, lastName, patronymic));
    }
    return stack;
}

void PersonKeeper::writePersons(Stack<Person> stack, std::fstream &stream) {
    while (stack.getSize() != 0) {
        Person person = stack.pop();
        stream << person.getFirstName() << " " << person.getLastName() << " " << person.getPatronymic() << "\n";
    }
}
