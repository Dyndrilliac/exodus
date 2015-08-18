/******************************************
	Exodus Main Header
	Author:	Matthew Boyette
	Date:	02/13/2008
******************************************/

#pragma once

// Don't load useless stuff like DCOM.
#define WIN32_LEAN_AND_MEAN

//-----------------------------------------------------------------------------

// Use the Windows API.
#include <windows.h>
// Use the ToolHelp32 API.
#include <tlhelp32.h>
// Use STL vector support.
#include <vector>
// Use STL file I/O support.
#include <fstream>

//-----------------------------------------------------------------------------

using namespace std;

//-----------------------------------------------------------------------------

#include "MemoryUtilities.h"