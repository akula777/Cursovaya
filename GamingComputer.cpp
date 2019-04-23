#include "GamingComputer.h"
#include "ComputerBuilder.h"

Computer &GamingComputer::CreateComputer() {
    auto *cb = new ComputerBuilder();
    cb->buildBox("Gaming Box");
    cb->buildCPU("Intel Core I&");
    cb->buildDrive("CD/DVD");
    cb->buildMontherBoard("ASROCK");
    cb->buildHDD("Samsung 1Tb SSD");
    cb->buildRAM("Samsung 32GB");
    cb->buildVideoCard("NVIDIA GTX 1080");
    cb->buildMonitor("GAMING 60fps monitor");
    return cb->build();
}
