/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString, HMDEventCountersManager, HMDEventFlagsManager;

@interface HMDEventAggregationAnalysisLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDAWDLogEvent> {

	char _cloudSyncDecryptionFailed;
	char _cloudSyncLastDecryptionFailed;
	char _cloudSyncMaximumDelayReached;
	char _activeDay;
	NSString* _dataSyncState;
	unsigned long long _processLaunchCount;
	unsigned long long _jetsamReasonHighwaterCount;
	unsigned long long _jetsamReasonProcessLimitCount;
	unsigned long long _jetsamReasonUnknownKillCount;
	unsigned long long _jetsamReasonOtherCount;
	unsigned long long _processMemoryPressureStateWarningCount;
	unsigned long long _processMemoryPressureStateCriticalCount;
	unsigned long long _sampledAverageProcessMemoryUsage;
	unsigned long long _sampledPeakProcessMemoryUsage;
	unsigned long long _remoteMessagesSentCount;
	unsigned long long _remoteMessagesReceivedCount;
	unsigned long long _txIDSMessagesCount;
	unsigned long long _rxIDSMessagesCount;
	unsigned long long _txIDSProxyMessagesCount;
	unsigned long long _rxIDSProxyMessagesCount;
	unsigned long long _txLoxyMessagesCount;
	unsigned long long _rxLoxyMessagesCount;
	unsigned long long _txSecureMessagesCount;
	unsigned long long _rxSecureMessagesCount;
	unsigned long long _cloudSyncPushCount;
	unsigned long long _cloudSyncFetchCount;
	unsigned long long _cloudSyncUploadCount;
	unsigned long long _cloudSyncUploadErrorCount;
	unsigned long long _homeDataBytesFetched;
	unsigned long long _homeDataBytesPushed;
	unsigned long long _legacyHomeDataBytesFetched;
	unsigned long long _legacyHomeDataBytesPushed;
	unsigned long long _numReadSiri;
	unsigned long long _numWriteSiri;
	unsigned long long _numReadFirstPartyApp;
	unsigned long long _numWriteFirstPartyApp;
	unsigned long long _numReadThirdPartyApp;
	unsigned long long _numWriteThirdPartyApp;
	unsigned long long _numReadInternalRequested;
	unsigned long long _numWriteInternalRequested;
	unsigned long long _numReadUnknownSource;
	unsigned long long _numWriteUnknownSource;
	unsigned long long _numReadWriteSuccessIP;
	unsigned long long _numReadWriteFailureIP;
	unsigned long long _numReadWriteSuccessBT;
	unsigned long long _numReadWriteFailureBT;
	unsigned long long _numReadWriteSuccessIDS;
	unsigned long long _numReadWriteFailureIDS;
	unsigned long long _averageLatencyIP;
	unsigned long long _averageLatencyBT;
	unsigned long long _averageLatencyIDS;
	unsigned long long _numAccessoriesAdded;
	unsigned long long _numScenesAdded;
	unsigned long long _numTriggersAdded;
	unsigned long long _numShortcutsAdded;
	unsigned long long _numScenesUserRun;
	unsigned long long _numShortcutsRun;
	unsigned long long _numTriggersFired;
	unsigned long long _hapIPInvalidationCount;
	unsigned long long _hapIPSentHTTPRequestsCount;
	unsigned long long _hapIPReceivedHTTPResponsesCount;
	unsigned long long _hapIPReceivedHTTPEventCount;
	unsigned long long _hapBTLEConnectionsCount;
	unsigned long long _hapBTLEConnectionPerReasonsCount;
	unsigned long long _hapBTLEDiscoveriesCount;
	unsigned long long _cameraStreamStartSuccessCount;
	unsigned long long _cameraStreamStartFailureCount;
	unsigned long long _fetchCameraClipVideoSegmentAssetCount;
	unsigned long long _acceptedXPCRequestsCount;
	unsigned long long _erroredXPCRequestsCount;
	unsigned long long _sentXPCNotificationsCount;
	unsigned long long _filteredXPCNotificationsCount;
	unsigned long long _cameraRecordingReachabilityChangedCount;
	unsigned long long _cameraRecordingReachabilityOfflineDuration;
	unsigned long long _homeHubReachabilityChangedCount;
	unsigned long long _ipAccessoryReachabilityChangedCount;
	unsigned long long _activeDaysPerMonthCount;
	unsigned long long _peakConcurrentIPAccessoryUpdateStaging;
	unsigned long long _peakConcurrentIPAccessoryUpdateApply;
	unsigned long long _peakConcurrentBLEAccessoryUpdateStaging;
	unsigned long long _peakConcurrentBLEAccessoryUpdateApply;
	unsigned long long _peakConcurrentThreadAccessoryUpdateStaging;
	unsigned long long _peakConcurrentThreadAccessoryUpdateApply;
	HMDEventCountersManager* _eventCountersManager;
	HMDEventFlagsManager* _eventFlagsManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDEventCountersManager * eventCountersManager;                     //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
@property (nonatomic,retain) HMDEventFlagsManager * eventFlagsManager;                           //@synthesize eventFlagsManager=_eventFlagsManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSyncState;                                    //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) unsigned long long processLaunchCount;                                      //@synthesize processLaunchCount=_processLaunchCount - In the implementation block
@property (readonly) unsigned long long jetsamReasonHighwaterCount;                              //@synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount - In the implementation block
@property (readonly) unsigned long long jetsamReasonProcessLimitCount;                           //@synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount - In the implementation block
@property (readonly) unsigned long long jetsamReasonUnknownKillCount;                            //@synthesize jetsamReasonUnknownKillCount=_jetsamReasonUnknownKillCount - In the implementation block
@property (readonly) unsigned long long jetsamReasonOtherCount;                                  //@synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount - In the implementation block
@property (readonly) unsigned long long processMemoryPressureStateWarningCount;                  //@synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount - In the implementation block
@property (readonly) unsigned long long processMemoryPressureStateCriticalCount;                 //@synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount - In the implementation block
@property (readonly) unsigned long long sampledAverageProcessMemoryUsage;                        //@synthesize sampledAverageProcessMemoryUsage=_sampledAverageProcessMemoryUsage - In the implementation block
@property (readonly) unsigned long long sampledPeakProcessMemoryUsage;                           //@synthesize sampledPeakProcessMemoryUsage=_sampledPeakProcessMemoryUsage - In the implementation block
@property (readonly) unsigned long long remoteMessagesSentCount;                                 //@synthesize remoteMessagesSentCount=_remoteMessagesSentCount - In the implementation block
@property (readonly) unsigned long long remoteMessagesReceivedCount;                             //@synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount - In the implementation block
@property (readonly) unsigned long long txIDSMessagesCount;                                      //@synthesize txIDSMessagesCount=_txIDSMessagesCount - In the implementation block
@property (readonly) unsigned long long rxIDSMessagesCount;                                      //@synthesize rxIDSMessagesCount=_rxIDSMessagesCount - In the implementation block
@property (readonly) unsigned long long txIDSProxyMessagesCount;                                 //@synthesize txIDSProxyMessagesCount=_txIDSProxyMessagesCount - In the implementation block
@property (readonly) unsigned long long rxIDSProxyMessagesCount;                                 //@synthesize rxIDSProxyMessagesCount=_rxIDSProxyMessagesCount - In the implementation block
@property (readonly) unsigned long long txLoxyMessagesCount;                                     //@synthesize txLoxyMessagesCount=_txLoxyMessagesCount - In the implementation block
@property (readonly) unsigned long long rxLoxyMessagesCount;                                     //@synthesize rxLoxyMessagesCount=_rxLoxyMessagesCount - In the implementation block
@property (readonly) unsigned long long txSecureMessagesCount;                                   //@synthesize txSecureMessagesCount=_txSecureMessagesCount - In the implementation block
@property (readonly) unsigned long long rxSecureMessagesCount;                                   //@synthesize rxSecureMessagesCount=_rxSecureMessagesCount - In the implementation block
@property (readonly) unsigned long long cloudSyncPushCount;                                      //@synthesize cloudSyncPushCount=_cloudSyncPushCount - In the implementation block
@property (readonly) unsigned long long cloudSyncFetchCount;                                     //@synthesize cloudSyncFetchCount=_cloudSyncFetchCount - In the implementation block
@property (readonly) unsigned long long cloudSyncUploadCount;                                    //@synthesize cloudSyncUploadCount=_cloudSyncUploadCount - In the implementation block
@property (readonly) unsigned long long cloudSyncUploadErrorCount;                               //@synthesize cloudSyncUploadErrorCount=_cloudSyncUploadErrorCount - In the implementation block
@property (readonly) unsigned long long homeDataBytesFetched;                                    //@synthesize homeDataBytesFetched=_homeDataBytesFetched - In the implementation block
@property (readonly) unsigned long long homeDataBytesPushed;                                     //@synthesize homeDataBytesPushed=_homeDataBytesPushed - In the implementation block
@property (readonly) unsigned long long legacyHomeDataBytesFetched;                              //@synthesize legacyHomeDataBytesFetched=_legacyHomeDataBytesFetched - In the implementation block
@property (readonly) unsigned long long legacyHomeDataBytesPushed;                               //@synthesize legacyHomeDataBytesPushed=_legacyHomeDataBytesPushed - In the implementation block
@property (readonly) char cloudSyncDecryptionFailed;                                             //@synthesize cloudSyncDecryptionFailed=_cloudSyncDecryptionFailed - In the implementation block
@property (readonly) char cloudSyncLastDecryptionFailed;                                         //@synthesize cloudSyncLastDecryptionFailed=_cloudSyncLastDecryptionFailed - In the implementation block
@property (readonly) char cloudSyncMaximumDelayReached;                                          //@synthesize cloudSyncMaximumDelayReached=_cloudSyncMaximumDelayReached - In the implementation block
@property (readonly) unsigned long long numReadSiri;                                             //@synthesize numReadSiri=_numReadSiri - In the implementation block
@property (readonly) unsigned long long numWriteSiri;                                            //@synthesize numWriteSiri=_numWriteSiri - In the implementation block
@property (readonly) unsigned long long numReadFirstPartyApp;                                    //@synthesize numReadFirstPartyApp=_numReadFirstPartyApp - In the implementation block
@property (readonly) unsigned long long numWriteFirstPartyApp;                                   //@synthesize numWriteFirstPartyApp=_numWriteFirstPartyApp - In the implementation block
@property (readonly) unsigned long long numReadThirdPartyApp;                                    //@synthesize numReadThirdPartyApp=_numReadThirdPartyApp - In the implementation block
@property (readonly) unsigned long long numWriteThirdPartyApp;                                   //@synthesize numWriteThirdPartyApp=_numWriteThirdPartyApp - In the implementation block
@property (readonly) unsigned long long numReadInternalRequested;                                //@synthesize numReadInternalRequested=_numReadInternalRequested - In the implementation block
@property (readonly) unsigned long long numWriteInternalRequested;                               //@synthesize numWriteInternalRequested=_numWriteInternalRequested - In the implementation block
@property (readonly) unsigned long long numReadUnknownSource;                                    //@synthesize numReadUnknownSource=_numReadUnknownSource - In the implementation block
@property (readonly) unsigned long long numWriteUnknownSource;                                   //@synthesize numWriteUnknownSource=_numWriteUnknownSource - In the implementation block
@property (readonly) unsigned long long numReadWriteSuccessIP;                                   //@synthesize numReadWriteSuccessIP=_numReadWriteSuccessIP - In the implementation block
@property (readonly) unsigned long long numReadWriteFailureIP;                                   //@synthesize numReadWriteFailureIP=_numReadWriteFailureIP - In the implementation block
@property (readonly) unsigned long long numReadWriteSuccessBT;                                   //@synthesize numReadWriteSuccessBT=_numReadWriteSuccessBT - In the implementation block
@property (readonly) unsigned long long numReadWriteFailureBT;                                   //@synthesize numReadWriteFailureBT=_numReadWriteFailureBT - In the implementation block
@property (readonly) unsigned long long numReadWriteSuccessIDS;                                  //@synthesize numReadWriteSuccessIDS=_numReadWriteSuccessIDS - In the implementation block
@property (readonly) unsigned long long numReadWriteFailureIDS;                                  //@synthesize numReadWriteFailureIDS=_numReadWriteFailureIDS - In the implementation block
@property (readonly) unsigned long long averageLatencyIP;                                        //@synthesize averageLatencyIP=_averageLatencyIP - In the implementation block
@property (readonly) unsigned long long averageLatencyBT;                                        //@synthesize averageLatencyBT=_averageLatencyBT - In the implementation block
@property (readonly) unsigned long long averageLatencyIDS;                                       //@synthesize averageLatencyIDS=_averageLatencyIDS - In the implementation block
@property (readonly) unsigned long long numAccessoriesAdded;                                     //@synthesize numAccessoriesAdded=_numAccessoriesAdded - In the implementation block
@property (readonly) unsigned long long numScenesAdded;                                          //@synthesize numScenesAdded=_numScenesAdded - In the implementation block
@property (readonly) unsigned long long numTriggersAdded;                                        //@synthesize numTriggersAdded=_numTriggersAdded - In the implementation block
@property (readonly) unsigned long long numShortcutsAdded;                                       //@synthesize numShortcutsAdded=_numShortcutsAdded - In the implementation block
@property (readonly) unsigned long long numScenesUserRun;                                        //@synthesize numScenesUserRun=_numScenesUserRun - In the implementation block
@property (readonly) unsigned long long numShortcutsRun;                                         //@synthesize numShortcutsRun=_numShortcutsRun - In the implementation block
@property (readonly) unsigned long long numTriggersFired;                                        //@synthesize numTriggersFired=_numTriggersFired - In the implementation block
@property (readonly) unsigned long long hapIPInvalidationCount;                                  //@synthesize hapIPInvalidationCount=_hapIPInvalidationCount - In the implementation block
@property (readonly) unsigned long long hapIPSentHTTPRequestsCount;                              //@synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount - In the implementation block
@property (readonly) unsigned long long hapIPReceivedHTTPResponsesCount;                         //@synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount - In the implementation block
@property (readonly) unsigned long long hapIPReceivedHTTPEventCount;                             //@synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount - In the implementation block
@property (readonly) unsigned long long hapBTLEConnectionsCount;                                 //@synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount - In the implementation block
@property (readonly) unsigned long long hapBTLEConnectionPerReasonsCount;                        //@synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount - In the implementation block
@property (readonly) unsigned long long hapBTLEDiscoveriesCount;                                 //@synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount - In the implementation block
@property (readonly) unsigned long long cameraStreamStartSuccessCount;                           //@synthesize cameraStreamStartSuccessCount=_cameraStreamStartSuccessCount - In the implementation block
@property (readonly) unsigned long long cameraStreamStartFailureCount;                           //@synthesize cameraStreamStartFailureCount=_cameraStreamStartFailureCount - In the implementation block
@property (readonly) unsigned long long fetchCameraClipVideoSegmentAssetCount;                   //@synthesize fetchCameraClipVideoSegmentAssetCount=_fetchCameraClipVideoSegmentAssetCount - In the implementation block
@property (readonly) unsigned long long acceptedXPCRequestsCount;                                //@synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount - In the implementation block
@property (readonly) unsigned long long erroredXPCRequestsCount;                                 //@synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount - In the implementation block
@property (readonly) unsigned long long sentXPCNotificationsCount;                               //@synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount - In the implementation block
@property (readonly) unsigned long long filteredXPCNotificationsCount;                           //@synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount - In the implementation block
@property (readonly) unsigned long long cameraRecordingReachabilityChangedCount;                 //@synthesize cameraRecordingReachabilityChangedCount=_cameraRecordingReachabilityChangedCount - In the implementation block
@property (readonly) unsigned long long cameraRecordingReachabilityOfflineDuration;              //@synthesize cameraRecordingReachabilityOfflineDuration=_cameraRecordingReachabilityOfflineDuration - In the implementation block
@property (readonly) unsigned long long homeHubReachabilityChangedCount;                         //@synthesize homeHubReachabilityChangedCount=_homeHubReachabilityChangedCount - In the implementation block
@property (readonly) unsigned long long ipAccessoryReachabilityChangedCount;                     //@synthesize ipAccessoryReachabilityChangedCount=_ipAccessoryReachabilityChangedCount - In the implementation block
@property (getter=isActiveDay,readonly) char activeDay;                                          //@synthesize activeDay=_activeDay - In the implementation block
@property (readonly) unsigned long long activeDaysPerMonthCount;                                 //@synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount - In the implementation block
@property (readonly) unsigned long long peakConcurrentIPAccessoryUpdateStaging;                  //@synthesize peakConcurrentIPAccessoryUpdateStaging=_peakConcurrentIPAccessoryUpdateStaging - In the implementation block
@property (readonly) unsigned long long peakConcurrentIPAccessoryUpdateApply;                    //@synthesize peakConcurrentIPAccessoryUpdateApply=_peakConcurrentIPAccessoryUpdateApply - In the implementation block
@property (readonly) unsigned long long peakConcurrentBLEAccessoryUpdateStaging;                 //@synthesize peakConcurrentBLEAccessoryUpdateStaging=_peakConcurrentBLEAccessoryUpdateStaging - In the implementation block
@property (readonly) unsigned long long peakConcurrentBLEAccessoryUpdateApply;                   //@synthesize peakConcurrentBLEAccessoryUpdateApply=_peakConcurrentBLEAccessoryUpdateApply - In the implementation block
@property (readonly) unsigned long long peakConcurrentThreadAccessoryUpdateStaging;              //@synthesize peakConcurrentThreadAccessoryUpdateStaging=_peakConcurrentThreadAccessoryUpdateStaging - In the implementation block
@property (readonly) unsigned long long peakConcurrentThreadAccessoryUpdateApply;                //@synthesize peakConcurrentThreadAccessoryUpdateApply=_peakConcurrentThreadAccessoryUpdateApply - In the implementation block
-(NSString *)description;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(char)submitEventWithHomeConfigurationCommonDimensions;
-(unsigned long long)peakConcurrentIPAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentIPAccessoryUpdateApply;
-(unsigned long long)peakConcurrentBLEAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentBLEAccessoryUpdateApply;
-(unsigned long long)peakConcurrentThreadAccessoryUpdateStaging;
-(unsigned long long)peakConcurrentThreadAccessoryUpdateApply;
-(id)initWithDataSyncStateDescription:(id)arg1 eventCountersManager:(id)arg2 eventFlagsManager:(id)arg3 ;
-(HMDEventCountersManager *)eventCountersManager;
-(unsigned long long)numReadWriteSuccessIP;
-(unsigned long long)numReadWriteFailureIP;
-(unsigned long long)numReadWriteSuccessBT;
-(unsigned long long)numReadWriteFailureBT;
-(void)_populateMessageCounters;
-(HMDEventFlagsManager *)eventFlagsManager;
-(void)reviewCloudSyncThresholdBytes:(unsigned long long)arg1 remoteMessageThresholdCount:(unsigned long long)arg2 limitPostInterval:(char)arg3 ;
-(unsigned long long)legacyHomeDataBytesFetched;
-(unsigned long long)legacyHomeDataBytesPushed;
-(unsigned long long)homeDataBytesFetched;
-(unsigned long long)homeDataBytesPushed;
-(unsigned long long)remoteMessagesSentCount;
-(unsigned long long)remoteMessagesReceivedCount;
-(void)presentRadarDialog:(id)arg1 limitPostInterval:(char)arg2 ;
-(void)submitAtDate:(id)arg1 ;
-(unsigned long long)processLaunchCount;
-(unsigned long long)jetsamReasonHighwaterCount;
-(unsigned long long)jetsamReasonProcessLimitCount;
-(unsigned long long)jetsamReasonUnknownKillCount;
-(unsigned long long)jetsamReasonOtherCount;
-(unsigned long long)processMemoryPressureStateWarningCount;
-(unsigned long long)processMemoryPressureStateCriticalCount;
-(unsigned long long)sampledAverageProcessMemoryUsage;
-(unsigned long long)sampledPeakProcessMemoryUsage;
-(unsigned long long)txIDSMessagesCount;
-(unsigned long long)rxIDSMessagesCount;
-(unsigned long long)txIDSProxyMessagesCount;
-(unsigned long long)rxIDSProxyMessagesCount;
-(unsigned long long)txLoxyMessagesCount;
-(unsigned long long)rxLoxyMessagesCount;
-(unsigned long long)txSecureMessagesCount;
-(unsigned long long)rxSecureMessagesCount;
-(unsigned long long)cloudSyncPushCount;
-(unsigned long long)cloudSyncFetchCount;
-(unsigned long long)cloudSyncUploadCount;
-(unsigned long long)cloudSyncUploadErrorCount;
-(unsigned long long)numReadSiri;
-(unsigned long long)numWriteSiri;
-(unsigned long long)numReadFirstPartyApp;
-(unsigned long long)numWriteFirstPartyApp;
-(unsigned long long)numReadThirdPartyApp;
-(unsigned long long)numWriteThirdPartyApp;
-(unsigned long long)averageLatencyIP;
-(unsigned long long)averageLatencyBT;
-(unsigned long long)averageLatencyIDS;
-(unsigned long long)numAccessoriesAdded;
-(unsigned long long)numScenesAdded;
-(unsigned long long)numTriggersAdded;
-(unsigned long long)numShortcutsAdded;
-(unsigned long long)numScenesUserRun;
-(unsigned long long)numShortcutsRun;
-(unsigned long long)numTriggersFired;
-(unsigned long long)hapIPInvalidationCount;
-(unsigned long long)hapIPSentHTTPRequestsCount;
-(unsigned long long)hapIPReceivedHTTPResponsesCount;
-(unsigned long long)hapIPReceivedHTTPEventCount;
-(unsigned long long)hapBTLEConnectionsCount;
-(unsigned long long)hapBTLEConnectionPerReasonsCount;
-(unsigned long long)hapBTLEDiscoveriesCount;
-(unsigned long long)cameraStreamStartSuccessCount;
-(unsigned long long)cameraStreamStartFailureCount;
-(unsigned long long)fetchCameraClipVideoSegmentAssetCount;
-(unsigned long long)acceptedXPCRequestsCount;
-(unsigned long long)erroredXPCRequestsCount;
-(unsigned long long)sentXPCNotificationsCount;
-(unsigned long long)filteredXPCNotificationsCount;
-(unsigned long long)cameraRecordingReachabilityChangedCount;
-(unsigned long long)cameraRecordingReachabilityOfflineDuration;
-(unsigned long long)homeHubReachabilityChangedCount;
-(char)isActiveDay;
-(unsigned long long)activeDaysPerMonthCount;
-(id)initWithDataSyncStateDescription:(id)arg1 ;
-(void)reviewThresholds;
-(char)cloudSyncDecryptionFailed;
-(char)cloudSyncLastDecryptionFailed;
-(char)cloudSyncMaximumDelayReached;
-(unsigned long long)numReadInternalRequested;
-(unsigned long long)numWriteInternalRequested;
-(unsigned long long)numReadUnknownSource;
-(unsigned long long)numWriteUnknownSource;
-(unsigned long long)numReadWriteSuccessIDS;
-(unsigned long long)numReadWriteFailureIDS;
-(unsigned long long)ipAccessoryReachabilityChangedCount;
-(void)setEventCountersManager:(HMDEventCountersManager *)arg1 ;
-(void)setEventFlagsManager:(HMDEventFlagsManager *)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

