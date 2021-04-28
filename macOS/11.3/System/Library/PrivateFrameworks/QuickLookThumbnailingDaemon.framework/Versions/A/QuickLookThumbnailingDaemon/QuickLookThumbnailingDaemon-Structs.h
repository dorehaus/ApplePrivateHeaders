/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/Versions/A/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFArray* CFArrayRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFURL* CFURLRef;

typedef struct __CFString* CFStringRef;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct fsid {
	int val[2];
} fsid;

typedef struct statfs {
	unsigned f_bsize;
	int f_iosize;
	unsigned long long f_blocks;
	unsigned long long f_bfree;
	unsigned long long f_bavail;
	unsigned long long f_files;
	unsigned long long f_ffree;
	fsid f_fsid;
	unsigned f_owner;
	unsigned f_type;
	unsigned f_flags;
	unsigned f_fssubtype;
	char f_fstypename[16];
	char f_mntonname[1024];
	char f_mntfromname[1024];
	unsigned f_flags_ext;
	unsigned f_reserved[7];
} statfs;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __QLThumbnailRequest* QLThumbnailRequestRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct _NSZone* NSZoneRef;
