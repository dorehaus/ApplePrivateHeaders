/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <AppKit/NSView.h>

@class NSTimer, NSWindow;

@interface ScreenSaverView : NSView {

	NSTimer* _animationTimer;
	double _timeInterval;
	char _isPreview;
	void* _reserved1;
	void* _reserved2;
	void* _reserved3;

}

@property (assign) double animationTimeInterval; 
@property (getter=isAnimating,readonly) char animating; 
@property (readonly) char hasConfigureSheet; 
@property (readonly) NSWindow * configureSheet; 
@property (getter=isPreview,readonly) char preview; 
+(unsigned long long)backingStoreType;
+(char)performGammaFade;
+(char)performGammaFadeForModuleWithPath:(id)arg1 ;
+(char)spansScreens;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityRole;
-(char)isAccessibilityElement;
-(void)startAnimation;
-(char)isAnimating;
-(void)drawRect:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)_resetTimer;
-(id)accessibilityTitle;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(void)setPreview:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isPreview:(char)arg2 ;
-(id)screenSaverModule;
-(void)_oneStep:(id)arg1 ;
-(char)_needsAnimationTimer;
-(double)animationTimeInterval;
-(void)animateOneFrame;
-(char)isPreview;
-(void)setAnimationTimeInterval:(double)arg1 ;
-(void)prepareToAnimate;
-(void)displayMessage:(id)arg1 ;
-(char)hasConfigureSheet;
-(NSWindow *)configureSheet;
-(void)setScreenSaverModule:(id)arg1 ;
-(char)isKeyboardInteractive;
-(char)isMouseInteractive;
-(char)hidEvent:(id)arg1 ;
@end

