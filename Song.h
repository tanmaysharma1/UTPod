#ifndef SONG_H 
#define SONG_H
#include <string>

using namespace std; 

class Song 
{
private:
    int size; 
    string artist; 
    string title; 

public:
    Song();
    Song(string title1, string artist1, int size1);
    void setArtist(string name1);
    string getArtist();
    void setTitle(string title1);
    string getTitle();
    void setSize(int size1);
    int getSize();

    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);
};

#endif
