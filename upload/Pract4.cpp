#include "Song.h"

#define IMPL_SETT(field, other) \
delete[] field;                 \
if(other != NULL)               \
{                               \
int len = strlen(other);        \
field = new char[len+1];        \
strcpy(field, other)            \
}                               \
else                            \
{                               \
field = new char[1];            \
field[0] = '\0';                \
}                               \


Song :: Song(char* name,char* singer,char* genre,double length)
 : name(NULL), singer(NULL), genre(NULL)
{
   setName(name);
}
Song :: Song(const Song& other)
{
    this->copy(other);

}
Song& Song::operator=(const Song& other)
{
    if(this != &other)
    {
        destroy();
        this->copy(other);
    }
    return *this;

}Song :: ~Song()
{
    destroy();
}

char* Song::getName()const
{
    return this->name;
}
char* Song::getSinger()const
{
    return this->singer;
}
char* Song::getGenre()const
{
    return this->genre;
}
double Song::getLength()const
{
    return length;
}

void Song::setName(const char* newName)
{
    delete [] this->name;
    if(newName != NULL)
    {
        int len = strlen (newName);
        this->name=new char [len+1];
        strcpy(this->name,newName);
    }
    else
    {
        this->name = new char [1];
        this->name[0]='\0';
    }
   IMPL_SETT(this->name, newName);
}
void Song::setSinger(const char* newSinger)
{
    delete [] this->singer;
    if(newSinger != NULL)
    {
        int len = strlen (newSinger);
        this->singer=new char [len+1];
        strcpy(this->singer,newSinger);
    }
    else
    {
        this->singer = new char [1];
        this->singer[0]='\0';
    }
}
void Song::setGenre(const char* newGenre)
{
    delete [] this->genre;
    if(newGenre != NULL)
    {
        int len = strlen (newGenre);
        this->genre=new char [len+1];
        strcpy(this->genre,newGenre);
    }
    else
    {
        this->genre = new char [1];
        this->genre[0]='\0';
    }
}
void Song::setLength(const double newLength)
{
    length=newLength;
}


void Song::copy(const Song& other)
{
    strcpy(this->name,other.name);
    strcpy(this->singer,other.singer);
    strcpy(this->genre,other.genre);
    this->length=other.length;

}

void Song::destroy()
{
    delete [] this->name;
    delete [] this->singer;
    delete [] this->genre;
}
