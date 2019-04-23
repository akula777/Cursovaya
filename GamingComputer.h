#ifndef CURSOVAYA_GAMINGCOMPUTER_H
#define CURSOVAYA_GAMINGCOMPUTER_H

#include "Computer.h"

class GamingComputer : public Computer {
public:
    Computer &CreateComputer() override;
};


#endif //CURSOVAYA_GAMINGCOMPUTER_H
