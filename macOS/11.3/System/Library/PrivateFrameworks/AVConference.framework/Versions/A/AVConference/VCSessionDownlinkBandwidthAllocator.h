/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface VCSessionDownlinkBandwidthAllocator : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _clients;
	NSMutableDictionary* _selectedMediaEntriesForClients;
	NSMutableDictionary* _allocatedMediaEntriesForClients;
	NSMutableArray* _sortedMediaEntries;
	opaqueRTCReportingRef _reportingAgent;
	unsigned _maxConcurrentVideoClients;

}

@property (nonatomic,readonly) unsigned long long simultaneousTalkers; 
-(void)dealloc;
-(void)reset;
-(id)initWithReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(unsigned long long)simultaneousTalkers;
-(void)actualNetworkBitrateVideoDidChangeForClient:(id)arg1 ;
-(void)actualNetworkBitrateAudioDidChangeForClient:(id)arg1 ;
-(id)distributeBitrate:(unsigned)arg1 ;
-(void)registerForBandwidthAllocationWithClient:(id)arg1 ;
-(void)deregisterForBandwidthAllocationWithClient:(id)arg1 ;
-(unsigned)requiredAudioBitrate:(unsigned)arg1 highestAudioBitrates:(id)arg2 ;
-(void)sortMediaEntries;
-(void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned)arg2 ;
-(void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1 ;
-(void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned)arg2 actualNetworkBitrate:(unsigned)arg3 optedInStreamID:(unsigned short)arg4 actualStreamID:(unsigned short)arg5 ;
@end

