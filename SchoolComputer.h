
#ifndef CURSOVAYA_STUDENTCOMPUTER_H
#define CURSOVAYA_STUDENTCOMPUTER_H

#include "Computer.h"

class SchoolComputer : public Computer{
public:
    Computer &CreateComputer() override;
};


#endif //CURSOVAYA_STUDENTCOMPUTER_H
