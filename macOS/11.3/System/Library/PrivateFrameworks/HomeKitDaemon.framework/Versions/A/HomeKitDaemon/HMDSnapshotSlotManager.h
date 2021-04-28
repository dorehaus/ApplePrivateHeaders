/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSMapTable, HMDAccessory, NSObject, HMFMessageDispatcher, NSString, NSMutableArray, HMDNotificationRegistration, HMDSnapshotFile, NSDictionary;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging> {

	NSUUID* _uniqueIdentifier;
	NSMapTable* _snapshotSlots;
	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSString* _imageCacheDirectory;
	NSMutableArray* _filesToCleanup;
	HMDNotificationRegistration* _notificationRegistration;
	HMDSnapshotFile* _mostRecentSnapshot;
	NSString* _logIdentifier;

}

@property (nonatomic,readonly) NSString * logIdentifier;                         //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * encodedMostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)uniqueIdentifier;
-(NSString *)logIdentifier;
-(void)registerForMessages;
-(void)handleProcessStateChange:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6 ;
-(void)handleReleaseSnapshot:(id)arg1 ;
-(id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 updateGenerationCounter:(char)arg3 ;
-(NSDictionary *)encodedMostRecentSnapshot;
-(id)encodedMostRecentSnapshotForMessage:(id)arg1 ;
-(void)backboardServicesRelaunched:(id)arg1 ;
@end

