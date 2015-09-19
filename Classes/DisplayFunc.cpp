#include "cocos2d.h"
#include "DisplayFunc.h"

USING_NS_CC;

void DisplayFunc::coupleParticleAction(int x, int y){
    
    //画面サイズの取得
    cocos2d::Size size = cocos2d::Director::getInstance()->getVisibleSize();
    
    auto yousei = Sprite::create("2-1.png");
    yousei->setPosition(Vec2(x, y));
    yousei->setScale(0.15);
    yousei->setGlobalZOrder(10.0f);
    this->addChild(yousei,0);
    ParticleSystemQuad* particle = ParticleSystemQuad::create("particleTest-3.plist");
    
    // パーティクルを開始
    particle->resetSystem();
    
    // パーティクルを表示する場所の設定
    particle->setPosition(x, y);
    
    // パーティクルを配置
    this->addChild(particle);
    
    //移動先の指定。修正の必要あり。
    auto point = Point(size.width*2, y);
    auto move = MoveTo::create(2.0f, point);
    yousei->runAction(move);
}

