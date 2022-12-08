#ifndef ESTACKEMPTY_H
#define ESTACKEMPTY_H


#include "EStackException.h"

class EStackEmpty : public EStackException {
public:
    EStackEmpty() : EStackException("Stack is Empty") {}
};

#endif //ESTACKEMPTY_H
