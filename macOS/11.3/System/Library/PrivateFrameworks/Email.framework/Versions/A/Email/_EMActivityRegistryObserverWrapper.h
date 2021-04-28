/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EMActivityObserver_xpc.h>

@protocol EFCancelable, EMActivityObserver;
@class NSMutableDictionary, EMRemoteConnection, EMActivityRegistry, NSArray, NSString;

@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc> {

	id<EFCancelable> _observerCancelable;
	NSMutableDictionary* _trackedActivities;
	os_unfair_lock_s _lock;
	EMRemoteConnection* _connection;
	EMActivityRegistry* _registry;
	id<EMActivityObserver> _observer;

}

@property (retain) EMRemoteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (__weak) EMActivityRegistry * registry;                   //@synthesize registry=_registry - In the implementation block
@property (__weak) id<EMActivityObserver> observer;                 //@synthesize observer=_observer - In the implementation block
@property (retain) NSArray * activities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(void)cancel;
-(void)setObserver:(id<EMActivityObserver>)arg1 ;
-(NSArray *)activities;
-(id<EMActivityObserver>)observer;
-(EMActivityRegistry *)registry;
-(void)setActivities:(NSArray *)arg1 ;
-(void)removedActivityWithID:(id)arg1 ;
-(void)startedActivity:(id)arg1 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3 ;
-(void)_resetWithCancelable:(id)arg1 ;
-(void)_recover;
-(void)_startObservingIfNecessary;
-(id)activityWithObjectID:(id)arg1 ;
-(id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3 ;
-(void)setRegistry:(EMActivityRegistry *)arg1 ;
@end

