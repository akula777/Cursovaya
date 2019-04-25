#include <iostream>
#include <fstream>

#include "OfficeComputer.h"
#include "GamingComputer.h"
#include "SchoolComputer.h"

void readNameOfFile(string *filename) {
    cout << "Введите имя файла" << endl;
    cin >> *filename;
}

void printLine(string line) {
    cout << line << endl;
}

void readComputerFromfile(string &filename, string *text) {
    ifstream file;
    file.open("../computers/" + filename);
    *text = "";
    string line;
    if (file.fail()) {
        cerr << "Файл не удолась прочитать" << endl;
        return;
    }

    while (getline(file, line))
    {
        *text += line;
    }
    file.close();
}

void menu() {
    printLine("0) Выход");
    printLine("1) Добавить оффисный компьютер");
    printLine("2) Добавить игровой компьютер");
    printLine("3) Добавить школьный копьютер");
    printLine("4) Прочитать файл");
}

int main() {

    auto *officeComputer = new OfficeComputer();
    auto *gamingComputer = new GamingComputer();
    auto *schoolComputer = new SchoolComputer();

    bool running = true;
    int menuItem;
    string filename;
    while (running) {
        cout << "Выберите пункт меню:" << endl;
        menu();
        cin >> menuItem;
        switch (menuItem) {
            case 0:
                running = false;
                break;
            case 1:
                readNameOfFile(&filename);
                officeComputer->CreateComputer().writeToFile(filename);
                break;
            case 2:
                readNameOfFile(&filename);
                gamingComputer->CreateComputer().writeToFile(filename);
                break;
            case 3:
                readNameOfFile(&filename);
                schoolComputer->CreateComputer().writeToFile(filename);
                break;
            case 4:
                readNameOfFile(&filename);
                string json;
                readComputerFromfile(filename, &json);
                auto *computer = new Computer();
                computer->fromFile(json);
                cout << "Компьютер :" << endl;
                cout << *computer;
                break;

        }
    }

    return 0;
}
