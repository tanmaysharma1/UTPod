//
// Created by tanma on 10/31/2019.
//
#include "Song.h"
#include <stdlib.h>
Song::Song(){
    size=0;
    artist="";
    title="";
}
Song::Song(string title1,string artist1, int size1){
      size=size1;
      artist=artist1;
      title=title1;
    }
void Song:: setArtist(string name1){
      artist=name1;

    }
string Song:: getArtist(){
      return artist;
    }
void Song:: setTitle(string title1){
      title=title1;

    }
string Song:: getTitle(){
      return title;
    }
void Song:: setSize(int size1){
  size=size1;
}
int Song:: getSize(){
  return size;
}
bool Song:: operator >(Song const &rhs){
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
bool Song:: operator <(Song const &rhs){
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
bool Song:: operator ==(Song const &rhs){
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

