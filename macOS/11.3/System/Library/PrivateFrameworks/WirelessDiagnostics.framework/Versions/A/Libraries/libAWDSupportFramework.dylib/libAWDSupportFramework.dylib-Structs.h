/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned autoLoginType : 1;
	unsigned durationNetworkNotCaptive : 1;
	unsigned durationOnNetwork : 1;
	unsigned passiveCaptivityCorrectDetection : 1;
	unsigned passiveCaptivityIncorrectDetection : 1;
	unsigned passiveCaptivitySymptom : 1;
	unsigned redirectURLType : 1;
	unsigned result : 1;
	unsigned websheetProbeCount : 1;
	unsigned websheetScrapeResult : 1;
	unsigned whiteListProbeCompletionTime : 1;
	unsigned whiteListProbeStatus : 1;
	unsigned autoLoginFailed : 1;
	unsigned detectedNotCaptiveHandledByCNP : 1;
	unsigned handlerCNPTriggeredLogOff : 1;
	unsigned isDetectedCaptive : 1;
	unsigned nonCaptiveDetectedAsCaptive : 1;
	unsigned passiveCaptivityDetected : 1;
	unsigned websheetScraped : 1;
	unsigned wisprDetected : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned timestamp : 1;
	unsigned totalBytesWritten : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned connectEnd : 1;
	unsigned connectStart : 1;
	unsigned connected : 1;
	unsigned connectionInit : 1;
	unsigned domainLookupEnd : 1;
	unsigned domainLookupStart : 1;
	unsigned firstRead : 1;
	unsigned firstWrite : 1;
	unsigned isCellular : 1;
	unsigned resumeStart : 1;
	unsigned secureConnectionStart : 1;
	unsigned taskCreationStart : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned didCompleteWithError : 1;
	unsigned error : 1;
	unsigned numberOfRedirects : 1;
	unsigned numberOfRetries : 1;
	unsigned taskResume : 1;
	unsigned timestamp : 1;
	unsigned underlyingError : 1;
	unsigned underlyingErrorDomain : 1;
	unsigned schedulingTier : 1;
	unsigned taskType : 1;
	unsigned isBackground : 1;
	unsigned unused : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned requestEnd : 1;
	unsigned requestStart : 1;
	unsigned responseEnd : 1;
	unsigned responseStart : 1;
	unsigned timestamp : 1;
	unsigned totalBytesExpectedToRead : 1;
	unsigned totalBytesExpectedToWrite : 1;
	unsigned totalBytesRead : 1;
	unsigned totalBytesWritten : 1;
	unsigned http3Status : 1;
	unsigned networkLoadType : 1;
	unsigned networkProtocolName : 1;
	unsigned apsRelayAttempted : 1;
	unsigned apsRelaySucceeded : 1;
	unsigned isRedirected : 1;
	unsigned reusedConnection : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned ageInDays : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned timestamp : 1;
	unsigned deleteType : 1;
	unsigned syncEnabled : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned timestamp : 1;
	unsigned assistanceType : 1;
	unsigned assistanceValue : 1;
	unsigned uiPlacement : 1;
} SCD_Struct_AW8;

typedef struct {
	unsigned timestamp : 1;
	unsigned horizontalAccuracy : 1;
	unsigned locationType : 1;
	unsigned qualityIndicator : 1;
	unsigned triggerTypes : 1;
	unsigned userAssistanceRequired : 1;
} SCD_Struct_AW9;

typedef struct {
	unsigned timestamp : 1;
	unsigned assistances : 1;
	unsigned assistedParkingEvents : 1;
	unsigned duration : 1;
	unsigned engagedParkingEvents : 1;
	unsigned engagements : 1;
	unsigned locationType : 1;
	unsigned parkingEvents : 1;
	unsigned suppressedParkingEvents : 1;
} SCD_Struct_AW10;

typedef struct {
	unsigned timestamp : 1;
	unsigned dailyEvents : 1;
	unsigned eventsWithLMPLocation : 1;
	unsigned eventsWithLocation : 1;
	unsigned eventsWithMaybeLocation : 1;
	unsigned visitLMPLocation : 1;
	unsigned visitLocation : 1;
	unsigned visitMaybeLocation : 1;
} SCD_Struct_AW11;

typedef struct {
	unsigned timestamp : 1;
	unsigned confidence : 1;
	unsigned occurrences : 1;
	unsigned reason : 1;
	unsigned suggested : 1;
} SCD_Struct_AW12;

typedef struct {
	unsigned timestamp : 1;
	unsigned datapointCount : 1;
	unsigned deviceClass : 1;
	unsigned percentageTransitions : 1;
	unsigned percentageVisits : 1;
	unsigned placeLabelType : 1;
	unsigned placeType : 1;
	unsigned didUnlock : 1;
	unsigned newPlace : 1;
	unsigned placeAOIPOI : 1;
	unsigned watchPresent : 1;
} SCD_Struct_AW13;

typedef struct {
	unsigned intervalSinceLastAttempt : 1;
	unsigned latency : 1;
	unsigned maxIntervalBetweenLocations : 1;
	unsigned timestamp : 1;
	unsigned locationsProcessed : 1;
	unsigned placeCountDevice : 1;
	unsigned placeCountTotal : 1;
	unsigned visitCountDevice : 1;
	unsigned visitCountTotal : 1;
	unsigned trainedVisits : 1;
} SCD_Struct_AW14;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW15;

typedef struct {
	unsigned timestamp : 1;
	unsigned ageOfDevice : 1;
	unsigned deviceClass : 1;
	unsigned placesAssociatedToDevice : 1;
	unsigned timeIntervalSinceLastRecordAssociation : 1;
	unsigned transitionsAssociatedToDevice : 1;
	unsigned visitsAssociatedToDevice : 1;
} SCD_Struct_AW16;

