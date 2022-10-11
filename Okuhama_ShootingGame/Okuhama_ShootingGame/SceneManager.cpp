#include "SceneManager.h"
 void SceneManager::Update()
{
	 mScene->Updadte();

}

void SceneManager::Draw()const
{
	mScene->Draw();
}

//シーンの変更処理
AbstractScene*SceneManager:: ChangeScene()
{
	AbstractScene* nextScene = mScene->ChangeScene();

	//現在シーン
	if (nextScene != mScene)
	{
		delete mScene;
		mScene = nextScene;
	}

	return nextScene;

}
