#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {
private:
    State *state_;

public:
    Context(State *state);
    ~Context();

    void TransitionTo(State *state);
    void Request1();
    void Request2();
};

#endif // CONTEXT_H
