/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsPredictions : PBCodable <NSCopying> {

	unsigned long long _lifetimeOldestItemSecs;
	unsigned long long _modelGraphPullups;
	unsigned long long _modelRecalls;
	unsigned long long _predictionQueries;
	unsigned long long _timeSinceLastTrainedSecs;
	unsigned long long _timestamp;
	unsigned long long _uniquePredictionClients;
	unsigned _calendarTypeMarker;
	unsigned _dayAlikeGroups;
	int _networkType;
	unsigned _predictionErrorOver24hr1000;
	unsigned _timeZoneMarker;
	int _trainingCompletionCode;
	unsigned _trainingProgress1000;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                                          //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastTrainedSecs; 
@property (assign,nonatomic) unsigned long long timeSinceLastTrainedSecs;              //@synthesize timeSinceLastTrainedSecs=_timeSinceLastTrainedSecs - In the implementation block
@property (assign,nonatomic) char hasTrainingCompletionCode; 
@property (assign,nonatomic) int trainingCompletionCode;                               //@synthesize trainingCompletionCode=_trainingCompletionCode - In the implementation block
@property (assign,nonatomic) char hasLifetimeOldestItemSecs; 
@property (assign,nonatomic) unsigned long long lifetimeOldestItemSecs;                //@synthesize lifetimeOldestItemSecs=_lifetimeOldestItemSecs - In the implementation block
@property (assign,nonatomic) char hasTrainingProgress1000; 
@property (assign,nonatomic) unsigned trainingProgress1000;                            //@synthesize trainingProgress1000=_trainingProgress1000 - In the implementation block
@property (assign,nonatomic) char hasPredictionErrorOver24hr1000; 
@property (assign,nonatomic) unsigned predictionErrorOver24hr1000;                     //@synthesize predictionErrorOver24hr1000=_predictionErrorOver24hr1000 - In the implementation block
@property (assign,nonatomic) char hasUniquePredictionClients; 
@property (assign,nonatomic) unsigned long long uniquePredictionClients;               //@synthesize uniquePredictionClients=_uniquePredictionClients - In the implementation block
@property (assign,nonatomic) char hasPredictionQueries; 
@property (assign,nonatomic) unsigned long long predictionQueries;                     //@synthesize predictionQueries=_predictionQueries - In the implementation block
@property (assign,nonatomic) char hasModelRecalls; 
@property (assign,nonatomic) unsigned long long modelRecalls;                          //@synthesize modelRecalls=_modelRecalls - In the implementation block
@property (assign,nonatomic) char hasModelGraphPullups; 
@property (assign,nonatomic) unsigned long long modelGraphPullups;                     //@synthesize modelGraphPullups=_modelGraphPullups - In the implementation block
@property (assign,nonatomic) char hasTimeZoneMarker; 
@property (assign,nonatomic) unsigned timeZoneMarker;                                  //@synthesize timeZoneMarker=_timeZoneMarker - In the implementation block
@property (assign,nonatomic) char hasCalendarTypeMarker; 
@property (assign,nonatomic) unsigned calendarTypeMarker;                              //@synthesize calendarTypeMarker=_calendarTypeMarker - In the implementation block
@property (assign,nonatomic) char hasDayAlikeGroups; 
@property (assign,nonatomic) unsigned dayAlikeGroups;                                  //@synthesize dayAlikeGroups=_dayAlikeGroups - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setTimeSinceLastTrainedSecs:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastTrainedSecs:(char)arg1 ;
-(char)hasTimeSinceLastTrainedSecs;
-(int)trainingCompletionCode;
-(void)setTrainingCompletionCode:(int)arg1 ;
-(void)setHasTrainingCompletionCode:(char)arg1 ;
-(char)hasTrainingCompletionCode;
-(id)trainingCompletionCodeAsString:(int)arg1 ;
-(int)StringAsTrainingCompletionCode:(id)arg1 ;
-(void)setLifetimeOldestItemSecs:(unsigned long long)arg1 ;
-(void)setHasLifetimeOldestItemSecs:(char)arg1 ;
-(char)hasLifetimeOldestItemSecs;
-(void)setTrainingProgress1000:(unsigned)arg1 ;
-(void)setHasTrainingProgress1000:(char)arg1 ;
-(char)hasTrainingProgress1000;
-(void)setPredictionErrorOver24hr1000:(unsigned)arg1 ;
-(void)setHasPredictionErrorOver24hr1000:(char)arg1 ;
-(char)hasPredictionErrorOver24hr1000;
-(void)setUniquePredictionClients:(unsigned long long)arg1 ;
-(void)setHasUniquePredictionClients:(char)arg1 ;
-(char)hasUniquePredictionClients;
-(void)setPredictionQueries:(unsigned long long)arg1 ;
-(void)setHasPredictionQueries:(char)arg1 ;
-(char)hasPredictionQueries;
-(void)setModelRecalls:(unsigned long long)arg1 ;
-(void)setHasModelRecalls:(char)arg1 ;
-(char)hasModelRecalls;
-(void)setModelGraphPullups:(unsigned long long)arg1 ;
-(void)setHasModelGraphPullups:(char)arg1 ;
-(char)hasModelGraphPullups;
-(void)setTimeZoneMarker:(unsigned)arg1 ;
-(void)setHasTimeZoneMarker:(char)arg1 ;
-(char)hasTimeZoneMarker;
-(void)setCalendarTypeMarker:(unsigned)arg1 ;
-(void)setHasCalendarTypeMarker:(char)arg1 ;
-(char)hasCalendarTypeMarker;
-(void)setDayAlikeGroups:(unsigned)arg1 ;
-(void)setHasDayAlikeGroups:(char)arg1 ;
-(char)hasDayAlikeGroups;
-(unsigned long long)timeSinceLastTrainedSecs;
-(unsigned long long)lifetimeOldestItemSecs;
-(unsigned)trainingProgress1000;
-(unsigned)predictionErrorOver24hr1000;
-(unsigned long long)uniquePredictionClients;
-(unsigned long long)predictionQueries;
-(unsigned long long)modelRecalls;
-(unsigned long long)modelGraphPullups;
-(unsigned)timeZoneMarker;
-(unsigned)calendarTypeMarker;
-(unsigned)dayAlikeGroups;
@end

