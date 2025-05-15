#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Raylib Test");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 10, 10, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}