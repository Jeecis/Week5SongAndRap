//
// Created by jekab on 10/17/2024.
//

#include "Rap.h"

// Referred to sing previous method to write this
Rap& Rap::break_it( int maxLines, std::string drop ) {

    std::cout << this->getName() << " by "<< this->getAuthor() << " " << this->getYear() << std::endl;
    int linesToPrint = (maxLines <0 || maxLines>this->getLyrics().size()) ? this->getLyrics().size() : maxLines;

    for (int i = 0; i < linesToPrint; i++) {
        std::string line = this->replace_all(this->getLyrics()[i], " ", " "+drop+" ");
        std::cout << line << std::endl;
    }
    return *this;
};


//Asked chatGPT how to implement replace all method and made the code more readable
std::string Rap::replace_all(std::string str, const std::string to_find, const std::string to_replace) {
    size_t start_pos = 0;
    start_pos = str.find(to_find, start_pos);

    while(start_pos != std::string::npos) { // npos referrs to no position found  meaning no new matches for str.find
        str.replace(start_pos, to_find.length(), to_replace);
        start_pos += to_replace.length();

        start_pos = str.find(to_find, start_pos);
    }
    return str;
}