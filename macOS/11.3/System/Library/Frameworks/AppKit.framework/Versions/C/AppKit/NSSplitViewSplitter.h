/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAccessibilityElement.h>

@interface NSSplitViewSplitter : NSAccessibilityElement {

	long long _index;

}
+(id)splitterWithIndex:(long long)arg1 parent:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)index;
-(CGRect)accessibilityFrame;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityValue;
-(void)setAccessibilityValue:(id)arg1 ;
-(id)accessibilityNextContents;
-(long long)accessibilityOrientation;
-(id)accessibilityPreviousContents;
-(id)accessibilityMinValue;
-(id)accessibilityMaxValue;
-(id)accessibilityHelp;
-(id)initWithIndex:(long long)arg1 parent:(id)arg2 ;
-(double)_accessibilityPreviousSplitterMaxCoordinate;
-(double)_accessibilityNextSplitterMinCoordinate;
-(double)_accessibilityMinValueWithoutCollapsing;
-(double)_accessibilitySplitterMinCoordinate;
-(double)_accessibilityMaxValue;
-(double)_accessibilityMinValue;
-(id)_accessibilityPreviousContentView;
-(id)_accessibilityNextContentView;
@end

