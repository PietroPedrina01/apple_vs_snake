#include "game.h"

Game game_init(void)
{
    return (Game){
        .fps = 60,
        .display = NULL,
        .display_width = 800,
        .display_height = 600,
        .audio = NULL,
        .audio_sample_rate = 44100,
        .audio_channels = 2};
}
