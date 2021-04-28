/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSError, NSDictionary, NSData, NSArray, NSNumber, NSString, NSOrderedSet;

@interface SSVStoreDownloadQueueResponse : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableOrderedSet* _downloads;
	NSError* _error;
	NSDictionary* _itemErrors;
	NSData* _keybag;
	NSArray* _rangesToLoad;
	char _shouldCancelPurchaseBatch;
	char _triggeredQueueCheck;
	NSNumber* _userIdentifier;
	NSString* _storeCorrelationID;
	NSString* _clientIdentifier;

}

@property (readonly) NSOrderedSet * downloads; 
@property (assign) NSString * storeCorrelationID;               //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
@property (retain) NSError * error; 
@property (readonly) NSData * keybag; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) char shouldCancelPurchaseBatch; 
@property (assign) char triggeredQueueCheck; 
@property (readonly) NSNumber * userIdentifier; 
@property (assign) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(id)init;
-(NSError *)error;
-(NSNumber *)userIdentifier;
-(void)setError:(NSError *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(char)shouldCancelPurchaseBatch;
-(NSOrderedSet *)downloads;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 ;
-(NSData *)keybag;
-(NSString *)storeCorrelationID;
-(id)_initStoreDownloadQueueResponse;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3 ;
-(id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2 ;
-(id)initWithError:(id)arg1 userIdentifier:(id)arg2 ;
-(id)errorForItemIdentifier:(id)arg1 ;
-(NSArray *)rangesToLoad;
-(void)setShouldCancelPurchaseBatch:(char)arg1 ;
-(void)setTriggeredQueueCheck:(char)arg1 ;
-(char)triggeredQueueCheck;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
@end

