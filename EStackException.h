#ifndef ESTACKEXCEPTION_H
#define ESTACKEXCEPTION_H


#include <cstring>

class EStackException {
private:
    char *_message;

public:
    explicit EStackException(const char *message) {
        _message = new char[strlen(message) + 1];
        strcpy(_message, message);
    }

    EStackException(const EStackException &that) {
        _message = new char[strlen(that._message) + 1];
        strcpy(_message, that._message);
    }

    ~EStackException() {
        delete _message;
    }

    const char *what() {
        return _message;
    }
};

#endif //ESTACKEXCEPTION_H
