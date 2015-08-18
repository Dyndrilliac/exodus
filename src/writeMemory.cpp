/******************************************
	MemoryUtilities::writeMemory Source
	Author:	Matthew Boyette
	Date:	02/13/2008
******************************************/

#include "Exodus.h"

void MemoryUtilities::writeMemory(const DWORD source, const DWORD destination, const DWORD dataLength)
{
	DWORD oldProtectionFlag = NULL;
	
	VirtualProtect((LPVOID)destination, dataLength, PAGE_EXECUTE_READWRITE, &oldProtectionFlag);
	memmove_s((LPVOID)destination, dataLength, (LPCVOID)source, dataLength);
	VirtualProtect((LPVOID)destination, dataLength, oldProtectionFlag, &oldProtectionFlag);
}