#pragma once


#ifdef LIBRARY2_STATIC
	#define LIBRARY2_API
#else
	#if LIBRARY2_EXPORT
		#define LIBRARY2_API __declspec( dllexport )
	#else
		#define LIBRARY2_API __declspec( dllimport )
	#endif
#endif