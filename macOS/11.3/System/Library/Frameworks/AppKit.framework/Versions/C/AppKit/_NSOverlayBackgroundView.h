/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class CALayer, CABackdropLayer;

@interface _NSOverlayBackgroundView : NSView {

	id _backgroundImageRef;
	double _backgroundScaleFactor;
	CALayer* _materialLayer;
	CALayer* _tintLayer;
	CABackdropLayer* _backdropLayer;
	CALayer* _backgroundLayer;
	double _defaultBlurRadius;
	double _defaultSaturationMultiplier;
	CGColorRef _defaultBackgroundColor;
	double _paletteScaleFactor;
	id _target;
	SEL _action;
	char _isActive;
	char _hasAcceleration;
	char _hasAccelerationCached;
	char _darkened;
	char _debugMode;
	char _pressed;

}

@property (retain) id backgroundImageRef;                     //@synthesize backgroundImageRef=_backgroundImageRef - In the implementation block
@property (assign) double backgroundScaleFactor;              //@synthesize backgroundScaleFactor=_backgroundScaleFactor - In the implementation block
@property (setter=setActive:) char isActive; 
@property (setter=setDarkened:) char darkened;                //@synthesize darkened=_darkened - In the implementation block
@property (__weak) id target;                                 //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                //@synthesize action=_action - In the implementation block
@property (assign) double paletteScaleFactor;                 //@synthesize paletteScaleFactor=_paletteScaleFactor - In the implementation block
@property (assign) char debugMode;                            //@synthesize debugMode=_debugMode - In the implementation block
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(char)isActive;
-(void)setAction:(SEL)arg1 ;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)wantsLayer;
-(void)setPressed:(char)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(double)paletteScaleFactor;
-(void)setPaletteScaleFactor:(double)arg1 ;
-(id)_cuiOptionsForCurrentMaterial;
-(void)_updateMaterialForState;
-(id)backgroundImageRef;
-(void)setBackgroundImageRef:(id)arg1 ;
-(double)backgroundScaleFactor;
-(void)setBackgroundScaleFactor:(double)arg1 ;
-(char)darkened;
-(void)setDarkened:(char)arg1 ;
-(char)debugMode;
-(void)setDebugMode:(char)arg1 ;
@end

