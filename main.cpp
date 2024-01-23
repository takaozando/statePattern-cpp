#include <iostream>
#include "StateIdle.h"
#include "StateRunning.h"
#include "Context.h"

using namespace std;

int main() {
    Context *context = new Context(new StateRunning);
    context->Request1();
    context->Request2();

    delete context;
    
    int segura = 0;
    scanf("%d", &segura);
    return 0;
}
