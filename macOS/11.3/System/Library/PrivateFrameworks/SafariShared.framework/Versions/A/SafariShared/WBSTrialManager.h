/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class TRIClient, NSObject, NSDictionary, NSString, WBSTrialIdentifiers;

@interface WBSTrialManager : NSObject {

	os_unfair_lock_s _lock;
	TRIClient* _trialClient;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _factors;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,retain) TRIClient * trialClient;                                               //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSDictionary * factors;                                                //@synthesize factors=_factors - In the implementation block
@property (nonatomic,copy) NSString * experimentId;                                                 //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,copy) NSString * treatmentId;                                                  //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) WBSTrialIdentifiers * identifiers; 
@property (nonatomic,readonly) long long maximumTopSectionParsecResultsToDisplay; 
@property (nonatomic,readonly) char enableCompletionListHistoryDeduplication; 
@property (nonatomic,readonly) char enableDedupeAgainstSwitchToTab; 
@property (nonatomic,readonly) long long characterThresholdForAnywhereInTitleOrURL; 
@property (nonatomic,readonly) double percentageThresholdForAnywhereInTitle; 
@property (nonatomic,readonly) double percentageThresholdForAnywhereInURL; 
@property (nonatomic,readonly) long long characterThresholdForStartOfURLPathComponent; 
@property (nonatomic,readonly) long long matchingWordsInTitleThreshold; 
@property (nonatomic,readonly) long long characterThresholdForStartOfTitle; 
@property (nonatomic,readonly) long long characterThresholdForStartOfTitleWord; 
@property (nonatomic,readonly) long long characterThresholdForStartOfURL; 
@property (nonatomic,readonly) double normalizedTopSitesScoreAndVisitCountMultiplier; 
@property (nonatomic,readonly) char enableDedupeThroughAlternativeURLs; 
@property (nonatomic,readonly) char disableLocalPhantomTophits; 
+(id)shared;
-(id)init;
-(os_unfair_lock_s)lock;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(WBSTrialIdentifiers *)identifiers;
-(TRIClient *)trialClient;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(NSDictionary *)factors;
-(NSString *)treatmentId;
-(void)setTreatmentId:(NSString *)arg1 ;
-(void)fetchFactorsInNamespace:(id)arg1 ;
-(void)setFactors:(NSDictionary *)arg1 ;
-(id)factorWithName:(id)arg1 ;
-(id)numberFactorWithName:(id)arg1 ;
-(id)stringFactorWithName:(id)arg1 ;
-(char)enableCompletionListHistoryDeduplication;
-(char)enableDedupeAgainstSwitchToTab;
-(long long)characterThresholdForAnywhereInTitleOrURL;
-(double)percentageThresholdForAnywhereInTitle;
-(double)percentageThresholdForAnywhereInURL;
-(long long)characterThresholdForStartOfURLPathComponent;
-(long long)matchingWordsInTitleThreshold;
-(long long)characterThresholdForStartOfTitle;
-(long long)characterThresholdForStartOfTitleWord;
-(long long)characterThresholdForStartOfURL;
-(double)normalizedTopSitesScoreAndVisitCountMultiplier;
-(char)enableDedupeThroughAlternativeURLs;
-(char)disableLocalPhantomTophits;
-(long long)maximumTopSectionParsecResultsToDisplay;
@end

