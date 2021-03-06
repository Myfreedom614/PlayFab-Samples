// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <array>
#include <map>
#include <list>
#include <queue>
#include <concrt.h>
#include <time.h>
#include <functional>
#include <cinttypes>
#include <mutex>
#include <string>
#include <sstream>

// When defined turns on diagnostic level logging
#undef NETWORK_DEBUG_SPEW

// When defined writes logging to %TEMP%\P2PMeshLog.txt
#undef NETWORK_LOG_TO_FILE

#include "Debug.h"
#include "PeerNetworkTypes.h"