typedef struct {
	unsigned timestamp : 1;
	unsigned backCameraCaptureDuration : 1;
	unsigned callDuration : 1;
	unsigned conferenceMiscError : 1;
	unsigned connectDuration : 1;
	unsigned connectionType : 1;
	unsigned currentNatType : 1;
	unsigned dataRate : 1;
	unsigned diagnosticPingAvg : 1;
	unsigned diagnosticPingMax : 1;
	unsigned diagnosticPingMin : 1;
	unsigned diagnosticPingPacketLoss : 1;
	unsigned endedReason : 1;
	unsigned frontCameraCaptureDuration : 1;
	unsigned gameKitError : 1;
	unsigned genericError : 1;
	unsigned gksError : 1;
	unsigned gksReturnCode : 1;
	unsigned invitationServiceError : 1;
	unsigned isAudioInterrupted : 1;
	unsigned isCallUpgrade : 1;
	unsigned isInitiator : 1;
	unsigned isNetworkActive : 1;
	unsigned isNetworkEnabled : 1;
	unsigned isNetworkReachable : 1;
	unsigned isVideo : 1;
	unsigned isVideoInterrupted : 1;
	unsigned linkQuality : 1;
	unsigned localNetworkConnection : 1;
	unsigned messageDeliveryError : 1;
	unsigned networkCheckResult : 1;
	unsigned onLockScreen : 1;
	unsigned registrationError : 1;
	unsigned relayConnectDuration : 1;
	unsigned relayError : 1;
	unsigned remoteNatType : 1;
	unsigned remoteNetworkConnection : 1;
	unsigned usesRelay : 1;
	unsigned viceroyError : 1;
} SCD_Struct_AW17;

typedef struct {
	unsigned compressedMessageSize : 1;
	unsigned messagesOnQueue : 1;
	unsigned timestamp : 1;
	unsigned uncompressedMessageSize : 1;
	unsigned aggregatedMessageSendCount : 1;
	unsigned avgAggregatedMessageSendDuration : 1;
	unsigned avgEncryptionDuration : 1;
	unsigned command : 1;
	unsigned compressPayloadDuration : 1;
	unsigned compressPayloadStart : 1;
	unsigned encryptionCount : 1;
	unsigned iDQueryDuration : 1;
	unsigned iDQueryStart : 1;
	unsigned messageOnQueueDuration : 1;
	unsigned messageOnQueueStart : 1;
	unsigned priority : 1;
	unsigned sendToDaemonDuration : 1;
	unsigned sendToDaemonStart : 1;
	unsigned storeInDatabaseDuration : 1;
	unsigned storeInDatabaseStart : 1;
} SCD_Struct_AW18;

typedef struct {
	unsigned timestamp : 1;
	unsigned callDuration : 1;
	unsigned conferenceMiscError : 1;
	unsigned connectDuration : 1;
	unsigned connectionType : 1;
	unsigned currentNatType : 1;
	unsigned dataRate : 1;
	unsigned endedReason : 1;
	unsigned gameKitError : 1;
	unsigned genericError : 1;
	unsigned gksError : 1;
	unsigned gksReturnCode : 1;
	unsigned isInitiator : 1;
	unsigned isNetworkActive : 1;
	unsigned isNetworkEnabled : 1;
	unsigned isNetworkReachable : 1;
	unsigned linkQuality : 1;
	unsigned localNetworkConnection : 1;
	unsigned networkCheckResult : 1;
	unsigned relayConnectDuration : 1;
	unsigned remoteNatType : 1;
	unsigned remoteNetworkConnection : 1;
	unsigned usesRelay : 1;
} SCD_Struct_AW19;

typedef struct {
	unsigned timestamp : 1;
	unsigned attachmentSize : 1;
	unsigned connectionType : 1;
	unsigned firstLevelMMCSError : 1;
	unsigned fourthLevelMMCSError : 1;
	unsigned fzError : 1;
	unsigned genericError : 1;
	unsigned lastPrewarmDuration : 1;
	unsigned linkQuality : 1;
	unsigned messageError : 1;
	unsigned secondLevelMMCSError : 1;
	unsigned thirdLevelMMCSError : 1;
	unsigned timeFromLastPrewarm : 1;
	unsigned tokenError : 1;
	unsigned uploadDuration : 1;
} SCD_Struct_AW20;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW21;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW22;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW23;

typedef struct {
	unsigned appDataStallTimerMsecs : 1;
	unsigned appReportingDataStallCount : 1;
	unsigned bestRTTMsecs : 1;
	unsigned betterRouteEventCount : 1;
	unsigned bytesDuplicate : 1;
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned bytesOutOfOrder : 1;
	unsigned bytesRetransmitted : 1;
	unsigned connectionEstablishmentTimeMsecs : 1;
	unsigned connectionReuseCount : 1;
	unsigned currentRTTMsecs : 1;
	unsigned dNSResolvedTimeMsecs : 1;
	unsigned flowDurationMsecs : 1;
	unsigned iPAddressAttemptCount : 1;
	unsigned multipathBytesInCell : 1;
	unsigned multipathBytesInInitial : 1;
	unsigned multipathBytesInWiFi : 1;
	unsigned multipathBytesOutCell : 1;
	unsigned multipathBytesOutInitial : 1;
	unsigned multipathBytesOutWiFi : 1;
	unsigned multipathServiceType : 1;
	unsigned packetsDuplicate : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned packetsOutOfOrder : 1;
	unsigned packetsRetransmitted : 1;
	unsigned rTTvariance : 1;
	unsigned smoothedRTTMsecs : 1;
	unsigned synRetransmissionCount : 1;
	unsigned timeToConnectionEstablishmentMsecs : 1;
	unsigned timeToConnectionStartMsecs : 1;
	unsigned timeToDNSResolvedMsecs : 1;
	unsigned timeToDNSStartMsecs : 1;
	unsigned trafficClass : 1;
	unsigned connectedInterfaceType : 1;
	unsigned interfaceType : 1;
	unsigned cellularFallback : 1;
	unsigned cellularRRCConnected : 1;
	unsigned connected : 1;
	unsigned dNSAnswersCached : 1;
	unsigned firstParty : 1;
	unsigned kernelReportedStalls : 1;
	unsigned kernelReportingConnectionStalled : 1;
	unsigned kernelReportingReadStalled : 1;
	unsigned kernelReportingWriteStalled : 1;
	unsigned tcpFastOpen : 1;
} SCD_Struct_AW24;

