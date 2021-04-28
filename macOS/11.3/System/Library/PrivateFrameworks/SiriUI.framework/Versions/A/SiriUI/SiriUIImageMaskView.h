/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface SiriUIImageMaskView : NSView {

	NSImage* _maskImage;

}

@property (nonatomic,retain) NSImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(id)imageMaskViewWithImage:(id)arg1 ;
+(id)imageMaskViewWithDefaultChevron;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaskImage:(NSImage *)arg1 ;
-(NSImage *)maskImage;
-(void)setMaskColor:(id)arg1 ;
@end

