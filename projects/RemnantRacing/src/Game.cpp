#include "Game.h"
#include "raylib.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::Load()
{
	pos = { (float)windowWidth / 2,(float)windowHeight / 2 };
}

void Game::UnLoad()
{

}


void Game::Update()
{
	BeginDrawing();

	ClearBackground(RAYWHITE);

	DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);


	DrawCircle(pos.x, pos.y, 23, BLACK);
	DrawCircle(pos.x, pos.y, 20, BLUE);
	float speed = 5.0f;
	if (IsKeyDown(KEY_UP))
	{
		pos.y -= speed;
	}
	if (IsKeyDown(KEY_RIGHT))
	{
		pos.x += speed;
	}
	if (IsKeyDown(KEY_DOWN))
	{
		pos.y += speed;
	}
	if (IsKeyDown(KEY_LEFT))
	{
		pos.x -= speed;
	}

	EndDrawing();
}

void Game::Draw()
{

}

