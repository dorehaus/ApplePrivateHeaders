/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@class GEOObserverHashTable, NSMutableDictionary, IDSBatchIDQueryController, NSMutableSet, NSTimer, NSString;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate> {

	GEOObserverHashTable* _observers;
	NSMutableDictionary* _identifierToShareETAStatus;
	NSMutableDictionary* _identifierToMessagesStatus;
	IDSBatchIDQueryController* _messagesBatchController;
	IDSBatchIDQueryController* _etaBatchController;
	NSMutableSet* _etaFetchQueue;
	NSMutableSet* _messagesFetchQueue;
	NSTimer* _retryAfterBackoffTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFetcher;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)notifyObservers;
-(unsigned long long)capabilityLevelForContact:(id)arg1 ;
-(void)requestCapabilityLevelsForContacts:(id)arg1 ;
-(void)fetchCapabilityLevelForContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchQueueDidUpdate;
-(char)processEtaDictionary:(id)arg1 ;
-(char)processMessagesDictionary:(id)arg1 ;
-(void)cancelCapabilityLevelRequestForContact:(id)arg1 ;
@end
