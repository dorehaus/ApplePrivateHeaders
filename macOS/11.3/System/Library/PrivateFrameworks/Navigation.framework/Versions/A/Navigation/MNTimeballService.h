/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTimeballServiceProxyDelegate.h>

@protocol MNTimeballServiceProxyInterface;
@class NSMapTable, NSLock, NSMutableDictionary, MNObserverHashTable, NSString;

@interface MNTimeballService : NSObject <MNTimeballServiceProxyDelegate> {

	id<MNTimeballServiceProxyInterface> _proxy;
	NSMapTable* _handlerMap;
	NSLock* _subscribersLock;
	NSMutableDictionary* _subscribersPerDestination;
	MNObserverHashTable* _leechers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)completedUpdateForHandlerID:(id)arg1 ;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2 ;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(id)_addHandler:(/*^block*/id)arg1 ;
-(void)removeSubscriber:(id)arg1 forDestination:(id)arg2 ;
-(/*^block*/id)_handlerForID:(id)arg1 ;
-(void)_removeHandlerWithID:(id)arg1 ;
-(id)initWithClientID:(id)arg1 ;
-(void)requestRoutingOptions:(long long)arg1 forDestination:(id)arg2 freshness:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addSubscriber:(id)arg1 forDestination:(id)arg2 options:(long long)arg3 refreshPolicy:(unsigned long long)arg4 ;
-(void)removeSubscriberForAllDestinations:(id)arg1 ;
-(void)startLeechingDestinationUpdates:(id)arg1 ;
-(void)stopLeechingDestinationUpdates:(id)arg1 ;
@end

