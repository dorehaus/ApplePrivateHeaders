/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSString, PDFAction, PDFOutline, NSMutableArray;

@interface PDFOutlinePrivate : NSObject {

	PDFDocument* document;
	NSString* title;
	PDFAction* action;
	PDFOutline* parent;
	NSMutableArray* children;
	BOOL childrenLoaded;
	CFDictionaryRef dictionary;
	BOOL open;
	CGPDFDictionaryRef srcDictionary;

}
@end