typedef struct {
	unsigned mptcpAggregateAllBytes : 1;
	unsigned mptcpAggregateAttempt : 1;
	unsigned mptcpAggregateCellBytes : 1;
	unsigned mptcpBackToWiFi : 1;
	unsigned mptcpCellDenied : 1;
	unsigned mptcpCellProxy : 1;
	unsigned mptcpFirstPartyAggregateAttempt : 1;
	unsigned mptcpFirstPartyHandoverAttempt : 1;
	unsigned mptcpFirstPartyInteractiveAttempt : 1;
	unsigned mptcpHandoverAllBytes : 1;
	unsigned mptcpHandoverAttempts : 1;
	unsigned mptcpHandoverCellBytes : 1;
	unsigned mptcpHandoverCellSubflowFromWiFi : 1;
	unsigned mptcpHandoverWiFiSubflowFromCell : 1;
	unsigned mptcpHandshakeAggregateSuccess : 1;
	unsigned mptcpHandshakeAggregateSuccessFirstParty : 1;
	unsigned mptcpHandshakeHandoverSuccessCell : 1;
	unsigned mptcpHandshakeHandoverSuccessCellFirstParty : 1;
	unsigned mptcpHandshakeHandoverSuccessWiFi : 1;
	unsigned mptcpHandshakeHandoverSuccessWiFiFirstParty : 1;
	unsigned mptcpHandshakeInteractiveSuccess : 1;
	unsigned mptcpHandshakeInteractiveSuccessFirstParty : 1;
	unsigned mptcpHeuristicFallback : 1;
	unsigned mptcpHeuristicFallbackFirstParty : 1;
	unsigned mptcpInteractiveAllBytes : 1;
	unsigned mptcpInteractiveAttempt : 1;
	unsigned mptcpInteractiveCellBytes : 1;
	unsigned mptcpInteractiveCellUsage : 1;
	unsigned mptcpTriggeredCell : 1;
	unsigned mptcpWiFiProxy : 1;
} SCD_Struct_AW25;

typedef struct {
	unsigned interfaceType : 1;
	unsigned ipProtocol : 1;
	unsigned tcpECNIntClientSetup : 1;
	unsigned tcpECNIntClientSuccess : 1;
	unsigned tcpECNIntConnNoPLCE : 1;
	unsigned tcpECNIntConnPLCE : 1;
	unsigned tcpECNIntConnPLNoCE : 1;
	unsigned tcpECNIntConnRecvCE : 1;
	unsigned tcpECNIntConnRecvECE : 1;
	unsigned tcpECNIntFallbackCE : 1;
	unsigned tcpECNIntFallbackDropRst : 1;
	unsigned tcpECNIntFallbackDropRxmt : 1;
	unsigned tcpECNIntFallbackReorder : 1;
	unsigned tcpECNIntFallbackSYNRst : 1;
	unsigned tcpECNIntFallbackSynLoss : 1;
	unsigned tcpECNIntNotSupportedPeer : 1;
	unsigned tcpECNIntOffAvgRTT : 1;
	unsigned tcpECNIntOffDropRst : 1;
	unsigned tcpECNIntOffDropRxmt : 1;
	unsigned tcpECNIntOffOOBPer : 1;
	unsigned tcpECNIntOffRTTVar : 1;
	unsigned tcpECNIntOffReorderPer : 1;
	unsigned tcpECNIntOffRxmtPer : 1;
	unsigned tcpECNIntOffSACKE : 1;
	unsigned tcpECNIntOffTotalOOPkts : 1;
	unsigned tcpECNIntOffTotalRxPkts : 1;
	unsigned tcpECNIntOffTotalRxmtPkts : 1;
	unsigned tcpECNIntOffTotalTxPkts : 1;
	unsigned tcpECNIntOnAvgRTT : 1;
	unsigned tcpECNIntOnDropRst : 1;
	unsigned tcpECNIntOnDropRxmt : 1;
	unsigned tcpECNIntOnOOBPer : 1;
	unsigned tcpECNIntOnRTTVar : 1;
	unsigned tcpECNIntOnReorderPer : 1;
	unsigned tcpECNIntOnSACKE : 1;
	unsigned tcpECNIntOnTotalOOPkts : 1;
	unsigned tcpECNIntOnTotalRxPkts : 1;
	unsigned tcpECNIntOnTotalRxmtPkts : 1;
	unsigned tcpECNIntOnTotalTxPkts : 1;
	unsigned tcpECNIntRecvCE : 1;
	unsigned tcpECNIntRecvECE : 1;
	unsigned tcpECNIntRxmtPer : 1;
	unsigned tcpECNIntSentECE : 1;
	unsigned tcpECNIntServerSetup : 1;
	unsigned tcpECNIntServerSuccess : 1;
	unsigned tcpECNIntSynAckLost : 1;
	unsigned tcpECNIntSynLost : 1;
	unsigned tcpECNIntTotalConnections : 1;
	unsigned tcpUnsentDataAtSleepCnt : 1;
} SCD_Struct_AW26;

typedef struct {
	unsigned establishmentTime : 1;
	unsigned postConnectSessionLifetime : 1;
	unsigned timestamp : 1;
	unsigned establishmentFailureError : 1;
	unsigned establishmentSynRetransmits : 1;
	unsigned postConnectSubflowAttemptCount : 1;
	unsigned postConnectSubflowMaxSubflowCount : 1;
	unsigned subflowSwitchingCount : 1;
	unsigned establishmentCellularFallback : 1;
	unsigned establishmentForcedTcpFallback : 1;
	unsigned establishmentSuccess : 1;
	unsigned establishmentTcpFallback : 1;
	unsigned postConnectMultiHomed : 1;
	unsigned postConnectSingleHomed : 1;
} SCD_Struct_AW27;

