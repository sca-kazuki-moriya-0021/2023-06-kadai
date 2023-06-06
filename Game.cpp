#include "Game.h"
//include "SDL_image.h"

//Gameの初期化
/*Game::Game()
:mWindow(nullptr)
,mRenderer(nullptr)
,mTicksCount(0)
,mIsRunning(true)
,mPaddleDir(0)
{

}*/
//ゲームの初期化
bool Game::Initialize(){
    	// SDL初期化の際、falseが入った際にはfalseを返す
	//if (!InitSDL())
	{
		//SDL_Log("%s", SDL_GetError());
		//return false;
	}
    //初期化が成功したらtrueを返す
    return true;
}
//SDL関連初期化
bool Game::InitSDL(){
    //初期化
    //bool sdlResult = SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) == 0;
    //初期化が失敗したらfalseを返す
    /*if(!sdlResult){
        return false;
    }*/

    //ウィンドウ生成
    /*mWindow = SDL_CreateWindow(
		"GameWindow", // ウィンドウのタイトル
		100,	// ウィンドウの左上のx座標
		100,	// ウィンドウの左上のy座標
		1024,	// ウィンドウの幅
		768,	// ウィンドウの高さ
		0		// フラグ（フラグがない場合は0）
	);*/

    //ウィンドウが生成されなかった時にはfalseを返す
    /*if(!mWindow){
        return false;
    }*/

	// レンダラー作成
	//mRenderer = SDL_CreateRenderer(mWindow,-1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    //レンダラー生成がうまくいかなかった際にはfalseを返す
     /*if (!mRenderer) {
        return false;
     }*/
}
//ゲームループの処理
void Game::RunLoop()
{
	while (mIsRunning)
	{
		ProcessInput(); // 入力の処理
		UpdateGame();   // ゲームの更新
		GenerateOutput(); // 描画の生成
	}
}

void Game::ProcessInput(){
    /*// SDLイベント
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT: // ウィンドウが閉じられた時
            mIsRunning = false;
            break;
        }
    }
    // キー入力イベント
    const Uint8* state = SDL_GetKeyboardState(NULL);
    if (state[SDL_SCANCODE_ESCAPE])
    {
        mIsRunning = false;
    }*/

    //上下移動
    /*int mCharacterY;
	if (state[SDL_SCANCODE_W])
	{
		mCharacterY -= mSpeed;
	}
	if (state[SDL_SCANCODE_S])
	{
		mCharacterY += mSpeed;
	}*/

    //左右移動
    /*int mmCharacterYX;
	if (state[SDL_SCANCODE_A])
	{
		mmCharacterYX -= mSpeed;
	}
	if (state[SDL_SCANCODE_D])
	{
		mmCharacterYX += mSpeed;
	}*/
}


//シーン処理
void Game::UpdateGame(){
    //入力検知
    ProcessInput();

   // 最低16msは待機
    /*while (!SDL_TICKS_PASSED(SDL_GetTicks(), mTicksCount + 16));
    // フレームの経過時間を取得(最大50ms)
    float deltaTime = (SDL_GetTicks() - mTicksCount) / 1000.0f;
    if (deltaTime > 0.05f)
    {
        deltaTime = 0.05f;
    }
    mTicksCount = SDL_GetTicks();*/
     // 出力処理
    GenerateOutput();
}

//ゲームループの出力
void Game::GenerateOutput(){
    // 描画色を紺色に設定する
	/*SDL_SetRenderDrawColor(
		mRenderer,
		19,		// R
		56,		// G
		111,	// B
		255		// A
	);

	// バックバッファをクリアする
	SDL_RenderClear(mRenderer);*/

	// フロントバッファとバックバッファを交換する
	//SDL_RenderPresent(mRenderer);

}

//シャットダウン
void Game::Shutdown()
{
	//SDL_DestroyRenderer(mRenderer);
	//SDL_DestroyWindow(mWindow);
	//SDL_Quit();
}
