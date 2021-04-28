/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString;

@interface FlowOriginLedger : NSObject {

	BOOL _mostRecentFlowSeenAsForeground;
	BOOL _sampleStartedInForegroundState;
	BOOL _sampledAsHighTransferSize;
	BOOL _sampledAsHighInterfaceUse;
	BOOL _sampledAsCoreMediaAssetDownload;
	BOOL _sampledCoreMediaAssetDownloadInactive;
	NSMutableDictionary* _delegates;
	NSMutableDictionary* _currentFlows;
	NSMutableDictionary* _currentAssetDownloads;
	NSMutableArray* _possibleAVFlows;
	NSString* _name;
	unsigned long long _totalObservedIfTypeRxBytes;
	unsigned long long _totalObservedIfTypeTxBytes;
	unsigned long long _totalWithDelegatesIfTypeRxBytes;
	unsigned long long _totalWithDelegatesIfTypeTxBytes;
	unsigned long long _closedFlows;
	unsigned long long _prevPollIfTypeRxBytes;
	unsigned long long _prevPollIfTypeTxBytes;
	unsigned long long _prevPrevPollIfTypeRxBytes;
	unsigned long long _prevPrevPollIfTypeTxBytes;
	unsigned long long _sampleStartIfTypeRxBytes;
	unsigned long long _sampleStartIfTypeTxBytes;
	unsigned long long _sampleAdditionalFlags;
	double _sampleStartTime;
	double _sampleTotalBusyTime;
	double _lastUsed;

}

