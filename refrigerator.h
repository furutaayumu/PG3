#pragma once
#include"electricity.h"
class refrigerator :public electricity
{
public:
	//コンストラクタ
	refrigerator();
	//デストラクタ
	~refrigerator();

	void electricAppliances() override;


private:
	//製品名
	const char* name = "冷蔵庫";
	//役割
	const char* role = "残り物を保存してくれる物";
};
