/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOSurface.framework/Versions/A/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __IOSurfaceClient* IOSurfaceClientRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned long long clientAddress;
	unsigned surfaceID;
	unsigned pixelFormat;
	unsigned retainCount;
	unsigned yCbCrMatrix;
	unsigned cacheMode;
	unsigned mapCacheAttribute;
	unsigned purgeableState;
	unsigned purgeableStateAPI;
	unsigned allocOffset;
	unsigned allocSize;
	unsigned char isGlobal;
	unsigned char isAllocated;
	unsigned char isWired;
	unsigned char pad;
	unsigned morePad;
	unsigned long long detachModeCode;
	unsigned long long initDetachModeCodeTime;
	unsigned long long protectionOptions;
	unsigned residentSize;
	unsigned dirtySize;
	unsigned long long traceID;
	unsigned long long memDescID;
} SCD_Struct_IO3;

typedef struct {
	unsigned offset;
	unsigned width;
	unsigned height;
	unsigned bytesPerRow;
	unsigned bytesPerElement;
	unsigned elementWidth;
	unsigned elementHeight;
} SCD_Struct_IO4;

