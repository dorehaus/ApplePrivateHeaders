/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _DKThrottledActivity;

@interface _DKCloudUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	_DKThrottledActivity* _activityThrottler;
	char _supportsDeviceToDeviceEncryption;
	char _isSingleDevice;

}

@property (nonatomic,readonly) char isSingleDevice; 
@property (nonatomic,readonly) char isCloudSyncAvailable; 
@property (nonatomic,readonly) char isSiriCloudSyncEnabled; 
@property (nonatomic,readonly) char supportsDeviceToDeviceEncryption; 
+(id)sharedInstance;
+(char)isUnitTesting;
+(char)isCloudKitEnabled;
+(char)isSyncAvailableAndEnabledWithVerboseLogging:(char)arg1 ;
+(id)containerIdentifier;
+(void)setCloudKitEnabled:(char)arg1 ;
+(void)setUnitTesting:(char)arg1 ;
+(char)isSyncAvailableAndEnabled;
-(void)dealloc;
-(id)init;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(char)isCloudSyncAvailable;
-(char)isSiriCloudSyncEnabled;
-(void)_accountDidChange:(id)arg1 ;
-(char)supportsDeviceToDeviceEncryption;
-(void)setCloudSyncAvailable:(char)arg1 ;
-(char)isSingleDevice;
@end
