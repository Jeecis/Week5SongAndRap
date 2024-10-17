// Čudars Jēkabs 231RDB342

#include <fstream>
#include <iostream>

#include "Rap.h"
#include "Song.h"

// ASked chatGPT how to read files in cpp by line
std::vector<std::string> readFileIntoVector(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }

    return lines;
}

int main(){

    // Used the absolute path since relative path for some reason didn't work
    std::string filename = "C:\\path\\to\\txt\\file\\song.txt";
    std::string author ="KSI";
    std::string title ="Thick of it";
    int year=2014;
    std::vector<std::string> lyrics = readFileIntoVector(filename);

    Song song = Song(title, author, lyrics, year);
    song.sing(10).yell(20);

    Rap rap = Rap(title, author, lyrics, year);
    rap.break_it(10, "Skrrrt");
    return 0;
}