#include "MusicBox.h"
#include <iostream>

int main() {
    // test default constructor
    MusicBox mb1;
    std::cout << "Song: " << mb1.get_song() << ", Width: " << mb1.get_width() << std::endl;
    
    // test constructor with arguments
    MusicBox mb2("Moon River", 10);
    std::cout << "Song: " << mb2.get_song() << ", Width: " << mb2.get_width() << std::endl;
    
    return 0;
}
