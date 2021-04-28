/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXViewControllerContextTransitioning.h>

@protocol UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning;
@class NSArray, _UXViewControllerTransitionCoordinator, UXView, NSString;

@interface _UXViewControllerTransitionContext : NSObject <UXViewControllerContextTransitioning> {

	double _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _transitionContextFlags;
	char _initiallyInteractive;
	char _currentlyInteractive;
	char _animated;
	char _presentation;
	double _completionVelocity;
	long long _completionCurve;
	_UXViewControllerTransitionCoordinator* __auxContext;
	double _duration;
	long long _state;
	/*^block*/id _interactiveUpdateHandler;
	long long _presentationStyle;
	double _percentOffset;
	id<UXViewControllerAnimatedTransitioning> _animator;
	id<UXViewControllerInteractiveTransitioning> _interactor;
	UXView* _containerView;
	/*^block*/id _willCompleteHandler;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) char initiallyInteractive;                                                                //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,getter=isCurrentlyInteractive,nonatomic) char currentlyInteractive;                                  //@synthesize currentlyInteractive=_currentlyInteractive - In the implementation block
@property (assign,getter=isAnimated,nonatomic) char animated;                                                          //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) double completionVelocity;                                                                //@synthesize completionVelocity=_completionVelocity - In the implementation block
@property (assign,nonatomic) long long completionCurve;                                                                //@synthesize completionCurve=_completionCurve - In the implementation block
@property (setter=_setAuxContext:,nonatomic,retain) _UXViewControllerTransitionCoordinator * _auxContext;              //@synthesize _auxContext=__auxContext - In the implementation block
@property (assign,nonatomic) double duration;                                                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long state;                                                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id interactiveUpdateHandler;                                                                //@synthesize interactiveUpdateHandler=_interactiveUpdateHandler - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                                                              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,getter=isPresentation,nonatomic) char presentation;                                                  //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) double percentOffset;                                                                     //@synthesize percentOffset=_percentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<UXViewControllerAnimatedTransitioning> animator;                                //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic,__weak) id<UXViewControllerInteractiveTransitioning> interactor;                           //@synthesize interactor=_interactor - In the implementation block
@property (assign,nonatomic,__weak) UXView * containerView;                                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,copy) id willCompleteHandler;                                                                     //@synthesize willCompleteHandler=_willCompleteHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) char transitionIsInFlight; 
@property (nonatomic,copy) id arbitraryTransitionCompletionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id<UXViewControllerAnimatedTransitioning>)animator;
-(UXView *)containerView;
-(void)setContainerView:(UXView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setAnimator:(id<UXViewControllerAnimatedTransitioning>)arg1 ;
-(void)setPresentation:(char)arg1 ;
-(long long)presentationStyle;
-(void)setPresentationStyle:(long long)arg1 ;
-(char)isInteractive;
-(char)isAnimated;
-(void)setAnimated:(char)arg1 ;
-(id)_transitionCoordinator;
-(id)viewControllerForKey:(id)arg1 ;
-(char)isPresentation;
-(char)transitionWasCancelled;
-(void)completeTransition:(char)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(long long)completionCurve;
-(id<UXViewControllerInteractiveTransitioning>)interactor;
-(void)_enableInteractionForDisabledViews;
-(void)__runAlongsideAnimations;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(void)_disableInteractionForViews:(id)arg1 ;
-(char)initiallyInteractive;
-(double)completionVelocity;
-(void)setInteractor:(id<UXViewControllerInteractiveTransitioning>)arg1 ;
-(char)isCurrentlyInteractive;
-(void)_interactivityDidChange:(char)arg1 ;
-(void)_runAlongsideCompletions;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(double)_previousPercentComplete;
-(void)_setPreviousPercentComplete:(double)arg1 ;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1 ;
-(char)_transitionIsCompleting;
-(void)_setTransitionIsCompleting:(char)arg1 ;
-(_UXViewControllerTransitionCoordinator *)_auxContext;
-(void)_setAuxContext:(id)arg1 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(void)setCompletionVelocity:(double)arg1 ;
-(char)transitionIsInFlight;
-(void)setTransitionIsInFlight:(char)arg1 ;
-(void)setInitiallyInteractive:(char)arg1 ;
-(void)setCurrentlyInteractive:(char)arg1 ;
-(id)interactiveUpdateHandler;
-(void)setInteractiveUpdateHandler:(id)arg1 ;
-(double)percentOffset;
-(void)setPercentOffset:(double)arg1 ;
-(id)willCompleteHandler;
-(void)setWillCompleteHandler:(id)arg1 ;
@end
