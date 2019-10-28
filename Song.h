#ifndef SONG_H 
#define SONG_H
#include <string>
class Song 
{
private:
    int size; 
    string artist; 
    string title; 

public: 
    Song();
    Song(string title);
    Song(string title, string artist, int size);
    void setName(string name);
    string getName();
    void setTitle(string title);
    string getTitle();
    void setSize(int size);
    int getSize();

    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);

    ~Song();
}

#endif
