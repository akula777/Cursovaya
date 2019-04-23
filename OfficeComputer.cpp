
#include "OfficeComputer.h"
#include "ComputerBuilder.h"

Computer &OfficeComputer::CreateComputer() {
    auto *cb = new ComputerBuilder();
    cb->buildBox("Office simple box");
    cb->buildCPU("Intel Core I3");
    cb->buildDrive("CD/DVD");
    cb->buildMontherBoard("Gigabyte");
    cb->buildHDD("Seageate 512MB");
    cb->buildRAM("Samsung 2GB");
    cb->buildMonitor("ASUS");
    cb->buildVideoCard("None");
    return cb->build();
}
