#pragma once
//電気
class electricity {
public:/*メンバ関数*/
	//コンストラクタ
	electricity();
	//デストラクタ
	virtual ~electricity();
	//宣言
	virtual void electricAppliances();


private:
	//名前
	const char* name;
};