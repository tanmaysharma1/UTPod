//
// Created by tanma on 10/31/2019.
//
#include "Song.h"
#include <stdlib.h> 
Song::Song(int size1, string artist1, string title1){
  size=size1;
  artist=artist1;
  title=title1;
}
void Song::Song setName(string name){
  artist=name1;
  
}
string Song::Song getName(){
  return artist;  
}
void Song::Song setTitle(string title1){
  title=title1;
  
}
string Song::Song getTitle(){
  return title;  
}
void Song:Song setSize(int size1){
  size=size1;
}
int Song:Song getSize(){
  return size;
}
bool operator >(Song const &rhs){
  if(artist < rhs.artist){
    return true;
  }
   if(title < rhs.title){
    return true;
  }
   if(size < rhs.size){
    return true;
  }
  return false;
}
bool operator <(Song const &rhs){
  if(artist > rhs.artist){
    return true;
  }
   if(title > rhs.title){
    return true;
  }
   if(size > rhs.size){
    return true;
  }
  return false;
}
bool operator ==(Song const &rhs){
  if(artist == rhs.artist){
    return true;
  }
   if(title == rhs.title){
    return true;
  }
   if(size == rhs.size){
    return true;
  }
  return false;
}

