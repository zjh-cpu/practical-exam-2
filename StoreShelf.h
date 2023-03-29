#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h"

class StoreShelf {
private:
    int width;              // width in centimetres
    int num_music_boxes;    // number of Music boxes on the shelf
    MusicBox *contents;     // dynamic array of MusicBox objects

public:
    StoreShelf();
    StoreShelf(int width);
    int get_width();
    int get_num_music_boxes();
    MusicBox *get_contents();
    bool add_music_box(MusicBox a_music_box);
    ~StoreShelf();
};

#endif // STORESHELF_H