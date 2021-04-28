/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWPStorage, NSObject<TSWPStyleProvider>;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGContext* CGContextRef;

typedef struct CGImage* CGImageRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct TSUCellCoord {
	unsigned row;
	unsigned short column;
	char _preserveRow;
	char _preserveColumn;
} TSUCellCoord;

typedef struct {
	unsigned numberOfColumns;
	unsigned numberOfRows;
} SCD_Struct_TS8;

typedef struct TSUCellRect {
	TSUCellCoord origin;
	SCD_Struct_TS8 size;
} TSUCellRect;

typedef struct TSWPParagraphEnumerator {
	TSWPStorage* _storage;
	NSObject<TSWPStyleProvider>* _styleProvider;
	unsigned long long _parIndex;
	unsigned long long _endParIndex;
	unsigned long long _firstParIndex;
	unsigned long long _lastParIndex;
	BOOL _requireHidden;
	NSRange _currentTextRange;
} TSWPParagraphEnumerator;

