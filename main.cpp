#include "raylib.h"

int main(void)
{
    const int WINDOW_WDITH = 384;
    const int WINDOW_HEIGHT = 384;
    
    InitWindow(WINDOW_WDITH, WINDOW_HEIGHT, "Top down");

    Texture2D map = LoadTexture("nature_tileset/mymap.png");
    float mapX {};

    SetTargetFPS(64);
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            Vector2 mapPos {mapX, 0.0};
            DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);
        EndDrawing();
    }
    UnloadTexture(map);
    CloseWindow();

    return 0;
}