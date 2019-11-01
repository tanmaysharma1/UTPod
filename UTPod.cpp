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
    SongNode *temp = songs;
    if (temp == NULL)
    {
        return NOT_FOUND;
    }
    if (temp->s == s)
    {
        songs = temp->next;
        delete temp;
    }
    else
    {
        while (temp->next != NULL)
        {
            if (temp->next->s == s)
            {
                SongNode *found = temp->next;
                temp->next = temp->next->next;
                delete found;
                return SUCCESS;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    return NOT_FOUND;
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

void UtPod::sortSongList(){
    SongNode *temp1 = songs;
    SongNode *temp2 = songs; 
    while( temp1 != NULL)
    {
        temp2 = temp1;
        while(temp2 != NULL){
            if(temp1 ->s) > (temp2 ->s))
            {
                swap(temp1,temp2);
            }
            temp2 = temp2 -> next;
        }
        temp1 = temp1 -> next;
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
