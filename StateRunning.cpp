#include "StateRunning.h"
#include <iostream>

void StateRunning::on_cmdRun_clicked() {
    std::cout << "\nstateRunning: on_cmdRun_clicked, but the current state is " << typeid(*this).name();
}

void StateRunning::on_cmdPause_clicked() {
    std::cout << "\nstateRunning: on_cmdPause_clicked, the machine will run a program";
}
