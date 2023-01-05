#include <stdio.h>
#include <raylib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bouncing DVD");
	SetTargetFPS(60);

	Texture2D dvd_logo = LoadTexture("assets/dvd.png");

	while (!WindowShouldClose()) {
		ClearBackground(WHITE);
		BeginDrawing();
			DrawTexture(dvd_logo, 0, 0, WHITE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
