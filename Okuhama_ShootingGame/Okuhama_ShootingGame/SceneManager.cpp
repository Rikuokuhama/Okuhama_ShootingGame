#include "SceneManager.h"
 void SceneManager::Update()
{
	 mScene->Updadte();

}

void SceneManager::Draw()const
{
	mScene->Draw();
}

//�V�[���̕ύX����
AbstractScene*SceneManager:: ChangeScene()
{
	AbstractScene* nextScene = mScene->ChangeScene();

	//���݃V�[��
	if (nextScene != mScene)
	{
		delete mScene;
		mScene = nextScene;
	}

	return nextScene;

}
