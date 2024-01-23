#ifndef STATERUNNING_H
#define STATERUNNING_H

#include "State.h"

class StateRunning : public State {
public:
    void on_cmdRun_clicked() override;
    void on_cmdPause_clicked() override;
};

#endif // STATERUNNING_H
