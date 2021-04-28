/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNAnimationRenderer.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, NSMutableArray, NSDictionary, NSMapTable, TSDFPSCounter, KNAnimatedSlideView, NSString;

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate> {

	CALayer* _backgroundLayer;
	NSMutableArray* _textures;
	NSDictionary* _attributes;
	long long _numberOfAnimationsStarted;
	NSMapTable* _animatedLayers;
	char _shouldAnimateTransition;
	char _animationsRanToCompletion;
	char _hasBeenTornDown;
	id _transitionEndCallbackTarget;
	SEL _transitionEndCallbackSelector;
	TSDFPSCounter* _FPSCounter;
	char _shouldTearDownIncomingTexture;

}

@property (nonatomic,readonly) KNAnimatedSlideView * incomingAnimatedSlideView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)plugin;
-(void)stopAnimations;
-(void)teardown;
-(void)animate;
-(void)generateTextures;
-(void)renderTextures;
-(id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)p_checkForNullTransitions:(Class)arg1 ;
-(void)setupPluginContext;
-(KNAnimatedSlideView *)incomingAnimatedSlideView;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(char)arg1 ;
-(void)setupLayerTreeForTransition;
-(char)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(char)arg2 ;
-(char)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(char)arg3 ;
-(void)p_removeAnimationsShouldForceRemove:(char)arg1 ;
-(void)removeAnimationsAndFinish:(char)arg1 ;
-(void)updateAnimationTestingLog;
-(void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)renderTexturesSynchronously;
-(void)renderSlideIndex:(unsigned long long)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
@end
