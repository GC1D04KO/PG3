#include <Novice.h>
#include "TitleScene.h"

void TitleScene::Init()
{
}

void TitleScene::Update(char* keys, char* preKeys)
{
	if (!preKeys[DIK_RETURN] && keys[DIK_RETURN]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f,BLACK, kFillModeSolid);
	Novice::ScreenPrintf(600, 360, "Title");
}