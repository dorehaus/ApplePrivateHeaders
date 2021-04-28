/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_source;
@class ICURLBag, NSObject, ICUserIdentityStore, NSMutableDictionary, NSString;

@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver> {

	ICURLBag* _bag;
	NSObject*<OS_dispatch_source> _bagExpirationTimer;
	ICUserIdentityStore* _identityStore;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (readonly) ICURLBag * bag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBagMonitor;
-(void)dealloc;
-(NSString *)description;
-(id)_init;
-(id)_description;
-(ICURLBag *)bag;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)beginObservingBagWithHandler:(/*^block*/id)arg1 ;
-(void)endObservingBagWithToken:(id)arg1 ;
-(void)_invalidateBagExpirationTimer;
-(void)_scheduleBagExpirationTimerForDate:(id)arg1 ;
-(void)_handleBagExpirationTimerFired;
-(void)_beginObservingBag;
-(void)_endObservingBag;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(void)_requestBagWithPolicy:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateWithBag:(id)arg1 ;
@end

