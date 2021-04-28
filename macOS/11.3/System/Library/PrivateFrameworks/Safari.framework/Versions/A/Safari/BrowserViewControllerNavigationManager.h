/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BrowserViewControllerLoading;
@class NSHashTable, NSMutableOrderedSet, NSTimer;

@interface BrowserViewControllerNavigationManager : NSObject {

	NSHashTable* _loadingBrowserViewControllers;
	NSMutableOrderedSet* _browserViewControllersWithQueuedNavigation;
	id<BrowserViewControllerLoading> _mostRecentlyLoadingBrowserViewController;
	NSTimer* _dequeueTimer;
	double _queuedRequestInitialDelay;
	double _queuedRequestDelay;

}

@property (nonatomic,readonly) char hasQueuedNavigations; 
@property (nonatomic,readonly) unsigned long long numberOfLoadingBrowserViewControllers; 
-(id)init;
-(void)removeQueuedNavigationForBrowserViewController:(id)arg1 ;
-(void)browserViewControllerDidFinishLoading:(id)arg1 ;
-(void)browserViewControllerDidBeginLoading:(id)arg1 ;
-(void)enqueueNavigationForBrowserViewController:(id)arg1 ;
-(char)hasQueuedNavigations;
-(unsigned long long)numberOfLoadingBrowserViewControllers;
-(char)isNavigationPendingForBrowserViewController:(id)arg1 ;
-(void)_dequeueNavigationIfPossible;
-(void)_setUpDequeueTimerIfNeeded;
-(long long)_currentThermalPressureLevel;
-(unsigned long long)_maxAllowedLoadingWebViews;
-(char)_shouldDequeueNavigation;
-(char)isBrowserViewControllerLoading:(id)arg1 ;
@end

