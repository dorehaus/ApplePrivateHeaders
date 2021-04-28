/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface _NSSimpleImageView : NSView {

	CGRect _alignmentRectFrame;

}

@property (nonatomic,readonly) NSImage * image; 
@property (nonatomic,copy,readonly) id<NSContentStyle> imageContentStyle; 
@property (assign,nonatomic) CGRect alignmentRectFrame; 
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(void)drawRect:(CGRect)arg1 ;
-(void)positionFromAlignmentRectFrame;
-(void)setAlignmentRectFrame:(CGRect)arg1 ;
-(CGRect)alignmentRectFrame;
-(id<NSContentStyle>)imageContentStyle;
@end

