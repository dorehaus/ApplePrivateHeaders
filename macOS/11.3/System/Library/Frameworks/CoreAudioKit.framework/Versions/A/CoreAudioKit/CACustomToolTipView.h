/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor, NSBezierPath, NSDictionary;

@interface CACustomToolTipView : NSView {

	NSColor* backgroundColor;
	NSColor* frameColor;
	unsigned cornerRadius;
	CGSize arrowSize;
	NSBezierPath* tooltipPath;
	NSDictionary* strips;
	float minWidth;

}

@property (assign) unsigned cornerRadius; 
@property (assign) CGSize arrowSize; 
@property (retain) NSColor * backgroundColor; 
@property (retain) NSColor * frameColor; 
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(void)setCornerRadius:(unsigned)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned)cornerRadius;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(NSColor *)frameColor;
-(void)updateParameter:(unsigned)arg1 value:(float)arg2 ;
-(void)repositionStrips;
-(void)redrawBackground;
-(void)addToolTipStripForParameter:(unsigned)arg1 label:(id)arg2 minValue:(float)arg3 maxValue:(float)arg4 unitLabel:(id)arg5 editable:(char)arg6 ;
-(void)addToolTipPopupStripForParameter:(unsigned)arg1 label:(id)arg2 minValue:(float)arg3 maxValue:(float)arg4 stringValues:(id)arg5 ;
-(void)setLabel:(id)arg1 parameter:(unsigned)arg2 ;
-(void)parameterStripSizeChanged:(id)arg1 ;
-(void)addStripHelper:(id)arg1 parameter:(unsigned)arg2 ;
-(void)setArrowSize:(CGSize)arg1 ;
-(CGSize)arrowSize;
-(void)setFrameColor:(NSColor *)arg1 ;
-(void)addToolTipStripForParameter:(unsigned)arg1 label:(id)arg2 minValue:(float)arg3 maxValue:(float)arg4 unitLabel:(id)arg5 ;
@end

