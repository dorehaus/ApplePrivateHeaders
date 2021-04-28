/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFDocument, PDFRenderingProperties, PDFDocumentContentView, NSMutableDictionary, PDFPageBackgroundManager, NSArray, PDFAccessibilityDocumentController;

@interface PDFDocumentViewPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFRenderingProperties* renderingProperties;
	CGSize documentViewSize;
	PDFDocumentContentView* contentView;
	NSMutableDictionary* pageViews;
	NSMutableDictionary* pageFrames;
	PDFPageBackgroundManager* pageBackgroundManager;
	BOOL ignoreChangedBoundsForBoxNotification;
	CGRect cachedBounds;
	NSArray* accessibilityPageElements;
	PDFAccessibilityDocumentController* accessibilityDocumentController;

}
@end