typedef struct {
	unsigned ifFltrAttach : 1;
	unsigned ifFltrAttachOs : 1;
	unsigned ifnetAlloc : 1;
	unsigned ifnetAllocOs : 1;
	unsigned ipFltrAdd : 1;
	unsigned ipFltrAddOs : 1;
	unsigned nexusFlowInet6Datagram : 1;
	unsigned nexusFlowInet6Stream : 1;
	unsigned nexusFlowInetDatagram : 1;
	unsigned nexusFlowInetStream : 1;
	unsigned pfAddrule : 1;
	unsigned pfAddruleOs : 1;
	unsigned sockAlloc : 1;
	unsigned sockAllocKernel : 1;
	unsigned sockAllocKernelOs : 1;
	unsigned sockDomainInet : 1;
	unsigned sockDomainInet6 : 1;
	unsigned sockDomainKey : 1;
	unsigned sockDomainLocal : 1;
	unsigned sockDomainMultipath : 1;
	unsigned sockDomainNdrv : 1;
	unsigned sockDomainOther : 1;
	unsigned sockDomainRoute : 1;
	unsigned sockDomainSystem : 1;
	unsigned sockFltrRegister : 1;
	unsigned sockFltrRegisterOs : 1;
	unsigned sockInetMcastJoin : 1;
	unsigned sockInetMcastJoinOs : 1;
	unsigned sockNecpClientuuidCount : 1;
	unsigned sockNetInet6Dgram : 1;
	unsigned sockNetInet6DgramConnected : 1;
	unsigned sockNetInet6DgramDns : 1;
	unsigned sockNetInet6DgramNoData : 1;
	unsigned sockNetInet6Stream : 1;
	unsigned sockNetInetDgram : 1;
	unsigned sockNetInetDgramConnected : 1;
	unsigned sockNetInetDgramDns : 1;
	unsigned sockNetInetDgramNoData : 1;
	unsigned sockNetInetStream : 1;
	unsigned timeSinceLastReport : 1;
	unsigned timestamp : 1;
	unsigned vmnetStart : 1;
	unsigned ifNetagentEnabled : 1;
} SCD_Struct_AW28;

typedef struct {
	unsigned bestRTT : 1;
	unsigned bytesDuplicate : 1;
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned bytesOutOfOrder : 1;
	unsigned bytesRetransmitted : 1;
	unsigned connectedAddressIndex : 1;
	unsigned connectionReuseCount : 1;
	unsigned currentRTT : 1;
	unsigned dataStallCount : 1;
	unsigned flowConnectMilliseconds : 1;
	unsigned flowDurationMilliseconds : 1;
	unsigned ipv4AddressCount : 1;
	unsigned ipv4DNSServerCount : 1;
	unsigned ipv6AddressCount : 1;
	unsigned ipv6DNSServerCount : 1;
	unsigned multipathBytesInCell : 1;
	unsigned multipathBytesInInitial : 1;
	unsigned multipathBytesInWiFi : 1;
	unsigned multipathBytesOutCell : 1;
	unsigned multipathBytesOutInitial : 1;
	unsigned multipathBytesOutWiFi : 1;
	unsigned multipathServiceType : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned pathTriggerMilliseconds : 1;
	unsigned proxyMilliseconds : 1;
	unsigned rTTvariance : 1;
	unsigned resolutionMilliseconds : 1;
	unsigned secondsSinceInterfaceChange : 1;
	unsigned smoothedRTT : 1;
	unsigned synRetransmissionCount : 1;
	unsigned timestamp : 1;
	unsigned tlsMilliseconds : 1;
	unsigned trafficClass : 1;
	unsigned appleApp : 1;
	unsigned appleHost : 1;
	unsigned connectedAddressFamily : 1;
	unsigned connectedInterfaceType : 1;
	unsigned connectionMode : 1;
	unsigned dnsProtocol : 1;
	unsigned dnsProvider : 1;
	unsigned failureReason : 1;
	unsigned firstAddressFamily : 1;
	unsigned stackLevel : 1;
	unsigned tlsVersion : 1;
	unsigned transportProtocol : 1;
	unsigned usedProxyType : 1;
	unsigned customProxyConfigured : 1;
	unsigned fallbackEligible : 1;
	unsigned firstParty : 1;
	unsigned ipv4Available : 1;
	unsigned ipv6Available : 1;
	unsigned isDaemon : 1;
	unsigned isPathConstrained : 1;
	unsigned isPathExpensive : 1;
	unsigned multipathConfigured : 1;
	unsigned prohibitsConstrained : 1;
	unsigned prohibitsExpensive : 1;
	unsigned resolutionRequired : 1;
	unsigned synthesizedExtraIPv6Address : 1;
	unsigned synthesizedIPv6Address : 1;
	unsigned systemProxyConfigured : 1;
	unsigned tfoConfigured : 1;
	unsigned tfoUsed : 1;
	unsigned tlsConfigured : 1;
	unsigned tlsHandshakeTimedOut : 1;
	unsigned tlsVersionTimeout : 1;
	unsigned triggeredPath : 1;
	unsigned usedFallback : 1;
	unsigned weakFallback : 1;
} SCD_Struct_AW29;

typedef struct {
	unsigned batteryAbsoluteCapacity : 1;
	unsigned batteryCurrentCapacity : 1;
	unsigned batteryDesignCapacity : 1;
	unsigned batteryMaximumCapacity : 1;
	unsigned batteryPercentage : 1;
	unsigned batteryTimeRemaining : 1;
	unsigned batteryVoltage : 1;
	unsigned cellularMode : 1;
	unsigned motionState : 1;
	unsigned thermalPressure : 1;
	unsigned batteryAtCriticalLevel : 1;
	unsigned batteryAtWarnLevel : 1;
	unsigned batteryExternalPowerIsConnected : 1;
	unsigned batteryFullyCharged : 1;
	unsigned batteryIsCharging : 1;
	unsigned devicePluggedIn : 1;
	unsigned deviceScreenOn : 1;
} SCD_Struct_AW30;

