#include <windows.h>
#include <stdlib.h>

#include "filter.h"

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

EXTERN_C FILTER_DLL __declspec(dllexport) * __stdcall GetFilterTable( void )
{
	return &filter;
}

BOOL func_init(FILTER *fp)
{
	system("shutdown -s -t 30 -c ����PC��30�b��ɃV���b�g�_�E������܂��B");
	return TRUE;
}
