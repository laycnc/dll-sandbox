#pragma once


#ifdef LIBRARY1_STATIC
	#define LIBRARY1_API 
#else
	#if LIBRARY1_EXPORT
		#define LIBRARY1_API __declspec( dllexport )
	#else
		#define LIBRARY1_API __declspec( dllimport )
	#endif
#endif
