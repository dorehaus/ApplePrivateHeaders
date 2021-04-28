/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _associatedSleepDur;
	unsigned _roamDur;
	unsigned _totalDur;
	unsigned _type;
	unsigned _unassociatedSleepDur;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasUnassociatedSleepDur; 
@property (assign,nonatomic) unsigned unassociatedSleepDur;              //@synthesize unassociatedSleepDur=_unassociatedSleepDur - In the implementation block
@property (assign,nonatomic) char hasAssociatedSleepDur; 
@property (assign,nonatomic) unsigned associatedSleepDur;                //@synthesize associatedSleepDur=_associatedSleepDur - In the implementation block
@property (assign,nonatomic) char hasRoamDur; 
@property (assign,nonatomic) unsigned roamDur;                           //@synthesize roamDur=_roamDur - In the implementation block
@property (assign,nonatomic) char hasTotalDur; 
@property (assign,nonatomic) unsigned totalDur;                          //@synthesize totalDur=_totalDur - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setUnassociatedSleepDur:(unsigned)arg1 ;
-(void)setHasUnassociatedSleepDur:(char)arg1 ;
-(char)hasUnassociatedSleepDur;
-(void)setAssociatedSleepDur:(unsigned)arg1 ;
-(void)setHasAssociatedSleepDur:(char)arg1 ;
-(char)hasAssociatedSleepDur;
-(void)setRoamDur:(unsigned)arg1 ;
-(void)setHasRoamDur:(char)arg1 ;
-(char)hasRoamDur;
-(void)setTotalDur:(unsigned)arg1 ;
-(void)setHasTotalDur:(char)arg1 ;
-(char)hasTotalDur;
-(unsigned)unassociatedSleepDur;
-(unsigned)associatedSleepDur;
-(unsigned)roamDur;
-(unsigned)totalDur;
@end

