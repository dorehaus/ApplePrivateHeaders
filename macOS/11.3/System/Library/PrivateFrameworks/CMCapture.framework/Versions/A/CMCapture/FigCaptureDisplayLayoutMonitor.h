/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	NSMutableArray* _obscuredApps;
	NSMutableArray* _transitioningApps;
	NSMutableArray* _pipApps;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (getter=isOnHomeScreen,nonatomic,readonly) char onHomeScreen; 
@property (getter=isOnLockScreen,nonatomic,readonly) char onLockScreen; 
+(void)initialize;
+(id)sharedDisplayLayoutMonitor;
-(void)dealloc;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(char)isOnHomeScreen;
-(id)initWithFBSDisplayLayoutMonitorCreateFunction:(/*function pointer*/void*)arg1 ;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 obscuredApps:(id)arg2 transitioningApps:(id)arg3 pipApps:(id)arg4 ;
-(char)isOnLockScreen;
@end
