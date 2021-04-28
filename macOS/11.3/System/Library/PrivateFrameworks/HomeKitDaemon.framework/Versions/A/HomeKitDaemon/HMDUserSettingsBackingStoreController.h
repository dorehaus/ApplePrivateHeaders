/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDataSource.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareMessengerDelegate.h>
#import <libobjc.A.dylib/HMDDatabaseDelegate.h>
#import <libobjc.A.dylib/HMDSettingsBackingStoreController.h>

@protocol OS_os_log, HMDUserSettingsBackingStoreControllerDelegate, OS_dispatch_queue, HMDDatabase, HMDSettingTransactionReceiverProtocol, HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver;
@class NSObject, HMBLocalZone, NSString, HMDLogEventDispatcher, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMBCloudZone, NSUUID;

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController> {

	NSObject*<OS_os_log> _logger;
	unsigned long long _startupSignPost;
	id<HMDUserSettingsBackingStoreControllerDelegate> _delegate;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _zoneName;
	id<HMDDatabase> _database;
	HMDLogEventDispatcher* _logEventDispatcher;
	HMDCloudShareMessenger* _shareMessenger;
	HMDCloudShareParticipantsManager* _participantsManager;
	HMBCloudZone* _cloudZone;
	long long _runState;
	id<HMDSettingTransactionReceiverProtocol> _transactionReceiver;
	id<HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;
	NSUUID* _assistantAccessControlModelID;
	id<HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;
	NSUUID* _mediaContentProfileAccessControlModelID;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * zoneName;                                                                                                  //@synthesize zoneName=_zoneName - In the implementation block
@property (readonly) id<HMDDatabase> database;                                                                                                  //@synthesize database=_database - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                                                                                //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) HMDCloudShareMessenger * shareMessenger;                                                                                   //@synthesize shareMessenger=_shareMessenger - In the implementation block
@property (retain) HMDCloudShareParticipantsManager * participantsManager;                                                                      //@synthesize participantsManager=_participantsManager - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                                                                    //@synthesize cloudZone=_cloudZone - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                                                                    //@synthesize localZone=_localZone - In the implementation block
@property (assign) long long runState;                                                                                                          //@synthesize runState=_runState - In the implementation block
@property (__weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver;                                                               //@synthesize transactionReceiver=_transactionReceiver - In the implementation block
@property (__weak) id<HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver;                                  //@synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver - In the implementation block
@property (copy) NSUUID * assistantAccessControlModelID;                                                                                        //@synthesize assistantAccessControlModelID=_assistantAccessControlModelID - In the implementation block
@property (__weak) id<HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver;              //@synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver - In the implementation block
@property (copy) NSUUID * mediaContentProfileAccessControlModelID;                                                                              //@synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID - In the implementation block
@property (__weak,readonly) id<HMDUserSettingsBackingStoreControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDUserSettingsBackingStoreControllerDelegate>)delegate;
-(void)_invalidate;
-(void)start;
-(id<HMDDatabase>)database;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)zoneName;
-(void)clearParticipants;
-(id)logIdentifier;
-(long long)runState;
-(void)setRunState:(long long)arg1 ;
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(char)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id<HMDSettingTransactionReceiverProtocol>)transactionReceiver;
-(void)_updateRunState:(long long)arg1 ;
-(void)_startWithOwnedZone;
-(void)_startWithSharedZone;
-(void)setAssistantAccessControlModelUpdateReceiver:(id<HMDAssistantAccessControlModelUpdateReceiver>)arg1 ;
-(void)setAssistantAccessControlModelID:(NSUUID *)arg1 ;
-(void)setMediaContentProfileAccessControlModelUpdateReceiver:(id<HMDMediaContentProfileAccessControlModelUpdateReceiver>)arg1 ;
-(void)setMediaContentProfileAccessControlModelID:(NSUUID *)arg1 ;
-(HMDCloudShareParticipantsManager *)participantsManager;
-(void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(char)arg2 error:(id)arg3 ;
-(HMDCloudShareMessenger *)shareMessenger;
-(void)setParticipantsManager:(HMDCloudShareParticipantsManager *)arg1 ;
-(void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5 ;
-(NSUUID *)assistantAccessControlModelID;
-(id<HMDAssistantAccessControlModelUpdateReceiver>)assistantAccessControlModelUpdateReceiver;
-(NSUUID *)mediaContentProfileAccessControlModelID;
-(id<HMDMediaContentProfileAccessControlModelUpdateReceiver>)mediaContentProfileAccessControlModelUpdateReceiver;
-(void)setTransactionReceiver:(id<HMDSettingTransactionReceiverProtocol>)arg1 ;
-(void)runTransaction:(id)arg1 waitForCloudPush:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3 ;
-(void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messengerDidReceiveInvitationRequest:(id)arg1 ;
-(void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(char)arg3 ;
-(void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(char)arg3 ;
-(void)registerForSettingsTransactions:(id)arg1 ;
-(id)settingTransactionWithName:(id)arg1 ;
-(void)runSettingTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runSettingTransaction:(id)arg1 waitForCloudPush:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 home:(id)arg5 shareMessenger:(id)arg6 ;
-(id)loadPrivateUserDataModelWithError:(id*)arg1 ;
-(id)loadSharedUserDataModelWithError:(id*)arg1 ;
-(id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id*)arg2 ;
-(void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2 ;
-(id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id*)arg2 ;
-(void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2 ;
-(void)destroyZone;
-(void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4 ;
-(void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 ;
-(void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4 ;
-(void)deregisterObserverDeviceIdentifier:(id)arg1 ;
-(id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)updateParticipants;
-(id)loadUserSettings;
@end

