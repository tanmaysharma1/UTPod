//
// Created by tanma on 10/27/2019.
//

#include "UTPod.h"
UTPod::UTPod{
    memSize=MAX_MEMORY;
}
UTPod::UtPod(int size){
    if(size>MAX_MEMORY || size <1)
    {
        memSize == MAX_MEMORY;
    }
    else{
    memSize == size;
    }
}
int UTPod:: addSong(Song const &s) {
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
