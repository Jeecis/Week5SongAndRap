//
// Created by jekab on 10/16/2024.
//

#ifndef SONG_H
#define SONG_H



//
// Created by jekab on 10/15/2024.
//

#include "Song.h"


#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


// class outline
class Song {
    std::string name;
    std::string author;
    std::vector<std::string> lyrics;
    int year;

public:
    Song(std::string name, std::string author, std::vector<std::string> lyrics, int year);

    Song& sing(int maxLines= -1);

    Song& yell(int maxLines=-1);

    // Decided to implement getters here since it seemed unnecessary to implement them in Rap.cpp
    std::string getName() const {
        return name;
    }

    std::string getAuthor() const {
        return author;
    }

    std::vector<std::string> getLyrics() const {
        return lyrics;
    }

    int getYear() const {
        return year;
    }


private:
    static std::string upperCaseString(std::string str);

};




#endif //SONG_H
