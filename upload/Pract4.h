#pragma once
#include <cstring>
using namespace std;

class Song
{
    private:

        char* name;
        char* singer;
        char* genre;
        double length;
        void copy(const Song& other);
        void destroy();

    public:

        Song(char* = NULL,char* = NULL,char* = NULL,double = 0);
        Song(const Song& other);
        Song &operator= (const Song& other);
        ~Song();

        char* getName()const;
        char* getSinger()const;
        char* getGenre()const;
        double getLength()const;

        void setName(const char* newName);
        void setSinger(const char* newSinger);
        void setGenre(const char* newGenre);
        void setLength(const double newLength);



};
