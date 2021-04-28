/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSBundleInfo.h>

@protocol OS_dispatch_queue;
@class LSApplicationProxy, NSObject, FBSApplicationPlaceholderProgress, NSMutableSet, FBSApplicationLibrary;

@interface FBSApplicationPlaceholder : FBSBundleInfo {

	LSApplicationProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSApplicationPlaceholderProgress* _queue_progress;
	NSMutableSet* _queue_observers;
	FBSApplicationLibrary* _appLibrary;

}

@property (setter=_setProxy:,getter=_proxy,nonatomic,retain) LSApplicationProxy * proxy; 
@property (assign,nonatomic,__weak) FBSApplicationLibrary * appLibrary;                               //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) id<FBSApplicationPlaceholderProgress> progress; 
@property (getter=isPrioritizable,nonatomic,readonly) char prioritizable; 
@property (getter=isPausable,nonatomic,readonly) char pausable; 
@property (getter=isResumable,nonatomic,readonly) char resumable; 
@property (getter=isCancellable,nonatomic,readonly) char cancellable; 
+(id)_callOutQueue;
+(id)_sharedQueue;
-(void)dealloc;
-(char)resume;
-(unsigned long long)installType;
-(char)isRestricted;
-(unsigned long long)installPhase;
-(char)pause;
-(unsigned long long)installState;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(char)cancel;
-(char)prioritize;
-(id)_proxy;
-(id<FBSApplicationPlaceholderProgress>)progress;
-(char)isCancellable;
-(char)isPausable;
-(char)isPrioritizable;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(void)_setProxy:(id)arg1 force:(char)arg2 ;
-(char)_canPerformAction:(unsigned long long)arg1 ;
-(char)_performAction:(unsigned long long)arg1 withResult:(/*^block*/id)arg2 ;
-(double)percentComplete;
-(void)_dispatchToObserversWithBlock:(/*^block*/id)arg1 ;
-(char)_queue_isCloudDemoted;
-(unsigned long long)_queue_supportedActions;
-(char)_queue_canPerformAction:(unsigned long long)arg1 ;
-(void)_pauseWithResult:(/*^block*/id)arg1 ;
-(void)_resumeWithResult:(/*^block*/id)arg1 ;
-(void)_cancelWithResult:(/*^block*/id)arg1 ;
-(FBSApplicationLibrary *)appLibrary;
-(void)_prioritizeWithResult:(/*^block*/id)arg1 ;
-(void)_queue_setProxy:(id)arg1 force:(char)arg2 ;
-(void)_reloadFromProxy:(id)arg1 ;
-(void)_queue_noteChangedSignificantly:(id)arg1 ;
-(void)_sendToObserversPlaceholderProgressDidUpdate;
-(void)_sendToObserversPlaceholderDidChangeSignificantly;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(char)isResumable;
-(char)prioritizeWithResult:(/*^block*/id)arg1 ;
-(char)pauseWithResult:(/*^block*/id)arg1 ;
-(char)resumeWithResult:(/*^block*/id)arg1 ;
-(char)cancelWithResult:(/*^block*/id)arg1 ;
-(void)_setProxy:(id)arg1 ;
-(void)_reloadProgress;
-(void)_noteChangedSignificantly;
-(void)setAppLibrary:(FBSApplicationLibrary *)arg1 ;
@end

