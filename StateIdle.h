#ifndef STATEIDLE_H
#define STATEIDLE_H

#include "State.h"

class StateIdle : public State {
public:
    void on_cmdRun_clicked() override;
    void on_cmdPause_clicked() override;
};

#endif // STATEIDLE_H
