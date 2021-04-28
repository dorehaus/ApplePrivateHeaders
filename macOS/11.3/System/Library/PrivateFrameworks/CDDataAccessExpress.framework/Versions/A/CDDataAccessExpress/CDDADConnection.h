/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/Versions/A/CDDataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CDDADConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _muckingWithConn;
	NSObject*<OS_dispatch_queue> _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightCalendarAvailabilityRequests;
	NSMutableDictionary* _inFlightCalendarDirectorySearches;
	NSMutableDictionary* _inFlightShareRequests;
	NSMutableDictionary* _inFlightOofSettingsRequests;
	char _registered;

}

@property (assign,nonatomic) char registered;              //@synthesize registered=_registered - In the implementation block
+(id)sharedConnection;
+(unsigned long long)_nextStopMonitoringStatusToken;
+(void)setShouldIgnoreAccountChanges;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_connection;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)_initializeConnection;
-(void)handleURL:(id)arg1 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(char)registerForInterrogationWithBlock:(/*^block*/id)arg1 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(char)arg3 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(char)arg3 isUserRequested:(char)arg4 ;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(char)arg4 ;
-(void)_tearDownInFlightObjects;
-(void)_initializeXPCConnection:(id)arg1 ;
-(void)_serverDiedWithReason:(id)arg1 ;
-(void)_dispatchMessage:(id)arg1 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)reallyRegisterForInterrogation;
-(char)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(char)arg3 ;
-(char)watchFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2 persistent:(char)arg3 ;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(char)arg3 ;
-(char)_validateXPCReply:(id)arg1 ;
-(char)resumeWatchingFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(char)arg1 withToken:(unsigned long long)arg2 waitForReply:(char)arg3 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(char)arg4 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(char)arg3 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(char)arg3 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(char)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(char)arg3 ;
-(void)_registerForAppResumedNotification;
-(void)resetTimersAndWarnings;
-(void)_foldersUpdated:(id)arg1 ;
-(void)_policyKeyChanged:(id)arg1 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_folderChangeFinished:(id)arg1 ;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(void)_downloadProgress:(id)arg1 ;
-(void)_downloadFinished:(id)arg1 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(void)_oofSettingsRequestsFinished:(id)arg1 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(void)_calendarAvailabilityRequestFinished:(id)arg1 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)_calendarDirectorySearchFinished:(id)arg1 ;
-(void)_initializeConnectionWithXPCEndpoint:(id)arg1 ;
-(char)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)requestPolicyUpdateForAccountID:(id)arg1 ;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgents;
-(void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgentsSync;
-(void)removeStoresForAccountWithID:(id)arg1 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 ;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(char)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(char)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(void)reportFolderItemsSyncSuccess:(char)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(char)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(id)statusReports;
-(void)fillOutCurrentEASTimeZoneInfo;
-(id)activeSyncDeviceIdentifier;
-(char)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(char)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end

