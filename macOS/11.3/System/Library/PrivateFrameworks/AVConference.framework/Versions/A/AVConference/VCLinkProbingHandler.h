/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCLinkProbingHandlerDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class VCDispatchTimer, NSObject, NSMutableDictionary, NSArray, NSMutableSet, NSSet;

@interface VCLinkProbingHandler : NSObject {

	id<VCLinkProbingHandlerDelegate> _linkProbingHandlerDelegate;
	VCDispatchTimer* _queryProbingResultsTimer;
	VCDispatchTimer* _probingLockdownTimer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _aggregatedProbingResults;
	NSArray* _linkPreferenceOrder;
	unsigned char _linkProbingCapabilityVersion;
	unsigned _linkProbingInterval;
	unsigned _linkProbingTimeout;
	unsigned _linkProbingQueryResultsInterval;
	unsigned _minSentRequestCountThreshold;
	unsigned char _linkProbingState;
	double _lastLinkPreferenceUpdateNotificationTime;
	double _linkProbingConnectionLockdownPeriod;
	double _expMovMeanFactor;
	double _plrEnvelopeAttackFactor;
	double _plrEnvelopeDecayFactor;
	NSArray* _plrBuckets;
	SCD_Struct_VC186 _linkProbingResultConfig;
	NSMutableSet* _activelyProbingLinkIDs;
	char _isDuplicationEnabled;
	char _isProbingLockedOut;
	double _probingStartTime;
	double _probingLockoutStartTime;
	double _linkProbingLockdownPeriod;
	unsigned _linkProbingDuplicationWaitTimeout;
	unsigned _consecutiveIdenticalQueryResultMax;
	unsigned _consecutiveIdenticalQueryResultCount;

}

@property (assign) id<VCLinkProbingHandlerDelegate> linkProbingHandlerDelegate; 
@property (assign) unsigned char linkProbingCapabilityVersion;                               //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
@property (readonly) char isLinkProbingActive; 
@property (readonly) NSSet * activelyProbingLinkIDs;                                         //@synthesize activelyProbingLinkIDs=_activelyProbingLinkIDs - In the implementation block
@property (assign) char isDuplicationEnabled;                                                //@synthesize isDuplicationEnabled=_isDuplicationEnabled - In the implementation block
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(unsigned char)linkProbingCapabilityVersion;
-(char)isDuplicationEnabled;
-(void)setIsDuplicationEnabled:(char)arg1 ;
-(void)startActiveProbingOnLinks:(id)arg1 ;
-(void)stopActiveProbingOnLinks:(id)arg1 resetStats:(char)arg2 ;
-(void)updateProbingResults:(id)arg1 ;
-(id)getProbingResultsForLinkID:(id)arg1 ;
-(char)isLinkProbingActive;
-(void)loadStorebagValues;
-(void)setLinkProbingHandlerDelegate:(id<VCLinkProbingHandlerDelegate>)arg1 ;
-(void)queryProbingResults;
-(void)probingLockdownEnded;
-(id<VCLinkProbingHandlerDelegate>)linkProbingHandlerDelegate;
-(void)setLinkProbingResultConfig;
-(void)resetAggregatedProbingResults;
-(void)removeProbingResultsForLinks:(id)arg1 ;
-(void)flushProbingResults:(id)arg1 ;
-(void)dispatchedUpdateProbingResults:(id)arg1 ;
-(char)isValidProbingResult:(id)arg1 ;
-(void)updateLinkPreferenceOrder;
-(NSSet *)activelyProbingLinkIDs;
@end

