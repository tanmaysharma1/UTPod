//
// Created by tanma on 10/27/2019.
//

#include "UTPod.h"
#include <stdlib.h> 
UtPod::UtPod(){
    numSongs=0;
    songs->next =NULL;
    memSize=MAX_MEMORY;
}
UtPod::UtPod(int size){
    
    songs->next =NULL;
    if(size>MAX_MEMORY || size <1)
    {
        memSize == MAX_MEMORY;
    }
    else{
    memSize == size;
    }
}
int UtPod:: addSong(Song const &s) {
    SongNode *temp = new SongNode;
    temp->next = songs;
    temp->s = s;
    songs = temp;
    numSongs++;
    return SUCCESS;
    
    
}
int UtPod:: removeSong(Song const &s) {
    numSongs--;
}
void UtPod:: swap(Song const &s1, Song const &s2)
{
    Song temp = new Song;
    temp.setArtist(s2.getArtist());
    temp.setTitle(s2.getTitle());
    temp.setTitle(s2.getSize());
    s2.setArtist(s1.getArtist());
    s2.setTitle(s1.getTitle());
    s2.setTitle(s1.getSize());
    s1.setArtist(temp.getArtist());
    s1.setTitle(temp.getTitle());
    s1.setTitle(temp.getSize());
}

void UtPod:: shuffle(){
    for(int x=0; x<numSongs;x++){
       int songIndex = rand() % numSongs;
        SongNode *ptr = songs;
        while (songIndex > 0)    {            // keeps going next on the pointer until num is 0
        ptr = ptr -> next;
        songIndex --;
    }
        SongNode *ptr2 = songs;
        songIndex=x;
        while (songIndex > 0)    {            // keeps going next on the pointer until num is 0, and returns the pointer
        ptr2 = ptr2 -> next;
        num --;
    }
        swap(ptr->s,ptr2->s);
    }
}
void UtPod:: showSongList(){
}
void UtPod:: clearMemory(){
}
int UtPod:: getTotalMemory(){
        return memSize;
}
int UtPod:: getRemainingMemory(){
}
