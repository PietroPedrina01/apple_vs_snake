#include <stdbool.h>

#include "game.h"

int main(void)
{
    Game game = game_init();

    printf("Game initialized with %zu FPS, display size %zux%zu, audio sample rate %zu Hz, and %zu audio channels.\n",
           game.fps, game.display_width, game.display_height, game.audio_sample_rate, game.audio_channels);

    return 0;
}
