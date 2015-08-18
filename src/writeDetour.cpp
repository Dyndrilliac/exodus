/******************************************
	MemoryUtilities::writeDetour Source
	Author:	Matthew Boyette
	Date:	02/13/2008
******************************************/

#include "Exodus.h"

void MemoryUtilities::writeDetour(const DWORD source, const DWORD destination, const DWORD padSize, const bool type)
{
	const static BYTE bufferSize       = 0xFF;
	static BYTE dataBuffer[bufferSize] = {NULL};
	*(BYTE*)((DWORD)&dataBuffer)       = (0xE8 + (DWORD)type);
	*(DWORD*)((DWORD)&dataBuffer+1)    = (destination - (5+source));
	
	for (DWORD i = 1; i <= padSize; i++)
	{
		*(BYTE*)((DWORD)&dataBuffer+5+i) = 0x90;
	}
	
	writeMemory(source, (DWORD)&dataBuffer, (5+padSize));
}