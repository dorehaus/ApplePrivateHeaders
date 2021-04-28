/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSButton, NSView, NSArray, NSColor;

@interface AUCollapsableParameterClump : NSView {

	NSTextField* titleField;
	NSButton* disclosureTriangle;
	NSView* contentView;
	char collapsable;
	char expanded;
	NSArray* parameterStrips;
	unsigned displayFlags;
	CGSize otherFrameSize;
	NSColor* frameColor;
	NSColor* fillColor;
	double lineWidth;

}

@property (assign) char collapsable; 
@property (assign) char expanded; 
@property (retain) NSColor * frameColor; 
@property (retain) NSColor * fillColor; 
@property (assign) double lineWidth; 
+(double)collapsedHeight;
-(void)dealloc;
-(void)cleanup;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setFillColor:(NSColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSColor *)fillColor;
-(char)expanded;
-(void)setExpanded:(char)arg1 ;
-(void)toggleExpanded:(id)arg1 ;
-(unsigned)displayFlags;
-(void)setDisplayFlags:(unsigned)arg1 ;
-(NSColor *)frameColor;
-(void)setAppearanceData:(id)arg1 ;
-(id)initWithParameterStrips:(id)arg1 title:(id)arg2 displayFlags:(unsigned)arg3 width:(double)arg4 showDisclosure:(char)arg5 ;
-(double)expandedHeight;
-(char)collapsable;
-(id)clumpName;
-(void)updateParametersForSetFlags;
-(char)hasNonExpertParams;
-(void)setFrameColor:(NSColor *)arg1 ;
-(void)setCollapsable:(char)arg1 ;
-(id)initWithParameterStrips:(id)arg1 title:(id)arg2 displayFlags:(unsigned)arg3 width:(double)arg4 ;
@end
