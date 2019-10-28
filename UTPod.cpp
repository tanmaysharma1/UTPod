//
// Created by tanma on 10/27/2019.
//

#include "UTPod.h"
UTPod::UTPod{
    songs->next =NULL;
    memSize=MAX_MEMORY;
}
UTPod::UtPod(int size){
    
    songs->next =NULL;
    if(size>MAX_MEMORY || size <1)
    {
        memSize == MAX_MEMORY;
    }
    else{
    memSize == size;
    }
}
int UTPod:: addSong(Song const &s) {
    SongNode *temp = new SongNode;
    temp->next = songs;
    temp->s = s;
    songs = temp;
    return SUCCESS;
    
}
int UTPod:: removeSong(Song const &s) {
}
void UTPod:: shuffle(){
}
void UTPod:: showSongList(){
}
void UTPod:: clearMemory(){
}
int UTPod:: getTotalMemory(){
        return memSize;
}
int UTPod:: getRemainingMemory(){
}