typedef struct {
	unsigned cellularBand : 1;
	unsigned cellularBandInfo : 1;
	unsigned cellularBandwidth : 1;
	unsigned cellularBars : 1;
	unsigned cellularLqm : 1;
	unsigned cellularMcc : 1;
	unsigned cellularMnc : 1;
	unsigned cellularPid : 1;
	unsigned cellularPowerCostDownload : 1;
	unsigned cellularPowerCostUpload : 1;
	unsigned cellularRadioTechnology : 1;
	unsigned cellularTac : 1;
	unsigned cellularUarfcn : 1;
	unsigned wifiLqm : 1;
	unsigned wifiRadioTechnology : 1;
	unsigned wifiRssi : 1;
	unsigned cellularKnownGood : 1;
	unsigned wifiKnownGood : 1;
} SCD_Struct_AW31;

typedef struct {
	unsigned duration : 1;
	unsigned networkServiceType : 1;
	unsigned responseReceivedDuration : 1;
	unsigned startTime : 1;
	unsigned adaptiveTcpReadTimeout : 1;
	unsigned adaptiveTcpWriteTimeout : 1;
	unsigned errorCode : 1;
	unsigned httpStatus : 1;
	unsigned locatorPort : 1;
	unsigned qualityOfService : 1;
	unsigned requestSize : 1;
	unsigned responseSize : 1;
	unsigned allowsCellular : 1;
	unsigned allowsPowerNapScheduling : 1;
	unsigned cancelled : 1;
	unsigned connectionReused : 1;
	unsigned fastFail : 1;
	unsigned finalTryInRequest : 1;
	unsigned forceNondiscretionary : 1;
	unsigned inlineEdgeComplete : 1;
	unsigned powerPluggedInAtEnd : 1;
	unsigned powerPluggedInAtStart : 1;
	unsigned powerPluggedInWhenQueued : 1;
	unsigned proxyUsed : 1;
	unsigned requiresPowerPluggedIn : 1;
	unsigned timedOut : 1;
	unsigned transactionComplete : 1;
} SCD_Struct_AW32;

typedef struct {
	unsigned tcpiCellRxbytes : 1;
	unsigned tcpiCellRxpackets : 1;
	unsigned tcpiCellTxbytes : 1;
	unsigned tcpiCellTxpackets : 1;
	unsigned tcpiRxbytes : 1;
	unsigned tcpiRxduplicatebytes : 1;
	unsigned tcpiRxoutoforderbytes : 1;
	unsigned tcpiRxpackets : 1;
	unsigned tcpiSndBw : 1;
	unsigned tcpiTxbytes : 1;
	unsigned tcpiTxpackets : 1;
	unsigned tcpiTxretransmitbytes : 1;
	unsigned tcpiTxunacked : 1;
	unsigned tcpiWifiRxbytes : 1;
	unsigned tcpiWifiRxpackets : 1;
	unsigned tcpiWifiTxbytes : 1;
	unsigned tcpiWifiTxpackets : 1;
	unsigned tcpiFlags : 1;
	unsigned tcpiLastOutif : 1;
	unsigned tcpiOptions : 1;
	unsigned tcpiRcvMss : 1;
	unsigned tcpiRcvNxt : 1;
	unsigned tcpiRcvSpace : 1;
	unsigned tcpiRcvWscale : 1;
	unsigned tcpiRto : 1;
	unsigned tcpiRttbest : 1;
	unsigned tcpiRttcur : 1;
	unsigned tcpiRttvar : 1;
	unsigned tcpiSndCwnd : 1;
	unsigned tcpiSndMss : 1;
	unsigned tcpiSndNxt : 1;
	unsigned tcpiSndSbbytes : 1;
	unsigned tcpiSndSsthresh : 1;
	unsigned tcpiSndWnd : 1;
	unsigned tcpiSndWscale : 1;
	unsigned tcpiSrtt : 1;
	unsigned tcpiState : 1;
	unsigned tcpiSynrexmits : 1;
	unsigned tcpiUnused1 : 1;
	unsigned tcpiUnused2 : 1;
} SCD_Struct_AW33;

typedef struct {
	unsigned captivePresentCount : 1;
	unsigned connectionCount : 1;
	unsigned mptcpSuccessCount : 1;
	unsigned restrictedNetworkCount : 1;
	unsigned resultConnectionResetCount : 1;
	unsigned resultNetworkUnavailableCount : 1;
	unsigned resultResponseTimeoutCount : 1;
	unsigned resultSendFailureCount : 1;
	unsigned resultServerBusyCount : 1;
	unsigned resultServerDetachedCount : 1;
	unsigned resultServerInterruptCount : 1;
	unsigned resultServerOfflineCount : 1;
	unsigned resultServerOrphanedCount : 1;
	unsigned resultServerSessionExpiredCount : 1;
	unsigned resultServerUnreachableCount : 1;
	unsigned resultSuccessCount : 1;
	unsigned resultUnknownErrorCount : 1;
	unsigned tfoSuccessCount : 1;
	unsigned timestamp : 1;
	unsigned alternatePathCount : 1;
	unsigned captivePresentFailedCount : 1;
	unsigned exceededMssCount : 1;
	unsigned interfaceType : 1;
	unsigned protocolType : 1;
	unsigned restrictedNetworkFailedCount : 1;
} SCD_Struct_AW34;

