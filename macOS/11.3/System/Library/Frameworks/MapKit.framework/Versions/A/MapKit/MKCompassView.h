/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/MKCompassView.h>

@class MKBlurBackingLayer, MKCompassLayer, NSString;

@interface MKCompassView : NSView <MKCompassView> {

	char _enabled;
	double _mapHeading;
	MKBlurBackingLayer* _blurLayer;
	MKCompassLayer* _displayLayer;
	MKCompassLayer* _maskLayer;
	long long _outerRingTooltipTag;
	long long _innerDiscTooltipTag;
	long long _innerDiscTrackingRectTag;

}

@property (assign,nonatomic) double mapHeading;                          //@synthesize mapHeading=_mapHeading - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)diameter;
+(void)_initMetrics;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)layout;
-(void)setFrame:(CGRect)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(char)accessibilityIsIgnored;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)_commonInit;
-(char)canBecomeKeyView;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(char)isPointInNorthEastHalf:(CGPoint)arg1 ;
-(char)isPointInInnerPortion:(CGPoint)arg1 ;
-(double)mapHeading;
-(void)setMapHeading:(double)arg1 ;
-(void)updateBlurVisibility;
-(void)updateAccessibilityDescriptionWithAngle:(double)arg1 ;
-(char)isPointInOuterRing:(CGPoint)arg1 ;
-(void)updateHighlight;
-(CGRect)_innerDiscRect;
-(void)updateTooltipForInnerDiscHovered:(char)arg1 ;
-(void)updateTooltip;
-(void)resetCompassFlatWithMapPitch:(double)arg1 pitchEnabled:(char)arg2 mapType:(int)arg3 changeButtonTextWithPitch:(char)arg4 ;
-(char)isPointInCompass:(CGPoint)arg1 ;
@end

