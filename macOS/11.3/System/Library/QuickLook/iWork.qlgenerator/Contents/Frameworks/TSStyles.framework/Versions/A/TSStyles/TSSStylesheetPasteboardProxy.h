/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@protocol OS_dispatch_queue;
@class TSSStylesheet, TSUMutableRetainedPointerSet, NSObject;

@interface TSSStylesheetPasteboardProxy : TSPObject {

	TSSStylesheet* mStylesheet;
	TSUMutableRetainedPointerSet* mReferencedStyles;
	NSObject*<OS_dispatch_queue> mReferencedStylesQueue;
	char mSelfArchiving;

}
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 stylesheet:(id)arg2 ;
-(void)addStyleReference:(id)arg1 ;
@end

