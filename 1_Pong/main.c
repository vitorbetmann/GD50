#include "raylib.h"

// Prototypes
void game_start();
void game_run();
void draw();

// Variables
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
const int FONTSIZE = 12;

int main(void)
{
    game_start();
    game_run();
}

void game_start()
{

    SetConfigFlags(FLAG_VSYNC_HINT | FLAG_FULLSCREEN_MODE |
                   FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_HIGHDPI);
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Pong");
}

void game_run()
{
    while (!WindowShouldClose())
    {
        // handle input
        // update
        // draw
        draw();
    }
}

void draw()
{
    BeginDrawing();
    ClearBackground(BLACK);
    char *greeting = "Hello Pong!";
    int text_size = MeasureText(greeting, FONTSIZE);
    DrawText(greeting, (SCREEN_WIDTH - text_size) / 2, SCREEN_HEIGHT / 2, FONTSIZE, RAYWHITE);
    EndDrawing();
}