#ifndef __HELP_SCENE_THIRD_PAGE_H__
#define __HELP_SCENE_THIRD_PAGE_H__

#include "cocos2d.h"

class HelpSceneThirdPage : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
	CREATE_FUNC(HelpSceneThirdPage);

private:
	void GoToMainMenuScene(cocos2d::Ref *sender);
};

#endif // __HELP_SCENE_THIRD_PAGE_H__