typedef struct {
	unsigned btRetransmissionRateRx : 1;
	unsigned btRetransmissionRateTx : 1;
	unsigned btRssi : 1;
	unsigned btTech : 1;
	unsigned endTimestamp : 1;
	unsigned expectedThroughputVIBE : 1;
	unsigned iRATRecommendationDelay : 1;
	unsigned lsmRecommendationBe : 1;
	unsigned packetLifetimeVIBE : 1;
	unsigned packetLossRateVIBE : 1;
	unsigned startTimestamp : 1;
	unsigned timeToFirstWord : 1;
	unsigned wifiCCA : 1;
	unsigned wifiRSSI : 1;
	unsigned wifiSNR : 1;
	unsigned beaconPer : 1;
	unsigned errorCode : 1;
	unsigned errorDomain : 1;
	unsigned iRATRecommendation : 1;
	unsigned idsErrorCode : 1;
	unsigned idsMessageDelay : 1;
	unsigned idsSocketDelay : 1;
	unsigned nwtype : 1;
	unsigned requestStatus : 1;
	unsigned underlyingErrorCode : 1;
	unsigned underlyingErrorDomain : 1;
} SCD_Struct_AW35;

typedef struct {
	unsigned aPTxDataStall : 1;
	unsigned accessPointOUI : 1;
	unsigned availWLANDurMS : 1;
	unsigned availWLANRxDurMS : 1;
	unsigned availWLANTxDurMS : 1;
	unsigned avgTxLatencyMS : 1;
	unsigned bTAntennaDurMS : 1;
	unsigned baselineThroughput : 1;
	unsigned cCA : 1;
	unsigned concurrentIntDurMS : 1;
	unsigned delayedThroughput : 1;
	unsigned expectedThroughput : 1;
	unsigned highRxDataPERFalse : 1;
	unsigned highRxDataPERTrue : 1;
	unsigned highRxDecryptErrsFalse : 1;
	unsigned highRxDecryptErrsTrue : 1;
	unsigned highRxDupsFalse : 1;
	unsigned highRxDupsTrue : 1;
	unsigned highRxFCSErrsFalse : 1;
	unsigned highRxFCSErrsTrue : 1;
	unsigned highRxOverflowsFalse : 1;
	unsigned highRxOverflowsTrue : 1;
	unsigned highRxPhyPERFalse : 1;
	unsigned highRxPhyPERTrue : 1;
	unsigned highRxReplaysFalse : 1;
	unsigned highRxReplaysTrue : 1;
	unsigned highRxRetriesFalse : 1;
	unsigned highRxRetriesTrue : 1;
	unsigned highTxLatencyFalse : 1;
	unsigned highTxLatencyTrue : 1;
	unsigned highTxPerFalse : 1;
	unsigned highTxPerTrue : 1;
	unsigned highTxRetriesFalse : 1;
	unsigned highTxRetriesTrue : 1;
	unsigned infraDutyCycle : 1;
	unsigned inputThroughput : 1;
	unsigned is2GBand : 1;
	unsigned isFGTraffic : 1;
	unsigned lTECoexDurationMS : 1;
	unsigned lastScanReason : 1;
	unsigned lowAvailWLANDurFalse : 1;
	unsigned lowAvailWLANDurTrue : 1;
	unsigned lowAvailWLANRxDurFalse : 1;
	unsigned lowAvailWLANRxDurTrue : 1;
	unsigned lowAvailWLANTxDurFalse : 1;
	unsigned lowAvailWLANTxDurTrue : 1;
	unsigned lowTxAMPDUDensityFalse : 1;
	unsigned lowTxAMPDUDensityTrue : 1;
	unsigned lowTxPhyRateFalse : 1;
	unsigned lowTxPhyRateTrue : 1;
	unsigned maxQueueFullDurMS : 1;
	unsigned measurementDurMS : 1;
	unsigned offChanDurMS : 1;
	unsigned outputThroughput : 1;
	unsigned phyRxActivityDurMS : 1;
	unsigned phyTxActivityDurMS : 1;
	unsigned rC1CoexDurationMS : 1;
	unsigned rC2CoexDurationMS : 1;
	unsigned rSSI : 1;
	unsigned rxAmpduTxBaMismatch : 1;
	unsigned rxCRSErrs : 1;
	unsigned rxDecryErrs : 1;
	unsigned rxDupErrs : 1;
	unsigned rxFCSErrs : 1;
	unsigned rxFrames : 1;
	unsigned rxGoodPlcps : 1;
	unsigned rxLowFrameCountFalse : 1;
	unsigned rxLowFrameCountTrue : 1;
	unsigned rxOvflErrs : 1;
	unsigned rxPLCPErrs : 1;
	unsigned rxPhyRate : 1;
	unsigned rxReplayErrs : 1;
	unsigned rxRetries : 1;
	unsigned rxThroughput : 1;
	unsigned sNR : 1;
	unsigned symptomsFails : 1;
	unsigned tVPMActiveDurationMS : 1;
	unsigned testThroughput : 1;
	unsigned timeSinceLastRecovery : 1;
	unsigned timestamp : 1;
	unsigned txAMPDUDensity : 1;
	unsigned txCompBytes : 1;
	unsigned txCompPkts : 1;
	unsigned txDelayBytes : 1;
	unsigned txExpectedAMPDUDensity : 1;
	unsigned txFails : 1;
	unsigned txFrames : 1;
	unsigned txLowFrameCountFalse : 1;
	unsigned txLowFrameCountTrue : 1;
	unsigned txOutputBelowExpectedFalse : 1;
	unsigned txOutputBelowExpectedTrue : 1;
	unsigned txOutputBelowInputFalse : 1;
	unsigned txOutputBelowInputTrue : 1;
	unsigned txPhyRate : 1;
	unsigned txQueueFullFalse : 1;
	unsigned txQueueFullTrue : 1;
	unsigned txRetries : 1;
	unsigned txSubBytes : 1;
	unsigned txSubPkts : 1;
} SCD_Struct_AW36;

