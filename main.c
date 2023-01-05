#include <stdio.h>
#include <raylib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Bouncing DVD");
	SetTargetFPS(60);

	Texture2D dvd_logo = LoadTexture("assets/dvd.png");

	int x_position = SCREEN_WIDTH / 2;
	int y_position = SCREEN_HEIGHT / 2;

	int x_speed = 1;
	int y_speed = 1;
	printf("%d", dvd_logo.width);

	while (!WindowShouldClose()) {
		ClearBackground(GRAY);

		BeginDrawing();
			DrawTexture(dvd_logo, x_position, y_position, WHITE);
		EndDrawing();

		if (x_position + dvd_logo.width >= SCREEN_WIDTH) {
			x_speed = - x_speed;
			x_position = SCREEN_WIDTH - dvd_logo.width;
		} else if (x_position <= 0) {
			x_speed = - x_speed;
			x_position = 0;
		}
		if (y_position + dvd_logo.height >= SCREEN_HEIGHT) {
			y_speed = - y_speed;
			y_position = SCREEN_HEIGHT - dvd_logo.height;
		} else if (y_position <= 0) {
			y_speed = - y_speed;
			y_position = 0;
		}

		x_position += x_speed;
		y_position += y_speed;
	}

	UnloadTexture(dvd_logo);
	CloseWindow();

	return 0;
}
