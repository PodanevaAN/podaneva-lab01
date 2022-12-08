#include "Person.h"

Person::Person() {
    _firstName = nullptr;
    _lastName = nullptr;
    _patronymic = nullptr;
}

Person::Person(const Person &that) {
    _firstName = that._firstName;
    _lastName = that._lastName;
    _patronymic = that._patronymic;
}

Person::Person(const std::string &firstName, const std::string &lastName, const std::string &patronymic) {
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_patronymic = patronymic;
}

const std::string &Person::getFirstName() const {
    return _firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::_firstName = firstName;
}

const std::string &Person::getLastName() const {
    return _lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::_lastName = lastName;
}

const std::string &Person::getPatronymic() const {
    return _patronymic;
}

void Person::setPatronymic(const std::string &patronymic) {
    Person::_patronymic = patronymic;
}
