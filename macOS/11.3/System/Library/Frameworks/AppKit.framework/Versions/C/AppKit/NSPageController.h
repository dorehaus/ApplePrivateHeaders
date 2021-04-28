/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSAnimatablePropertyContainer.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSPageControllerDelegate;
@class NSView, NSViewController, NSString, NSMutableArray, NSMutableDictionary, NSDictionary, NSArray;

@interface NSPageController : NSViewController <NSAnimatablePropertyContainer, NSCoding> {

	NSView* _contentView;
	NSViewController* _selectedViewController;
	NSString* _currentIdentifier;
	long long _transitionStyle;
	id<NSPageControllerDelegate> _delegate;
	long long _selectedIndex;
	NSMutableArray* _arrangedObjects;
	NSMutableArray* _snapshots;
	struct {
		unsigned delegateRespondsToIdentifierForRepresentedObject : 1;
		unsigned delegateRespondsToViewControllerForIdentifier : 1;
		unsigned delegateRespondsToFrameForRepresentedObject : 1;
		unsigned delegateRespondsToPrepareView : 1;
		unsigned delegateRespondsToDidTransition : 1;
		unsigned delegateRespondsToWillLiveTransition : 1;
		unsigned delegateRespondsToDidLiveTransition : 1;
		unsigned delegateRespondsToReserved1 : 1;
		unsigned reserved : 24;
	}  _pcDelegateFlags;
	struct {
		unsigned templateCacheIsInvalid : 1;
		unsigned private1 : 1;
		unsigned private2 : 1;
		unsigned inSwipeGesture : 1;
		unsigned reserved : 28;
	}  _pcFlags;
	char* _cancelAnimation;
	NSMutableDictionary* _reuseQueue;
	NSMutableDictionary* _templateCache;
	NSView* _transitionView;
	id _animator;
	NSDictionary* _animationsDictionary;
	id _private;

}

@property (retain) NSString * currentIdentifier;                           //@synthesize currentIdentifier=_currentIdentifier - In the implementation block
@property (assign) NSView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (retain) NSViewController * selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (__weak) id<NSPageControllerDelegate> delegate; 
@property (assign) long long transitionStyle;                              //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (copy) NSArray * arrangedObjects; 
@property (assign) long long selectedIndex; 
@property (copy) NSDictionary * animations; 
+(id)defaultAnimationForKey:(id)arg1 ;
+(void)_performWithoutAnimation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSPageControllerDelegate>)delegate;
-(void)setDelegate:(id<NSPageControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSView *)contentView;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(id)animator;
-(void)setAnimations:(NSDictionary *)arg1 ;
-(Class)_animatorClass;
-(void)setContentView:(NSView *)arg1 ;
-(NSDictionary *)animations;
-(NSArray *)arrangedObjects;
-(void)scrollWheel:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)_startObservingView:(id)arg1 ;
-(void)_stopObservingView:(id)arg1 ;
-(void)_removeFromResponderChainOfView:(id)arg1 ;
-(NSViewController *)selectedViewController;
-(char)_useCachedImageViewsForTransition;
-(id)_snapshotOfViewController:(id)arg1 withSize:(CGSize)arg2 ;
-(id)_snapshotOfView:(id)arg1 ;
-(void)_updateContentView;
-(void)_cachePotentialViewControllers;
-(id)_effectiveContentView;
-(void)removeForwardNavigableObjects;
-(void)_cacheReusableViewController:(id)arg1 identifier:(id)arg2 ;
-(void)_teardownTransitionHierarchy;
-(void)completeTransition;
-(void)navigateBack:(id)arg1 ;
-(void)navigateForward:(id)arg1 ;
-(id)_sourceTransitionView;
-(id)_destinationTransitionView;
-(CGRect)_destinationFrameOfSourceTansitionViewForDirection:(long long)arg1 destinationValid:(char)arg2 ;
-(double)_destinationAlphaOfSourceTansitionViewForDirection:(long long)arg1 destinationValid:(char)arg2 ;
-(double)_destinationAlphaOfFilterTansitionViewForDirection:(long long)arg1 destinationValid:(char)arg2 ;
-(void)_setupTransitionHierarchyWithSourceView:(id)arg1 frame:(CGRect)arg2 destinationView:(id)arg3 frame:(CGRect)arg4 forDirection:(long long)arg5 destinationValid:(char)arg6 ;
-(void)_performAnimationWithDirection:(long long)arg1 destinationFrame:(CGRect)arg2 ;
-(char)_terminateCurrentAnimation;
-(id)_makeViewControllerWithIdentifier:(id)arg1 ;
-(CGRect)_frameOfRepresentedObjectFromDelegate:(id)arg1 defaultFrame:(CGRect)arg2 ;
-(void)_prepareViewController:(id)arg1 withObject:(id)arg2 ;
-(void)_animateImage:(id)arg1 frame:(CGRect)arg2 toImage:(id)arg3 frame:(CGRect)arg4 direction:(long long)arg5 ;
-(void)_animateView:(id)arg1 frame:(CGRect)arg2 toView:(id)arg3 frame:(CGRect)arg4 direction:(long long)arg5 ;
-(long long)transitionStyle;
-(void)_cacheViewController:(id)arg1 withSize:(CGSize)arg2 toCompletionHandler:(/*^block*/id)arg3 ;
-(double)_destinationAlphaOfDestinationTransitionViewForDirection:(long long)arg1 ;
-(void)_viewFrameChanged:(id)arg1 ;
-(NSString *)currentIdentifier;
-(void)setCurrentIdentifier:(NSString *)arg1 ;
-(void)setSelectedViewController:(NSViewController *)arg1 ;
-(char)_cacheViewControllerForRepresentedObjectIfNeeded:(id)arg1 ;
-(void)_updateTemplateImageCache;
-(void)setDontCacheViewControllers:(char)arg1 ;
-(char)dontCacheViewControllers;
-(void)setArrangedObjects:(NSArray *)arg1 ;
-(char)_shouldDrawEdgeShadow;
-(void)_setShouldDrawEdgeShadow:(char)arg1 ;
-(void)navigateForwardToObject:(id)arg1 ;
-(void)hideTransitionView;
-(void)_navigateToIndex:(long long)arg1 animated:(char)arg2 ;
-(void)takeSelectedIndexFrom:(id)arg1 ;
-(id)_cgSnapshotOfView:(id)arg1 ;
-(void)_initializeTransitionViewHierarchy;
-(char)_isInSwipeGesture;
-(void)setTransitionStyle:(long long)arg1 ;
@end

