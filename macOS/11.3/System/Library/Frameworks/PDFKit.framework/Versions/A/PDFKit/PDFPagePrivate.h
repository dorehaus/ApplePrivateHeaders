/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFView, NSString, NSImage, NSAttributedString, NSMutableArray, NSLock, PDFAKPageAdaptor, NSMutableSet, NSMutableDictionary;

@interface PDFPagePrivate : NSObject {

	PDFDocument* document;
	CGPDFPageRef page;
	CGColorRef pageBackgroundColorHint;
	PDFView* view;
	NSString* label;
	NSImage* image;
	CGImageRef cgImage;
	CGImageSourceRef cgImageSource;
	unsigned cgImageOrientation;
	os_unfair_lock_s layoutLock;
	CGPDFLayoutRef layout;
	AB builtLayout;
	os_unfair_lock_s dataDetectorsLock;
	BOOL ranDataDetectors;
	NSString* text;
	NSAttributedString* attributedString;
	BOOL displaysAnnotations;
	BOOL displaysMarkups;
	NSMutableArray* annotations;
	AB loadedAnnotations;
	NSLock* lock_getAnnotations;
	NSLock* lock_accessAnnotations;
	NSMutableArray* scannedAnnotations;
	long long rotation;
	CGRect mediaBox;
	CGRect cropBox;
	CGRect bleedBox;
	CGRect trimBox;
	CGRect artBox;
	CGDisplayListRef displayList;
	BOOL creatingDisplayList;
	os_unfair_lock_s displayListCreationLock;
	BOOL bookmarked;
	BOOL isFullyConstructed;
	BOOL colorWidgetBackgrounds;
	PDFAKPageAdaptor* akPageAdaptor;
	BOOL akDidSetupRealPageModelController;
	NSMutableArray* annotationChanges;
	NSMutableSet* changedAnnotations;
	NSMutableDictionary* widgetAnnotationLookup;
	NSMutableArray* scannerResults;
	BOOL didChangeBounds;

}
@end
