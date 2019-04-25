
#include "SchoolComputer.h"
#include "ComputerBuilder.h"

Computer &SchoolComputer::CreateComputer() {
    auto *cb = new ComputerBuilder();
    cb->buildBox("School box");
    cb->buildCPU("Intel Pentium 2");
    cb->buildDrive("DVD");
    cb->buildMontherBoard("ACER");
    cb->buildHDD("WD 1Tb");
    cb->buildRAM("Patriot 1Gb");
    cb->buildMonitor("LOC");
    return cb->build();
}
