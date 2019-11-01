//
// Created by tanma on 10/27/2019.
//

#include "UtPod.h"
#include <stdlib.h>
#include <iostream>
UtPod::UtPod(){
    songs->next =NULL;
    memSize=MAX_MEMORY;
}
UtPod::UtPod(int size){
    
    songs->next =NULL;
    if(size>MAX_MEMORY || size <1)
    {
        memSize = MAX_MEMORY;
    }
    else{
    memSize = size;
    }
}
int UtPod:: addSong(Song &s) {
    if(getRemainingMemory()<s.getSize()){
        return NO_MEMORY;
    }
    SongNode *temp = new SongNode;
    temp->next = songs;
    temp->s = s;
    songs = temp;
    return SUCCESS;
    
    
}
int UtPod:: removeSong(Song &s) {
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
void UtPod:: swap(Song &s1, Song &s2)
{
    Song *temp = new Song();
    temp->setArtist(s2.getArtist());
    temp->setTitle(s2.getTitle());
    temp->setSize(s2.getSize());
    s2.setArtist(s1.getArtist());
    s2.setTitle(s1.getTitle());
    s2.setSize(s1.getSize());
    s1.setArtist(temp->getArtist());
    s1.setTitle(temp->getTitle());
    s1.setSize(temp->getSize());
}

void UtPod:: shuffle(){
    for(int x=0; x<getNumSongs();x++){
       int songIndex = rand() % getNumSongs();
        SongNode *ptr = songs;
        while (songIndex > 0)    {            // keeps going next on the pointer until num is 0
        ptr = ptr -> next;
        songIndex --;
    }
        SongNode *ptr2 = songs;
        songIndex=x;
        while (songIndex > 0)    {            // keeps going next on the pointer until num is 0, and returns the pointer
        ptr2 = ptr2 -> next;
        songIndex --;
    }
        swap(ptr->s,ptr2->s);
    }
}
void UtPod:: showSongList(){
    SongNode *temp1 = songs;
    SongNode *temp2 = songs;
    while( temp1 != NULL)
    {
        temp2 = temp1;
        while(temp2 != NULL){
            if((temp1 ->s) > (temp2 ->s))
            {
                swap(temp1->s,temp2->s);
            }
            temp2 = temp2 -> next;
        }
        temp1 = temp1 -> next;
    }
    SongNode *ptr = songs;
    while(ptr!=NULL){
        cout << ptr->s.getTitle() << " " << ptr->s.getArtist() << " "<< ptr->s.getSize() << "MB   \n";
        ptr = ptr->next;
    }

}
void UtPod:: clearMemory(){
}
int UtPod:: getTotalMemory(){
        return memSize;
}
int UtPod:: getRemainingMemory(){
    int remMem=memSize;
    SongNode *ptr = songs;
    Song *song1= new Song;
    while(ptr!=NULL){
        *song1 = ptr->s;
        remMem= remMem - song1->getSize();
        ptr = ptr->next;
    }
    return remMem;
}
int UtPod:: getNumSongs(){
    int total=0;
    SongNode *ptr = songs;
    while(ptr!=NULL){
        total++;
        ptr = ptr->next;
    }
    return total;
}
