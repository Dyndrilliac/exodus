/******************************************
	MemoryUtilities Class Header
	Author:	Matthew Boyette
	Date:	02/13/2008
******************************************/

#pragma once

class MemoryUtilities
{
	public:
	
		static void writeDetour(const DWORD source, const DWORD destination, const DWORD padSize, const bool type);
		static void writeMemory(const DWORD source, const DWORD destination, const DWORD dataLength);
	
	private:
	
		// ...
	
	protected:
	
		// ...
	
};

