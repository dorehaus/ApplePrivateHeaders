/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	char _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) NSDictionary * existingBagDictionary; 
@property (readonly) NSString * storeFrontIdentifier;                   //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
+(id)URLBagForContext:(id)arg1 ;
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_connection;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)existingBagDictionary;
@end

