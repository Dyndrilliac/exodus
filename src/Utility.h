/*****************************
	Memory Utilities Class
*****************************/

#pragma once

static class memoryUtilities
{
	public:
	
		static extern "C" void writeDetour(const DWORD source, const DWORD destination, const DWORD padSize, const bool type);
		static extern "C" void writeMemory(const DWORD source, const DWORD destination, const DWORD dataLength);
	
	private:
	
		// ...
	
	protected:
	
		// ...
	
};

