#include "StateIdle.h"
#include <iostream>

void StateIdle::on_cmdRun_clicked() {
    std::cout << "StateIdle: on_cmdRun_clicked, running program " << typeid(*this).name();
}

void StateIdle::on_cmdPause_clicked() {
    std::cout << "StateIdle: on_cmdPause_clicked, but the machine is already idle!";
}
