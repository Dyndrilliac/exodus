static extern "C" void memoryUtilities::writeMemory(const DWORD source, const DWORD destination, const DWORD dataLength)
{
	DWORD oldProtectionFlag = 0x00;
	
	VirtualProtect((LPVOID)destination, dataLength, PAGE_EXECUTE_READWRITE, &oldProtectionFlag);
	memmove_s((LPVOID)destination, dataLength, (LPCVOID)source, dataLength);
	VirtualProtect((LPVOID)destination, dataLength, oldProtectionFlag, &oldProtectionFlag);
}