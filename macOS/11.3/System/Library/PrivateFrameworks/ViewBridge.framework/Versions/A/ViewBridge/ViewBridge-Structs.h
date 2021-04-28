/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

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

typedef struct {
	unsigned val[8];
} SCD_Struct_NS5;

typedef const struct __CFString* CFStringRef;

typedef struct _NSModalSession* NSModalSessionRef;

typedef struct {
	unsigned caContextID;
	unsigned serviceConnectionID;
	unsigned long long flags;
	long long windowLevel;
	unsigned long long windowStyleMask;
	CGSize windowContentMinSize;
	CGSize windowContentMaxSize;
	CGRect serviceViewFrame;
	NSArray* touchBarsDescription;
} SCD_Struct_NS8;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	double field8;
	CGRect field9;
	unsigned long long field10;
	unsigned field11;
	char field12;
	char field13;
	char field14;
	char field15;
} SCD_Struct_NS9;

typedef struct {
	unsigned char field1;
	CGRect field2;
	unsigned field3;
	unsigned long long field4;
} SCD_Struct_NS10;

typedef struct {
	SCD_Struct_NS10 field1;
} SCD_Struct_NS11;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct CGSRegionObject* CGSRegionObjectRef;

typedef struct {
	id field1;
	SEL field2;
	id field3;
} SCD_Struct_NS14;

typedef struct {
	char field1;
	char field2;
} SCD_Struct_NS15;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	id field1;
	CGRect field2;
} SCD_Struct_NS17;

typedef struct {
	float p[2];
} SCD_Struct_NS18;

typedef struct {
	char responds;
	char response;
} SCD_Struct_NS19;

typedef struct {
	unsigned char base;
	CGRect contentRect;
	unsigned id;
	unsigned long long styleMask;
} SCD_Struct_NS20;

typedef struct {
	int privateEventLoopKind;
	char sharesParentKeyState;
	SCD_Struct_NS20 window;
} SCD_Struct_NS21;

typedef struct {
	int field1;
	char field2;
	SCD_Struct_NS20 field3;
} SCD_Struct_NS22;

typedef struct {
	SCD_Struct_NS5 field1;
	SCD_Struct_NS20 field2;
} SCD_Struct_NS23;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned long long field3;
	long long field4;
	unsigned long long field5;
	CGSize field6;
	CGSize field7;
	CGRect field8;
	id field9;
} SCD_Struct_NS25;

typedef struct {
	SCD_Struct_NS20 field1;
} SCD_Struct_NS26;

typedef struct CGImage* CGImageRef;

typedef struct __CGEvent* CGEventRef;

typedef struct __LSASN* LSASNRef;

typedef struct __CFRunLoop* CFRunLoopRef;
