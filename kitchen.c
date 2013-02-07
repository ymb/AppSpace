#include "commonSense.h"
#include "brain.h"
#inlcude "communitySpirit.h"
#include "tidying.h"

int main(int argc, char **argv)
{
    int karma = 0;

    karma += wipeSurfaces();

    if ( coffeeMachine == PROBLEM ) {
        solveErrorMessage();
    }

    if ( coffeeMachineMilk != InFridge ){
        karma += returnMilkToFridge();
    }

    return 0;
}
