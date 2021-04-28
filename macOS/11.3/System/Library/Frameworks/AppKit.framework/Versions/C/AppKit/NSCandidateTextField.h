/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@class NSColor;

@interface NSCandidateTextField : NSTextField {

	NSColor* _candidateColor;
	char _trimOnLeft;
	char _trimOnRight;

}

@property (assign) char trimOnLeft;               //@synthesize trimOnLeft=_trimOnLeft - In the implementation block
@property (assign) char trimOnRight;              //@synthesize trimOnRight=_trimOnRight - In the implementation block
+(Class)cellClass;
-(void)dealloc;
-(void)setSelected:(char)arg1 ;
-(void)setAttributedCorrection:(id)arg1 ;
-(void)setTrimOnLeft:(char)arg1 ;
-(void)setTrimOnRight:(char)arg1 ;
-(char)trimOnLeft;
-(char)trimOnRight;
@end

