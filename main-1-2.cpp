#include <iostream>
#include "StoreShelf.h"

int main() {
    std::cout << "Creating a new StoreShelf with width 100cm...\n";
    StoreShelf my_shelf(100);

    std::cout << "Adding MusicBoxes to the shelf...\n";
    MusicBox box1("Song1", 20);
    MusicBox box2("Song2", 30);
    MusicBox box3("Song3", 50);

    if (my_shelf.add_music_box(box1)) {
        std::cout << "Added " << box1.get_song() << " to the shelf\n";
    }
    else {
        std::cout << "Failed to add " << box1.get_song() << " to the shelf\n";
    }

    if (my_shelf.add_music_box(box2)) {
        std::cout << "Added " << box2.get_song() << " to the shelf\n";
    }
    else {
        std::cout << "Failed to add " << box3.get_song() << " to the shelf\n";
    }
}