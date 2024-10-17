//
// Created by jekab on 10/17/2024.
//

#ifndef RAP_H
#define RAP_H
#include "Song.h"


class Rap : public Song {
    std::string replace_all(std::string str, std::string to_find, std::string to_replace);
    public:
        using Song::Song; // inherits all constructors from Song class

        Rap& break_it( int maxLines=-1, std::string drop="yea" );


};



#endif //RAP_H
