/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSPopoverFrame.h>

@interface QLPreviewBackgroundView : NSPopoverFrame {

	unsigned long long _arrowEdge;
	double _arrowPosition;

}

@property (assign) unsigned long long arrowEdge; 
@property (assign) double arrowPosition; 
+(CGRect)sheetRectFromRect:(CGRect)arg1 ;
+(void)adjustWindowFrame:(CGRect*)arg1 arrowPosition:(double*)arg2 inContainingFrame:(CGRect)arg3 edge:(unsigned long long)arg4 itemFrame:(CGRect)arg5 aimPoint:(CGPoint)arg6 ;
-(void)setArrowEdge:(unsigned long long)arg1 ;
-(unsigned long long)arrowEdge;
-(NSEdgeInsets)alignmentRectInsets;
-(void)setArrowPosition:(double)arg1 ;
-(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(double)arrowPosition;
@end

