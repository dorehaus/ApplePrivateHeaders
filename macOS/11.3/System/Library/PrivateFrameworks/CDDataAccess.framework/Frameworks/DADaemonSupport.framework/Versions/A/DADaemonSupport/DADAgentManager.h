/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/Versions/A/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DADaemonSupport/DADaemonSupport-Structs.h>
@class NSArray, NSObject, NSMutableDictionary, NSDictionary, DADBuddyStateObserver, NSMutableArray, DADREMLocalDBWatcher;

@interface DADAgentManager : NSObject {

	NSArray* _activeAgents;
	NSObject*<OS_dispatch_queue> _activeAgentsQueue;
	NSMutableDictionary* _watchedIDs;
	unsigned _pmNotifier;
	IONotificationPortRef _pmPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	/*^block*/id _startAgentsWhenSystemReadyBlock;
	NSObject*<OS_dispatch_queue> _CTCellularUsagePolicyNotificationQ;
	CTServerConnectionRef _ctServerConnection;
	NSDictionary* _wirelessPolicies;
	int _pendingAccountSetupCount;
	DADBuddyStateObserver* _buddyStateObserver;
	NSMutableArray* _subCalHandlers;
	unsigned long long _nextDisableMonitoringAgentsToken;
	NSMutableDictionary* _disableMonitoringAgentsTokens;

}

@property (nonatomic,retain) DADREMLocalDBWatcher * rem_localDBWatcher; 
@property (nonatomic,copy) id rem_xpcEventHandler; 
@property (nonatomic,retain) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider; 
@property (nonatomic,retain) id<DADREMStoreProvider> rem_storeProvider; 
@property (nonatomic,retain) NSMutableArray * subCalHandlers;                                                                  //@synthesize subCalHandlers=_subCalHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long nextDisableMonitoringAgentsToken;                                              //@synthesize nextDisableMonitoringAgentsToken=_nextDisableMonitoringAgentsToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * disableMonitoringAgentsTokens;                                            //@synthesize disableMonitoringAgentsTokens=_disableMonitoringAgentsTokens - In the implementation block
@property (nonatomic,readonly) NSArray * activeAgents; 
+(id)sharedManager;
+(char)wirelessPolicy:(id)arg1 isMorePermissiveThanPolicy:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)stateString;
-(id<DADREMStoreProvider>)rem_storeProvider;
-(id<DADREMUserNotificationPresentingProvider>)rem_userNotificationPresentingProvider;
-(char)_systemMayNowBeReady;
-(DADREMLocalDBWatcher *)rem_localDBWatcher;
-(void)setRem_localDBWatcher:(DADREMLocalDBWatcher *)arg1 ;
-(id)rem_xpcEventHandler;
-(void)setRem_xpcEventHandler:(id)arg1 ;
-(NSArray *)activeAgents;
-(id)_accountInfoPath;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(void)unregisterForBuddy;
-(NSMutableDictionary *)disableMonitoringAgentsTokens;
-(void)_loadAndStartMonitoringAgents:(char)arg1 ;
-(void)_handleCellularDataUsageChangedNotification;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(char)arg3 ;
-(void)loadAgents:(char)arg1 ;
-(void)_clearOrphanedStores;
-(void)_registerForCTDataUsageNotificaiton;
-(void)registerForBuddy;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(void)saveAndReleaseAgents;
-(void)_addAccountAggdEntries;
-(unsigned long long)nextDisableMonitoringAgentsToken;
-(void)setNextDisableMonitoringAgentsToken:(unsigned long long)arg1 ;
-(void)_stopMonitoringAndSaveAgents;
-(char)_hasDataclassWeCareAbout:(id)arg1 ;
-(id)agentWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(id)_configFileForAgent:(id)arg1 ;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(char)startMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(char)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(char)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(char)resumeMonitoringAccountID:(id)arg1 syncKeyMap:(id)arg2 ;
-(void)enableMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(unsigned long long)disableMonitoringAgents;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(char)arg3 isUserRequested:(char)arg4 ;
-(char)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(char)arg4 ;
-(char)updateContentsOfAllFoldersForAccountIDs:(id)arg1 ;
-(id)activeAccountBundleIDs;
-(char)hasEASAccountConfigured;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)addPendingAccountSetup;
-(void)removePendingAccountSetup;
-(char)hasPendingAccountSetup;
-(char)hasActiveAccounts;
-(NSMutableArray *)subCalHandlers;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(void)setRem_userNotificationPresentingProvider:(id<DADREMUserNotificationPresentingProvider>)arg1 ;
-(void)setRem_storeProvider:(id<DADREMStoreProvider>)arg1 ;
@end

