#include <stdio.h>
#include <raylib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bouncing DVD");
	SetTargetFPS(60);

	Texture2D dvd_logo = LoadTexture("assets/dvd.png");

	int x_position = 10;
	int y_position = 10;

	int x_speed = 8;
	int y_speed = 8;
	printf("%d", dvd_logo.width);

	while (!WindowShouldClose()) {
		ClearBackground(WHITE);

		BeginDrawing();
			DrawTexture(dvd_logo, x_position, y_position, WHITE);
		EndDrawing();

		if (
				((x_position + dvd_logo.width) >= SCREEN_WIDTH) || 
				(x_position <= 0)) {
			x_speed = - x_speed;
		}
		else if (
				((y_position + dvd_logo.height) >= SCREEN_HEIGHT) || 
				(y_position <= 0)) {
			y_speed = - y_speed;
		}
		x_position += x_speed;
		y_position += y_speed;
	}

	UnloadTexture(dvd_logo);
	CloseWindow();

	return 0;
}