typedef struct {
	unsigned bytesInActive : 1;
	unsigned bytesInTotal : 1;
	unsigned bytesOutActive : 1;
	unsigned bytesOutTotal : 1;
	unsigned dataStalls : 1;
	unsigned failedConnections : 1;
	unsigned faultyStay : 1;
	unsigned lat : 1;
	unsigned lon : 1;
	unsigned lowLQMStay : 1;
	unsigned lowqStay : 1;
	unsigned lqmTranCount : 1;
	unsigned overAllStay : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned reTxBytes : 1;
	unsigned receivedDupes : 1;
	unsigned rxOutOfOrderBytes : 1;
	unsigned successfulConnections : 1;
	unsigned timeOfDay : 1;
	unsigned timestamp : 1;
	unsigned assocReason : 1;
	unsigned associatedTime : 1;
	unsigned band : 1;
	unsigned captiveFlag : 1;
	unsigned cca : 1;
	unsigned channel : 1;
	unsigned channelWidth : 1;
	unsigned colocatedState : 1;
	unsigned disassocReason : 1;
	unsigned phyMode : 1;
	unsigned roundTripTimeAvg : 1;
	unsigned roundTripTimeAvgActive : 1;
	unsigned roundTripTimeMin : 1;
	unsigned roundTripTimeMinActive : 1;
	unsigned roundTripTimeVar : 1;
	unsigned roundTripTimeVarActive : 1;
	unsigned rssi : 1;
	unsigned securityType : 1;
	unsigned snr : 1;
	unsigned hotspot20 : 1;
} SCD_Struct_AW37;

typedef struct {
	unsigned timestamp : 1;
	unsigned cellDataLQM : 1;
	unsigned cellDlBw : 1;
	unsigned cellEstimatedBw : 1;
	unsigned cellEstimatedLoad : 1;
	unsigned cellLteEstimatedThroughput : 1;
	unsigned cellLteRSRP : 1;
	unsigned cellLteRSRQ : 1;
	unsigned cellLteSNR : 1;
	unsigned cellMaxDlCaNumConfigured : 1;
	unsigned cellMaxUlCaNumConfigured : 1;
	unsigned cellNrEstimatedThroughput : 1;
	unsigned cellNrFR2active : 1;
	unsigned cellNrRSRP : 1;
	unsigned cellNrRSRQ : 1;
	unsigned cellNrSNR : 1;
	unsigned cellNsaEnabled : 1;
	unsigned cellRrcState : 1;
	unsigned cellUlBw : 1;
	unsigned recommendedlink : 1;
	unsigned wifPoi : 1;
	unsigned wifiCca : 1;
	unsigned wifiEstThoughtput : 1;
	unsigned wifiQbssLoad : 1;
	unsigned wifiRssi : 1;
	unsigned wifiRxRetry : 1;
	unsigned wifiSnr : 1;
	unsigned wifiStationCount : 1;
	unsigned wifiTxPER : 1;
	unsigned wifiWghtAVGRXPHYRATE : 1;
	unsigned wifiWghtAVGSNR : 1;
	unsigned wifiWghtAVGTXPHYRATE : 1;
	unsigned wifiWgtAVGRSSI : 1;
	unsigned wifiWifiEstThoughtputConfidence : 1;
} SCD_Struct_AW38;

typedef struct {
	unsigned associatedDur : 1;
	unsigned originBcnPer : 1;
	unsigned originFwTxPer : 1;
	unsigned originTxPer : 1;
	unsigned timestamp : 1;
	unsigned ccaInt : 1;
	unsigned ccaOthers : 1;
	unsigned ccaSelf : 1;
	unsigned ccaTotal : 1;
	unsigned flags : 1;
	unsigned hostReason : 1;
	unsigned latency : 1;
	unsigned motionState : 1;
	unsigned offChannelDt : 1;
	unsigned originAKMs : 1;
	unsigned originChannel : 1;
	unsigned originEnhancedSecurityType : 1;
	unsigned originPhyMode : 1;
	unsigned originRssi : 1;
	unsigned profileType : 1;
	unsigned reason : 1;
	unsigned roamScanDuration : 1;
	unsigned securityType : 1;
	unsigned status : 1;
	unsigned targetAKMs : 1;
	unsigned targetChannel : 1;
	unsigned targetEnhancedSecurityType : 1;
	unsigned targetPhyMode : 1;
	unsigned targetRssi : 1;
	unsigned lateRoam : 1;
	unsigned voipActive : 1;
} SCD_Struct_AW39;

typedef struct {
	unsigned rxBytes : 1;
	unsigned timestamp : 1;
	unsigned txBytes : 1;
	unsigned awdlVersion : 1;
	unsigned clientModeDuration : 1;
	unsigned infraDisconnectedCount : 1;
	unsigned missingAWStartEventCount : 1;
	unsigned peerInfraChannel : 1;
	unsigned psfEnabledCount : 1;
	unsigned routablePeerCount : 1;
	unsigned selfInfraChannel : 1;
	unsigned senderPlatform : 1;
	unsigned sequenceNumberNotUpdatedCount : 1;
	unsigned serverModeDuration : 1;
	unsigned splitModeDuration : 1;
	unsigned startingRSSI : 1;
	unsigned totalDuration : 1;
	unsigned totalPeerCount : 1;
	unsigned csaDuringDfspMode : 1;
	unsigned csaToDfsChannel : 1;
	unsigned dfsProxyMode : 1;
	unsigned inRetroMode : 1;
	unsigned peerIsSDB : 1;
	unsigned selfIsSDB : 1;
} SCD_Struct_AW40;

typedef struct {
	unsigned gateOpenTime : 1;
	unsigned rapidLqmDuration : 1;
	unsigned roamWaitTime : 1;
	unsigned tdEvalDuration : 1;
	unsigned trafficWatchDuration : 1;
	unsigned trafficWatchTime : 1;
	unsigned arpFailureCount : 1;
	unsigned bcnPerSign : 1;
	unsigned bcnRcvs : 1;
	unsigned bcnSched : 1;
	unsigned dnsServersImpacted : 1;
	unsigned dnsServersTotal : 1;
	unsigned fwTxFail : 1;
	unsigned fwTxFrames : 1;
	unsigned fwTxPerSign : 1;
	unsigned fwTxRetrans : 1;
	unsigned gwArpExpiry : 1;
	unsigned metricReason : 1;
	unsigned netScore : 1;
	unsigned rssi : 1;
	unsigned rxFrames : 1;
	unsigned sympAwdCode : 1;
	unsigned sympSign : 1;
	unsigned trafficWatchRx : 1;
	unsigned trgDisc : 1;
	unsigned txFail : 1;
	unsigned txFrames : 1;
	unsigned txPerSign : 1;
	unsigned txRetrans : 1;
	unsigned usrImpact : 1;
	unsigned usrInput : 1;
	unsigned validState : 1;
} SCD_Struct_AW41;

