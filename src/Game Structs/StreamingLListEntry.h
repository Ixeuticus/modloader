// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct StreamingLListEntry	// sizeof = 0xC
{
	DWORD field_0;
	DWORD pPrev;
	DWORD pNext;
};
#pragma pack(pop)

static_assert(sizeof(StreamingLListEntry) == 0xC, "Incorrect struct size: StreamingLListEntry");