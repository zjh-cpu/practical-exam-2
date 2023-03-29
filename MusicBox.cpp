#include "MusicBox.h"

MusicBox::MusicBox() {
    song = "";
    width = 0;
}

MusicBox::MusicBox(std::string songname, int w) {
    song = songname;
    width = w;
}

std::string MusicBox::get_song() {
    return song;
}

int MusicBox::get_width() {
    return width;
}

MusicBox::~MusicBox() {}