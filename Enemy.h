#pragma once
#include <stdio.h>
typedef void(*PFunc)();

enum class Phase {
	Move,
	Fire,
	Secession
};
class Enemy {
public:
	void Move();
	void Fire();
	void Secession();
	void Update();
private:
	Phase phase_ = Phase::Move;
	static void (Enemy::* enemy[])();
};

