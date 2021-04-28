/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAnimation.h>

@class NSWindow;

@interface _NSWindowTransformAnimation : NSAnimation {

	NSWindow* _animatingWindow;
	NSWindow* _originalWindow;
	/*^block*/id _animateToProgress;
	double _currentAnimationAlpha;
	unsigned long long _type;
	CGPoint _startPoint;
	CGPoint _anchorPoint;
	id _space;
	/*^block*/id _completionBlock;
	double _scaleAmount;
	unsigned _animateAlpha : 1;
	unsigned _originalHasParentWindow : 1;
	unsigned _windowTransformAnimationReservedFlags : 30;

}

@property (readonly) double currentAnimationAlpha;                      //@synthesize currentAnimationAlpha=_currentAnimationAlpha - In the implementation block
@property (assign) CGPoint startPoint;                                  //@synthesize startPoint=_startPoint - In the implementation block
@property (setter=_setScaleAmount:) double _scaleAmount; 
@property (setter=_setAnimatesAlpha:) char _animatesAlpha; 
@property (readonly) NSWindow * window; 
@property (assign) CGPoint anchorPoint; 
@property (assign) CGPoint normalizedAnchorPoint;                       //@synthesize anchorPoint=_anchorPoint - In the implementation block
+(void)waitForAnimationToCompleteOnWindows:(id)arg1 forFullScreen:(char)arg2 ;
+(id)windowTransformAnimationWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3 ;
+(void)beginDocumentWindowDuplicationForOriginalDocument:(id)arg1 ;
+(void)endDocumentWindowDuplication;
+(void)beginNewDocumentWindowCreation;
+(void)endNewDocumentWindowCreation;
+(char)isDuplicatingADocumentWindow;
+(char)isRestoringPersistentWindows;
+(id)_originalDocumentWindowForWindow:(id)arg1 ;
+(void)beginPersistentUIWindowRestoring;
+(void)endPersistentUIWindowRestoring;
-(void)dealloc;
-(NSWindow *)window;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)startAnimation;
-(void)setCurrentProgress:(float)arg1 ;
-(void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)_screen;
-(CGPoint)anchorPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(char)isOrderFrontAnimation;
-(char)isOrderOutAnimation;
-(double)currentAnimationAlpha;
-(void)setNormalizedAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)normalizedAnchorPoint;
-(id)initWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3 ;
-(void)_gatherChildWindowAnchors:(id)arg1 forWindow:(id)arg2 anchorPoint:(CGPoint)arg3 ;
-(id)_windowTransformAnchors;
-(id)_windowBaseAlphas;
-(/*^block*/id)_configureAnimationBlock;
-(id)_stringForAnimationType;
-(void)finishConfiguration;
-(void)_duplicateAnimationStopped;
-(void)_cleanUpAnimation;
-(double)_scaleAmount;
-(void)_setScaleAmount:(double)arg1 ;
-(char)_animatesAlpha;
-(void)_setAnimatesAlpha:(char)arg1 ;
-(void)setAnimationAlphaValue:(double)arg1 ;
-(void)setWindowShakeProgress:(double)arg1 ;
-(void)setWindowSendDocmentUpTranslationProgress:(double)arg1 ;
@end

