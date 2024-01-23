#ifndef STATE_H
#define STATE_H

class Context;

class State {
protected:
    Context *context_;

public:
    virtual ~State() {}

    void set_context(Context *context);
    virtual void on_cmdRun_clicked() = 0;
    virtual void on_cmdPause_clicked() = 0;
};

#endif // STATE_H
