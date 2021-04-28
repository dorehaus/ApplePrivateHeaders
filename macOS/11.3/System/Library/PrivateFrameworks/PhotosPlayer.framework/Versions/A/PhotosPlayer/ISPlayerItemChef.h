/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISPlayerItemChef : NSObject {

	NSOperationQueue* __operationQueue;
	NSObject*<OS_dispatch_queue> __isolationQueue;
	NSMutableDictionary* __operationsByRequestID;
	long long __currentRequestID;

}

@property (nonatomic,readonly) NSOperationQueue * _operationQueue;                                  //@synthesize _operationQueue=__operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _isolationQueue;                        //@synthesize _isolationQueue=__isolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _operationsByRequestID;                        //@synthesize _operationsByRequestID=__operationsByRequestID - In the implementation block
@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultChef;
-(id)init;
-(NSOperationQueue *)_operationQueue;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(SCD_Struct_IS1)arg2 trimmedTimeRange:(SCD_Struct_IS7)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1 ;
-(NSMutableDictionary *)_operationsByRequestID;
-(long long)_currentRequestID;
-(long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS7)arg2 photoTime:(SCD_Struct_IS1)arg3 includeVideo:(char)arg4 includeAudio:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)_setCurrentRequestID:(long long)arg1 ;
@end
