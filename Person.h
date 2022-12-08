#ifndef PERSON_H
#define PERSON_H


#include <string>

class Person {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _patronymic;

public:
    Person();

    Person(const std::string &firstName, const std::string &lastName, const std::string &patronymic);

    Person(const Person &);

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    const std::string &getPatronymic() const;

    void setPatronymic(const std::string &patronymic);
};

#endif //PERSON_H
