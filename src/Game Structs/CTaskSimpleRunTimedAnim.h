// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CAiTimer.h"
#include "CTaskSimpleAnim.h"


#pragma pack(push, 1)
struct CTaskSimpleRunTimedAnim	// sizeof = 0x34
{
	CTaskSimpleAnim __parent;
	DWORD field_10;
	DWORD m_dwAnimId;
	DWORD field_18;
	DWORD field_1C;
	DWORD m_nTime;
	CAiTimer field_24;
	WORD m_eTaskId;
	WORD __pad;
};
#pragma pack(pop)

static_assert(sizeof(CTaskSimpleRunTimedAnim) == 0x34, "Incorrect struct size: CTaskSimpleRunTimedAnim");