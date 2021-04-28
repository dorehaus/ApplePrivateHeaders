/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGContext* CGContextRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_Co2;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	double top;
	double left;
	double bottom;
	double right;
} SCD_Struct_TD5;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	[4 columns];
} SCD_Struct_TD8;

typedef struct renditionkeytoken {
	unsigned short identifier;
	unsigned short value;
} renditionkeytoken;

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	unsigned long long field4;
} SCD_Struct_TD10;

typedef struct {
	char* field1;
	char* field2;
	renditionkeytoken field3[5_];
	long long field4;
	long long field5;
	SCD_Struct_TD10 field6[12];
} SCD_Struct_TD11;

typedef struct {
	char* field1;
	char* field2;
	char field3;
	long long field4;
	SCD_Struct_TD11 field5[8];
} SCD_Struct_TD12;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_TD13;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
} SCD_Struct_TD14;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGSVGDocument* CGSVGDocumentRef;

typedef struct PSDImageInfo {
	unsigned width;
	unsigned height;
	unsigned short mode;
	unsigned short bitsPerSample;
	unsigned short samplesPerPixel;
	int isDrawable;
} PSDImageInfo;

typedef struct CGColor* CGColorRef;

typedef struct histogram_ARGB_t {
	unsigned long long tbl[4][1024];
} histogram_ARGB_t;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct vImage_CGImageFormat {
	unsigned bitsPerComponent;
	unsigned bitsPerPixel;
	CGColorSpace colorSpace;
	unsigned bitmapInfo;
	unsigned version;
	double decode;
	int renderingIntent;
} vImage_CGImageFormat;

