/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVHighlightView.h>

@class NSColor, CAShapeLayer;

@interface AXVHighlightPointView : AXVHighlightView {

	NSColor* _highlightPointColor;
	CAShapeLayer* __circleLayer;
	CGPoint _highlightPoint;

}

@property (setter=_setCircleLayer:,nonatomic,retain) CAShapeLayer * _circleLayer;              //@synthesize _circleLayer=__circleLayer - In the implementation block
@property (assign,nonatomic) CGPoint highlightPoint;                                           //@synthesize highlightPoint=_highlightPoint - In the implementation block
@property (nonatomic,retain) NSColor * highlightPointColor;                                    //@synthesize highlightPointColor=_highlightPointColor - In the implementation block
-(id)init;
-(id)initWithFrameSpanningAllScreens;
-(CAShapeLayer *)_circleLayer;
-(void)setHighlightPoint:(CGPoint)arg1 ;
-(void)setHighlightPointColor:(NSColor *)arg1 ;
-(CGPoint)highlightPoint;
-(NSColor *)highlightPointColor;
-(void)_setCircleLayer:(id)arg1 ;
@end

