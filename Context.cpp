#include "Context.h"
#include <iostream>

Context::Context(State *state) : state_(nullptr) {
    this->TransitionTo(state);
    std::cout << "\nContext: init Context, state: " << typeid(*state).name() << "\n";
}

Context::~Context() {
    std::cout << "\nContext: Deletando instancia de contexto";
    delete state_;
}

void Context::TransitionTo(State *state) {
    std::cout << "\nContext: Transition to " << typeid(*state).name() << "\n";
    if (state_ != nullptr)
        delete state_;
    state_ = state;
    state_->set_context(this);
}

void Context::Request1() {
    if (state_ != nullptr)
        state_->on_cmdRun_clicked();
}

void Context::Request2() {
    if (state_ != nullptr)
        state_->on_cmdPause_clicked();
}
