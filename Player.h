#pragma once
#include "Vector2.h"
#include "Tama.h"

class Player
{
public:
	Bullet* bullet_;
	Vector2 pos_;
	int r_;
	int speed_;

public:
	Player(Vector2 pos, int r, int speed);
	~Player();
	void Update(char* keys, char* preKeys);
	void Draw();
};