/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSDaemonListenerVendor.h>

@protocol PDSCDCachePDSKVStore;
@class PDSConfiguration, PDSXPCServer, PDSCDCacheContainer, PDSBag, PDSEntryStore, PDSUserTracker, PDSCoordinator, PDSRequestQueue, NSString;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor> {

	PDSConfiguration* _configuration;
	PDSXPCServer* _XPCServer;
	PDSCDCacheContainer* _cacheContainer;
	PDSBag* _bag;
	PDSEntryStore* _entryStore;
	id<PDSCDCache><PDSKVStore> _underlyingStorage;
	PDSUserTracker* _userTracker;
	PDSCoordinator* _coordinator;
	PDSRequestQueue* _requestQueue;

}

@property (nonatomic,retain) PDSConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PDSXPCServer * XPCServer;                                         //@synthesize XPCServer=_XPCServer - In the implementation block
@property (nonatomic,retain) PDSCDCacheContainer * cacheContainer;                             //@synthesize cacheContainer=_cacheContainer - In the implementation block
@property (nonatomic,retain) PDSBag * bag;                                                     //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) PDSEntryStore * entryStore;                                //@synthesize entryStore=_entryStore - In the implementation block
@property (assign,nonatomic,__weak) id<PDSCDCache><PDSKVStore> underlyingStorage;              //@synthesize underlyingStorage=_underlyingStorage - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;                                     //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,retain) PDSCoordinator * coordinator;                                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) PDSRequestQueue * requestQueue;                                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(id)initWithConfiguration:(id)arg1 ;
-(PDSConfiguration *)configuration;
-(void)setConfiguration:(PDSConfiguration *)arg1 ;
-(PDSRequestQueue *)requestQueue;
-(PDSCoordinator *)coordinator;
-(void)setCoordinator:(PDSCoordinator *)arg1 ;
-(void)setRequestQueue:(PDSRequestQueue *)arg1 ;
-(PDSBag *)bag;
-(void)setBag:(PDSBag *)arg1 ;
-(void)setCacheContainer:(PDSCDCacheContainer *)arg1 ;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(PDSUserTracker *)userTracker;
-(id)_entryStore;
-(id)_underlyingStorage;
-(void)setXPCServer:(PDSXPCServer *)arg1 ;
-(PDSXPCServer *)XPCServer;
-(id<PDSCDCache><PDSKVStore>)underlyingStorage;
-(PDSCDCacheContainer *)cacheContainer;
-(PDSEntryStore *)entryStore;
-(void)setEntryStore:(PDSEntryStore *)arg1 ;
-(id)remoteListenerForClientIDs:(id)arg1 ;
-(id)remoteListenerForAllClientIDs;
-(id)remoteInternalListener;
-(void)setUnderlyingStorage:(id<PDSCDCache><PDSKVStore>)arg1 ;
@end

