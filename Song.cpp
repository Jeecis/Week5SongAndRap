//
// Created by jekab on 10/16/2024.
//

#include "Song.h"
// Asked chatGPT how to do OOP in cpp and wrote by myself (reffering to the chatGPT provided example) the following functions
Song::Song(std::string name, std::string author, std::vector<std::string> lyrics, int year) {
    this->name = name;
    this->author = author;
    this->lyrics = lyrics;
    this->year = year;
    std::cout << "New song made: "<< this->name << " " << this->author << std::endl;
}

//Since cpp can only uppercase characters I wrote a specific function for it with the help of ChatGPT.
Song& Song::sing(int maxLines) {
    std::cout << this->name << " by "<< this->author << " " << this->year << std::endl;

    int linesToPrint = (maxLines <0 || maxLines>this->lyrics.size()) ? this->lyrics.size() : maxLines; // uses ternary operator to calculate lines to print

    for (int i = 0; i < linesToPrint; i++) {
        std::cout << this->lyrics[i] << std::endl;
    }
    return *this;
}

Song& Song::yell(int maxLines) {
    std::cout << this->name << " by "<< this->author << " " << this->year << std::endl;
    int linesToPrint = (maxLines <0 || maxLines>this->lyrics.size()) ? this->lyrics.size() : maxLines; // uses ternary operator to calculate lines to print

    for (int i =0; i < linesToPrint; i++) {
        std::string shout = upperCaseString(this->lyrics[i]);
        std::cout << shout << std::endl;
    }
    return *this;
}

//Since cpp can only uppercase characters I wrote a specific function for it with the help of ChatGPT.
std::string Song::upperCaseString(std::string str) {
    for (char &c : str) {
        c = std::toupper(c);
    }
    return str;
}