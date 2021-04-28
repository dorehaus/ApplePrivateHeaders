/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface NSRoundedDashStrokeView : NSView {

	double _cornerRadius;
	double _lineDash;
	double _strokeThickness;
	NSColor* _dashColor;
	NSColor* _innerDashColor;

}

@property (assign) double cornerRadius;                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign) double lineDash;                     //@synthesize lineDash=_lineDash - In the implementation block
@property (assign) double strokeThickness;              //@synthesize strokeThickness=_strokeThickness - In the implementation block
@property (copy) NSColor * dashColor;                   //@synthesize dashColor=_dashColor - In the implementation block
@property (copy) NSColor * innerDashColor;              //@synthesize innerDashColor=_innerDashColor - In the implementation block
+(id)keyPathsForValuesInvalidatingDisplay;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)cornerRadius;
-(double)strokeThickness;
-(double)lineDash;
-(NSColor *)innerDashColor;
-(NSColor *)dashColor;
-(void)setLineDash:(double)arg1 ;
-(void)setStrokeThickness:(double)arg1 ;
-(void)setDashColor:(NSColor *)arg1 ;
-(void)setInnerDashColor:(NSColor *)arg1 ;
@end

