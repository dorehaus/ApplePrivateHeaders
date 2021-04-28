/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSAccessibilityElement, NSSecureCodingNSObject;
#import <AppKit/AppKit-Structs.h>
@class NSString;

@interface NSAccessibilityCustomRotorItemResult : NSObject {

	id<NSAccessibilityElement> _targetElement;
	NSRange _targetRange;
	NSString* _customLabel;
	id<NSSecureCoding><NSObject> _itemLoadingToken;

}

@property (__weak,readonly) id<NSAccessibilityElement> targetElement; 
@property (readonly) id<NSSecureCoding><NSObject> itemLoadingToken;                //@synthesize itemLoadingToken=_itemLoadingToken - In the implementation block
@property (assign) NSRange targetRange;                                            //@synthesize targetRange=_targetRange - In the implementation block
@property (copy) NSString * customLabel;                                           //@synthesize customLabel=_customLabel - In the implementation block
-(void)dealloc;
-(id)description;
-(id<NSAccessibilityElement>)targetElement;
-(NSRange)targetRange;
-(void)setTargetRange:(NSRange)arg1 ;
-(id)initWithItemLoadingToken:(id)arg1 customLabel:(id)arg2 ;
-(id)initWithTargetElement:(id)arg1 ;
-(id<NSSecureCoding><NSObject>)itemLoadingToken;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
@end

