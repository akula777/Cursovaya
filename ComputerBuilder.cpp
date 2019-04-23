
#include "ComputerBuilder.h"
#include "Computer.h"

void ComputerBuilder::buildDrive(string drive) {
    this->drive = drive;
}

void ComputerBuilder::buildCPU(string CPU) {
    this->CPU = CPU;
}

void ComputerBuilder::buildMontherBoard(string motherBoard) {
    this->motherBoard = motherBoard;
}

void ComputerBuilder::buildVideoCard(string videoCard) {
    this->videoCard = videoCard;
}

void ComputerBuilder::buildRAM(string RAM) {
    this->RAM = RAM;
}

void ComputerBuilder::buildHDD(string HDD) {
    this->HDD = HDD;
}

void ComputerBuilder::buildBox(string box) {
    this->box = box;
}

void ComputerBuilder::buildMonitor(string monitor) {
    this->monitor = monitor;
}

Computer &ComputerBuilder::build() {
    Computer *computer = new Computer();
    computer->setMotherBoard(this->motherBoard);
    computer->setBox(this->box);
    computer->setMonitor(this->monitor);
    computer->setCPU(this->CPU);
    computer->setDrive(this->drive);
    computer->setHDD(this->HDD);
    computer->setRAM(this->RAM);
    computer->setVideoCard(this->videoCard);
    return *computer;
}
