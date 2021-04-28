/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;
@class NSObject, NSMutableDictionary, NSString;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUIDSIDQueryController> _queryController;
	NSMutableDictionary* _idsFaceTimeVideoStatuses;
	NSMutableDictionary* _idsFaceTimeAudioStatuses;
	NSMutableDictionary* _idsFaceTimeMultiwayStatuses;
	id<TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
	id<TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
	id<TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;
	/*^block*/id _batchQueryControllerCreationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUIDSIDQueryController> queryController;                                    //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeVideoStatuses;                                //@synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeAudioStatuses;                                //@synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeMultiwayStatuses;                             //@synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;                 //@synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;                 //@synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;              //@synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController - In the implementation block
@property (nonatomic,copy) id batchQueryControllerCreationBlock;                                              //@synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(char)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(id)initWithQueryController:(id)arg1 ;
-(void)cancelQueries;
-(id)batchQueryControllerCreationBlock;
-(char)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(char)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(char)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(NSMutableDictionary *)idsFaceTimeVideoStatuses;
-(NSMutableDictionary *)idsFaceTimeAudioStatuses;
-(NSMutableDictionary *)idsFaceTimeMultiwayStatuses;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchVideoController;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchAudioController;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchMultiwayController;
-(id<TUIDSIDQueryController>)queryController;
-(char)isFaceTimeVideoAvailableForItem:(id)arg1 ;
-(char)isFaceTimeAudioAvailableForItem:(id)arg1 ;
-(char)isFaceTimeMultiwayAvailableForItem:(id)arg1 ;
-(void)beginQueryWithDestinations:(id)arg1 ;
-(void)setBatchQuerySearchVideoController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQuerySearchAudioController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQuerySearchMultiwayController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQueryControllerCreationBlock:(id)arg1 ;
@end