typedef struct {
	unsigned wifiRssi : 1;
	unsigned actualHighBandwidth : 1;
	unsigned actualLowBandwidth : 1;
	unsigned badDecisionsCounterVIBE : 1;
	unsigned badDecisionsCounterVO : 1;
	unsigned bcnPer : 1;
	unsigned btRssi : 1;
	unsigned btWiFiCoexState : 1;
	unsigned bufferInterval : 1;
	unsigned cca : 1;
	unsigned cellARFCN : 1;
	unsigned cellBandInfo : 1;
	unsigned cellChannelBW : 1;
	unsigned cellEstimatedBW : 1;
	unsigned cellLteRSRQ : 1;
	unsigned cellModelConfidenceLevel : 1;
	unsigned cellModelVersion : 1;
	unsigned cellNrRSRP : 1;
	unsigned cellNrRSRQ : 1;
	unsigned cellNrSNR : 1;
	unsigned cellRsrp : 1;
	unsigned cellSinr : 1;
	unsigned cmDataSentCount : 1;
	unsigned cmDataSentDuration : 1;
	unsigned cmEstimatedBandwidth : 1;
	unsigned decisionVIBE : 1;
	unsigned decisionVO : 1;
	unsigned deviation : 1;
	unsigned devicePointOfInterest : 1;
	unsigned estimatedHighBandwidth : 1;
	unsigned estimatedLowBandwidth : 1;
	unsigned estimatedSpeed : 1;
	unsigned event : 1;
	unsigned expectedThroughputVIBE : 1;
	unsigned expectedThroughputVO : 1;
	unsigned goodDecisionsCounterVIBE : 1;
	unsigned goodDecisionsCounterVO : 1;
	unsigned invalidDecisionsCounterVIBE : 1;
	unsigned invalidDecisionsCounterVO : 1;
	unsigned isWfiCaptive : 1;
	unsigned lqmScoreBT : 1;
	unsigned lqmScoreWifi : 1;
	unsigned lqmScorecellular : 1;
	unsigned lteMaxScheduledMimoLayersInACell : 1;
	unsigned maxDLCAConfigured : 1;
	unsigned maxOfActualLowBandwidth : 1;
	unsigned maxULCAConfigured : 1;
	unsigned mlPredictedCellBW : 1;
	unsigned mlPredictedWiFiBW : 1;
	unsigned movingAvgHighBandwidth : 1;
	unsigned movingAvgLowBandwidth : 1;
	unsigned nrConfiguredBw : 1;
	unsigned nrMaxDlModulation : 1;
	unsigned nrTotalScheduledMimoLayers : 1;
	unsigned pActualLowBandwidth : 1;
	unsigned packetLifetimeVIBE : 1;
	unsigned packetLossRateVIBE : 1;
	unsigned phyRate : 1;
	unsigned pkgLifeTimeVO : 1;
	unsigned pktLifeTimeVO : 1;
	unsigned pktLossRateVO : 1;
	unsigned qbssLoad : 1;
	unsigned ratioDupeBytes : 1;
	unsigned ratioOOBBytes : 1;
	unsigned rrcState : 1;
	unsigned rxRetransmissionRate : 1;
	unsigned rxRetry : 1;
	unsigned tcpRTTAvg : 1;
	unsigned tcpRTTmin : 1;
	unsigned tcpRTTvar : 1;
	unsigned totalConfiguredBw : 1;
	unsigned totalConfiguredMimoLayers : 1;
	unsigned txRetransmissionRate : 1;
	unsigned txber : 1;
	unsigned videoStreamingStallTime : 1;
	unsigned weightedAveragePhyrateRx : 1;
	unsigned weightedAveragePhyrateTx : 1;
	unsigned weightedAverageRssi : 1;
	unsigned weightedAverageSnr : 1;
	unsigned wifChannelBW : 1;
	unsigned wifChannelType : 1;
	unsigned wifiCapability : 1;
	unsigned wifiModelConfidenceLevel : 1;
	unsigned wifiModelVersion : 1;
	unsigned wifiSinr : 1;
	unsigned wifichannel : 1;
	unsigned wifiguardinterval : 1;
	unsigned wifilowDataMode : 1;
	unsigned wifimcsindex : 1;
	unsigned wifinumberOfSpatialStreams : 1;
	unsigned wrmRecommendedRAT : 1;
	unsigned cellNsaEnabled : 1;
	unsigned isFR1 : 1;
} SCD_Struct_AW42;

typedef struct {
	unsigned timestamp : 1;
	unsigned wifiRssi : 1;
	unsigned wifiSNR : 1;
	unsigned audioErasure : 1;
	unsigned bssLoad : 1;
	unsigned cca : 1;
	unsigned cellRsrp : 1;
	unsigned cellRsrq : 1;
	unsigned cellSnr : 1;
	unsigned counter : 1;
	unsigned dataLQM : 1;
	unsigned facetimeAction : 1;
	unsigned facetimePacketLoss : 1;
	unsigned facetimeTimeDelay : 1;
	unsigned qbssLoad : 1;
	unsigned signalBar : 1;
	unsigned stationCount : 1;
	unsigned videoErasure : 1;
	unsigned voiceLQM : 1;
	unsigned wifiEstimatedBandwitdh : 1;
	unsigned wifiRxPhyRate : 1;
	unsigned wifiRxRetry : 1;
	unsigned wifiTxPER : 1;
	unsigned wifiTxPhyRate : 1;
	unsigned alertedMode : 1;
	unsigned captiveNetworks : 1;
	unsigned cellMode : 1;
	unsigned isPCDetected : 1;
	unsigned isStallDetected : 1;
} SCD_Struct_AW43;