@property (nonatomic,retain) NSMutableDictionary * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentFlows;                              //@synthesize currentFlows=_currentFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentAssetDownloads;                     //@synthesize currentAssetDownloads=_currentAssetDownloads - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleAVFlows;                                //@synthesize possibleAVFlows=_possibleAVFlows - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeRxBytes;                   //@synthesize totalObservedIfTypeRxBytes=_totalObservedIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeTxBytes;                   //@synthesize totalObservedIfTypeTxBytes=_totalObservedIfTypeTxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalWithDelegatesIfTypeRxBytes;              //@synthesize totalWithDelegatesIfTypeRxBytes=_totalWithDelegatesIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalWithDelegatesIfTypeTxBytes;              //@synthesize totalWithDelegatesIfTypeTxBytes=_totalWithDelegatesIfTypeTxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long closedFlows;                                  //@synthesize closedFlows=_closedFlows - In the implementation block
@property (assign,nonatomic) unsigned long long prevPollIfTypeRxBytes;                        //@synthesize prevPollIfTypeRxBytes=_prevPollIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long prevPollIfTypeTxBytes;                        //@synthesize prevPollIfTypeTxBytes=_prevPollIfTypeTxBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long pollIntervalIfTypeRxBytes; 
@property (nonatomic,readonly) unsigned long long pollIntervalIfTypeTxBytes; 
@property (assign,nonatomic) unsigned long long prevPrevPollIfTypeRxBytes;                    //@synthesize prevPrevPollIfTypeRxBytes=_prevPrevPollIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long prevPrevPollIfTypeTxBytes;                    //@synthesize prevPrevPollIfTypeTxBytes=_prevPrevPollIfTypeTxBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long prevPollIntervalIfTypeRxBytes; 
@property (nonatomic,readonly) unsigned long long prevPollIntervalIfTypeTxBytes; 
@property (assign,nonatomic) unsigned long long sampleStartIfTypeRxBytes;                     //@synthesize sampleStartIfTypeRxBytes=_sampleStartIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long sampleStartIfTypeTxBytes;                     //@synthesize sampleStartIfTypeTxBytes=_sampleStartIfTypeTxBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long sampleIfTypeRxBytes; 
@property (nonatomic,readonly) unsigned long long sampleIfTypeTxBytes; 
@property (nonatomic,readonly) double sampleRxThroughput; 
@property (nonatomic,readonly) double sampleTxThroughput; 
@property (assign,nonatomic) BOOL mostRecentFlowSeenAsForeground;                             //@synthesize mostRecentFlowSeenAsForeground=_mostRecentFlowSeenAsForeground - In the implementation block
@property (assign,nonatomic) BOOL sampleStartedInForegroundState;                             //@synthesize sampleStartedInForegroundState=_sampleStartedInForegroundState - In the implementation block
@property (assign,nonatomic) BOOL sampledAsHighTransferSize;                                  //@synthesize sampledAsHighTransferSize=_sampledAsHighTransferSize - In the implementation block
@property (assign,nonatomic) BOOL sampledAsHighInterfaceUse;                                  //@synthesize sampledAsHighInterfaceUse=_sampledAsHighInterfaceUse - In the implementation block
@property (assign,nonatomic) BOOL sampledAsCoreMediaAssetDownload;                            //@synthesize sampledAsCoreMediaAssetDownload=_sampledAsCoreMediaAssetDownload - In the implementation block
@property (assign,nonatomic) BOOL sampledCoreMediaAssetDownloadInactive;                      //@synthesize sampledCoreMediaAssetDownloadInactive=_sampledCoreMediaAssetDownloadInactive - In the implementation block
@property (assign,nonatomic) unsigned long long sampleAdditionalFlags;                        //@synthesize sampleAdditionalFlags=_sampleAdditionalFlags - In the implementation block
@property (assign,nonatomic) double sampleStartTime;                                          //@synthesize sampleStartTime=_sampleStartTime - In the implementation block
@property (assign,nonatomic) double sampleTotalBusyTime;                                      //@synthesize sampleTotalBusyTime=_sampleTotalBusyTime - In the implementation block
@property (assign,nonatomic) double lastUsed;                                                 //@synthesize lastUsed=_lastUsed - In the implementation block
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSMutableDictionary *)delegates;
-(void)setDelegates:(NSMutableDictionary *)arg1 ;
-(id)briefDescription;
-(double)lastUsed;
-(void)setLastUsed:(double)arg1 ;
-(void)setSampleStartTime:(double)arg1 ;
-(double)sampleStartTime;
-(unsigned long long)totalObservedIfTypeRxBytes;
-(unsigned long long)totalObservedIfTypeTxBytes;
-(void)setTotalObservedIfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setTotalObservedIfTypeTxBytes:(unsigned long long)arg1 ;
-(unsigned long long)prevPollIfTypeRxBytes;
-(unsigned long long)prevPollIfTypeTxBytes;
-(unsigned long long)prevPrevPollIfTypeRxBytes;
-(unsigned long long)prevPrevPollIfTypeTxBytes;
-(unsigned long long)sampleStartIfTypeRxBytes;
-(unsigned long long)sampleStartIfTypeTxBytes;
-(void)setSampleStartIfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setSampleStartIfTypeTxBytes:(unsigned long long)arg1 ;
-(void)setSampleTotalBusyTime:(double)arg1 ;
-(void)setSampledAsHighTransferSize:(BOOL)arg1 ;
-(void)setSampledAsHighInterfaceUse:(BOOL)arg1 ;
-(void)setSampledAsCoreMediaAssetDownload:(BOOL)arg1 ;
-(void)setSampledCoreMediaAssetDownloadInactive:(BOOL)arg1 ;
-(void)setSampleAdditionalFlags:(unsigned long long)arg1 ;
-(unsigned long long)pollIntervalIfTypeRxBytes;
-(unsigned long long)pollIntervalIfTypeTxBytes;
-(unsigned long long)prevPollIntervalIfTypeRxBytes;
-(unsigned long long)prevPollIntervalIfTypeTxBytes;
-(unsigned long long)sampleIfTypeRxBytes;
-(unsigned long long)sampleIfTypeTxBytes;
-(double)sampleRxThroughput;
-(double)sampleTxThroughput;
-(void)startSamplingPeriod;
-(NSMutableDictionary *)currentFlows;
-(void)setCurrentFlows:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)currentAssetDownloads;
-(void)setCurrentAssetDownloads:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)possibleAVFlows;
-(void)setPossibleAVFlows:(NSMutableArray *)arg1 ;
-(unsigned long long)totalWithDelegatesIfTypeRxBytes;
-(void)setTotalWithDelegatesIfTypeRxBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalWithDelegatesIfTypeTxBytes;
-(void)setTotalWithDelegatesIfTypeTxBytes:(unsigned long long)arg1 ;
-(unsigned long long)closedFlows;
-(void)setClosedFlows:(unsigned long long)arg1 ;
-(void)setPrevPollIfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setPrevPollIfTypeTxBytes:(unsigned long long)arg1 ;
-(void)setPrevPrevPollIfTypeRxBytes:(unsigned long long)arg1 ;
-(void)setPrevPrevPollIfTypeTxBytes:(unsigned long long)arg1 ;
-(BOOL)mostRecentFlowSeenAsForeground;
-(void)setMostRecentFlowSeenAsForeground:(BOOL)arg1 ;
-(BOOL)sampleStartedInForegroundState;
-(void)setSampleStartedInForegroundState:(BOOL)arg1 ;
-(BOOL)sampledAsHighTransferSize;
-(BOOL)sampledAsHighInterfaceUse;
-(BOOL)sampledAsCoreMediaAssetDownload;
-(BOOL)sampledCoreMediaAssetDownloadInactive;
-(unsigned long long)sampleAdditionalFlags;
-(double)sampleTotalBusyTime;
@end

