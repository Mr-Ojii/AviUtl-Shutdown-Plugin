//---------------------------------------------------------------------------------------------
//		サンプルIMPORT&EXPORTプラグイン(フィルタプラグイン)  for AviUtl ver0.96c以降
//---------------------------------------------------------------------------------------------
#include <windows.h>
#include <stdlib.h>

#include "filter.h"

//---------------------------------------------------------------------
//		フィルタ構造体定義
//---------------------------------------------------------------------
FILTER_DLL filter = {
	FILTER_FLAG_NO_CONFIG|FILTER_FLAG_ALWAYS_ACTIVE|FILTER_FLAG_PRIORITY_LOWEST|FILTER_FLAG_EX_INFORMATION,
	0,0,
	"Shutdown",
	NULL,NULL,NULL,
	NULL,NULL,
	NULL,NULL,NULL,
	NULL,
	func_init,
	NULL,
	NULL,
	NULL,
	NULL,NULL,
	NULL,
	NULL,
	"Shutdown by Mr-Ojii",
	NULL,
	NULL,
};


//---------------------------------------------------------------------
//		フィルタ構造体のポインタを渡す関数
//---------------------------------------------------------------------
EXTERN_C FILTER_DLL __declspec(dllexport) * __stdcall GetFilterTable( void )
{
	return &filter;
}

BOOL func_init(FILTER *fp)
{
	system("shutdown -s -t 30 -c このPCは30秒後にシャットダウンされます。");
	return TRUE;
}
