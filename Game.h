#pragma once
//include <SdL.h>
#include <string>
#include <vector>

struct Vector2
{
float x;
float y;
};

// ゲームクラス
class Game
{
    public:
    Game();
    // ゲームの初期化
    bool Initialize();
    //SDLの初期化
    bool InitSDL();
    // ゲームが終了するまでゲームループを実行
    void RunLoop();
    // ゲームのシャットダウン
    void Shutdown();
    private:
    // ゲームループのためのヘルパー関数
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();

    // SDLによって作成されたウィンドウ
    //SDL_Window* mWindow;
    // 2D描画用のレンダラー
    //SDL_Renderer* mRenderer;
    // ゲーム開始からのティック数
    //Uint32 mTicksCount;
    // ゲームが継続するかどうか
    bool mIsRunning;

    //x方向
    int mCharacterX;
    //y方向
    int mCharacterY;
    //スピード
    int mSpeed = 5;
};
