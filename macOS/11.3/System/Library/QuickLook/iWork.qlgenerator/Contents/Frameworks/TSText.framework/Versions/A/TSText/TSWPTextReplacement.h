/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPReplaceAction.h>

@class TSWPSelection, NSString;

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {

	TSWPSelection* _selection;
	NSString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)delta;
-(NSRange)insertedRange;
-(unsigned long long)targetCharIndex;
-(id)initWithSelection:(id)arg1 string:(id)arg2 ;
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(TSWPStorageActionBuilderRef)arg3 withFlags:(unsigned)arg4 replaceBlock:(/*^block*/id)arg5 ;
@end

