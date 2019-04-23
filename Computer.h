
#ifndef CURSOVAYA_COMPUTER_H
#define CURSOVAYA_COMPUTER_H

#include <iostream>
#include <string>

using namespace std;

class Computer {
    string CPU;
    string mother;
    string videoCard;
    string RAM;
    string HDD;
    string box;
    string monitor;
public:
    const string &getMother() const;

    void setMother(const string &mother);

private:
    string drive;
public:
    void writeToFile(string filename);

    const string &getCPU() const;

    void setCPU(const string &CPU);

    const string &getMotherBoard() const;

    void setMotherBoard(const string &motherBoard);

    const string &getVideoCard() const;

    void setVideoCard(const string &videoCard);

    const string &getRAM() const;

    void setRAM(const string &RAM);

    const string &getHDD() const;

    void setHDD(const string &HDD);

    const string &getBox() const;

    void setBox(const string &box);

    const string &getDrive() const;

    void setDrive(const string &drive);

    virtual Computer &CreateComputer();
    Computer();

    void fromFile(string jsonText);

    friend ostream &operator<<(ostream &os, const Computer &computer);

    const string &getMonitor() const;

    void setMonitor(const string &monitor);
};


#endif //CURSOVAYA_COMPUTER_H
