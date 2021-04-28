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

@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _networkType;
	unsigned _networksShownAtLeastOnceInLast24Hrs;
	unsigned _popUpShownForSecs;
	unsigned _timeSinceShownOnSameNetworkSecs;
	unsigned _timesShownOnAnyNetworkLast24Hrs;
	SCD_Struct_AW28 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                                           //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) char hasPopUpShownForSecs; 
@property (assign,nonatomic) unsigned popUpShownForSecs;                                //@synthesize popUpShownForSecs=_popUpShownForSecs - In the implementation block
@property (assign,nonatomic) char hasTimeSinceShownOnSameNetworkSecs; 
@property (assign,nonatomic) unsigned timeSinceShownOnSameNetworkSecs;                  //@synthesize timeSinceShownOnSameNetworkSecs=_timeSinceShownOnSameNetworkSecs - In the implementation block
@property (assign,nonatomic) char hasTimesShownOnAnyNetworkLast24Hrs; 
@property (assign,nonatomic) unsigned timesShownOnAnyNetworkLast24Hrs;                  //@synthesize timesShownOnAnyNetworkLast24Hrs=_timesShownOnAnyNetworkLast24Hrs - In the implementation block
@property (assign,nonatomic) char hasNetworksShownAtLeastOnceInLast24Hrs; 
@property (assign,nonatomic) unsigned networksShownAtLeastOnceInLast24Hrs;              //@synthesize networksShownAtLeastOnceInLast24Hrs=_networksShownAtLeastOnceInLast24Hrs - In the implementation block
@property (assign,nonatomic) char hasAction; 
@property (assign,nonatomic) int action;                                                //@synthesize action=_action - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)action;
-(void)setAction:(int)arg1 ;
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
-(void)setHasAction:(char)arg1 ;
-(char)hasAction;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setPopUpShownForSecs:(unsigned)arg1 ;
-(void)setHasPopUpShownForSecs:(char)arg1 ;
-(char)hasPopUpShownForSecs;
-(void)setTimeSinceShownOnSameNetworkSecs:(unsigned)arg1 ;
-(void)setHasTimeSinceShownOnSameNetworkSecs:(char)arg1 ;
-(char)hasTimeSinceShownOnSameNetworkSecs;
-(void)setTimesShownOnAnyNetworkLast24Hrs:(unsigned)arg1 ;
-(void)setHasTimesShownOnAnyNetworkLast24Hrs:(char)arg1 ;
-(char)hasTimesShownOnAnyNetworkLast24Hrs;
-(void)setNetworksShownAtLeastOnceInLast24Hrs:(unsigned)arg1 ;
-(void)setHasNetworksShownAtLeastOnceInLast24Hrs:(char)arg1 ;
-(char)hasNetworksShownAtLeastOnceInLast24Hrs;
-(unsigned)popUpShownForSecs;
-(unsigned)timeSinceShownOnSameNetworkSecs;
-(unsigned)timesShownOnAnyNetworkLast24Hrs;
-(unsigned)networksShownAtLeastOnceInLast24Hrs;
@end

