
#include <fstream>

#include "Computer.h"
#include "json.hpp"

#define SPACING 4

using json = nlohmann::json;

Computer &Computer::CreateComputer() {
    auto *computer = new Computer();
    return *computer;
}

// Create default computer
Computer::Computer() {
    this->monitor = "";
    this->HDD = "";
    this->RAM = "";
    this->videoCard = "";
    this->mother = "";
    this->CPU = "";
    this->box = "";
    this->drive = "";
}

const string &Computer::getCPU() const {
    return CPU;
}

void Computer::setCPU(const string &CPU) {
    Computer::CPU = CPU;
}

const string &Computer::getMotherBoard() const {
    return mother;
}

void Computer::setMotherBoard(const string &motherBoard) {
    Computer::mother = motherBoard;
}

const string &Computer::getVideoCard() const {
    return videoCard;
}

void Computer::setVideoCard(const string &videoCard) {
    Computer::videoCard = videoCard;
}

const string &Computer::getRAM() const {
    return RAM;
}

void Computer::setRAM(const string &RAM) {
    Computer::RAM = RAM;
}

const string &Computer::getHDD() const {
    return HDD;
}

void Computer::setHDD(const string &HDD) {
    Computer::HDD = HDD;
}

const string &Computer::getBox() const {
    return box;
}

void Computer::setBox(const string &box) {
    Computer::box = box;
}

const string &Computer::getDrive() const {
    return drive;
}

void Computer::setDrive(const string &drive) {
    Computer::drive = drive;
}

const string &Computer::getMother() const {
    return mother;
}

void Computer::setMother(const string &mother) {
    Computer::mother = mother;
}

const string &Computer::getMonitor() const {
    return monitor;
}

void Computer::setMonitor(const string &monitor) {
    Computer::monitor = monitor;
}


void Computer::writeToFile(string filename) {
    json j;
    j["box"] = this->box;
    j["HDD"] = this->HDD;
    j["RAM"] = this->RAM;
    j["videoCard"] = this->videoCard;
    j["mother"] = this->mother;
    j["CPU"] = this->CPU;
    j["drive"] = this->drive;
    j["monitor"] = this->monitor;
    cout << j.dump(SPACING) << endl;
    ofstream file;
    file.open("../computers/" + filename);
    file << j.dump(SPACING);
    file.close();
}

void Computer::fromFile(string jsonText) {
    json j = json::parse(jsonText);
    this->box = string(j["box"]);
    this->CPU = string(j["CPU"]);
    this->HDD = string(j["HDD"]);
    this->RAM = string(j["RAM"]);
    this->videoCard = string(j["videoCard"]);
    this->mother = string(j["mother"]);
    this->drive = string(j["drive"]);
    this->monitor = string(j["monitor"]);
}

ostream &operator<<(ostream &os, const Computer &computer) {
    os << "CPU: " << computer.CPU << "\nМатеринская плата: " << computer.mother << "\nВидеокарта: " << computer.videoCard
       << "\nПамять: " << computer.RAM << "\nПриводы: " << computer.HDD << "\nКорпус: " << computer.box << "\nМонитор: "
       << computer.monitor << "\nПривод: " << computer.drive << "\n";
    return os;
}