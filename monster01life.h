//=============================================================================
//
// life処理 [life.h]
// Author : GP11A243 29 潘澤泓
//
//=============================================================================
#ifndef _MONSTER01LIFE_H_
#define _MONSTER01LIFE_H_


// マクロ定義
#define	NUM_MONSTER01LIFE				(2)			// ポリゴン数

#define TEXTURE_GAME_MONSTER01LIFE			_T("data/TEXTURE/life1.png")	// 画像
#define TEXTURE_MONSTER01LIFE_SIZE_X		(15)							// テクスチャサイズ
#define TEXTURE_MONSTER01LIFE_SIZE_Y		(15)							// 同上

#define TEXTURE_PATTERN_DIVIDE_X_MONSTER01LIFE	(3)	// アニメパターンのテクスチャ内分割数（X)
#define TEXTURE_PATTERN_DIVIDE_Y_MONSTER01LIFE	(1)	// アニメパターンのテクスチャ内分割数（Y)
#define ANIM_PATTERN_NUM_MONSTER01LIFE			(TEXTURE_PATTERN_DIVIDE_X_MONSTER01LIFE*TEXTURE_PATTERN_DIVIDE_Y_MONSTER01LIFE)	// アニメーションパターン数
#define TIME_ANIMATION_MONSTER01LIFE			(10)// アニメーションの切り替わるカウント

#define MONSTER01LIFE_MAX						(8)	// ライフの最大数


//*****************************************************************************
// 構造体宣言
//*****************************************************************************

typedef struct	// ライフ構造体
{
	bool			use;						// true:使用  false:未使用
	D3DXVECTOR3		pos;						// ポリゴンの移動量
	D3DXVECTOR3		rot;						// ポリゴンの回転量
	int				PatternAnim;				// アニメーションパターンナンバー
	int				CountAnim;					// アニメーションカウント
	
	LPDIRECT3DTEXTURE9	Texture;				// テクスチャ情報
	VERTEX_2D		vertexWk[NUM_VERTEX];		// 頂点情報格納ワーク

} MONSTER01LIFE;



//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitLife(int type);
void UninitLife(void);
void UpdateLife(void);
void DrawLife(void);
MONSTER01LIFE *GetLife(int no);


#endif
