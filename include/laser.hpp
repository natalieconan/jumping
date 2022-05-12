#include "library.hpp"

struct Laser {
    SDL_Texture* texture;
    int current_frame = 0;
    int x;
    int y;
    int w; 
    int h;

    int frame_size = 0;
    string state = "";

    Laser();
    ~Laser();

    void update();
    void render();
};