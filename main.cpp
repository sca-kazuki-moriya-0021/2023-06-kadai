#include "Game.h"

int main(){
    Game game;
    bool gameKeep= game.Initialize();//初期化
    if(gameKeep){
        game.RunLoop();//ゲームが続いていたらループ
    }
    game.Shutdown();//ゲームを消す
    return 0;
}