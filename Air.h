#pragma once
#include"electricity.h"
class Aircontion :public electricity
{
public:
	//コンストラクタ
	Aircontion();
	//デストラクタ
	~Aircontion();
	//食事
	void electricAppliances() override;


private:
	//製品名
	const char* name = "エアコン";
	//役割
	const char* role = "室内を冷やしてくれる(涼しくしてくれる)物";
};
