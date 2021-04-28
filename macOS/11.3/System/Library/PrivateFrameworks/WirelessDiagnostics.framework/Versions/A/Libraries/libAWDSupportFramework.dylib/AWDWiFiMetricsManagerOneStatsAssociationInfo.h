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

@class AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters, NSMutableArray;

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerBTCoexModeChange* _btCoexModeChange;
	AWDWiFiMetricsManagerBTCoexStats* _btCoexStats;
	AWDWiFiMetricsManagerChipCounters* _chipCounters;
	NSMutableArray* _chipCountersPerSlices;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasChipCounters; 
@property (nonatomic,retain) AWDWiFiMetricsManagerChipCounters * chipCounters;                      //@synthesize chipCounters=_chipCounters - In the implementation block
@property (nonatomic,readonly) char hasBtCoexStats; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexStats * btCoexStats;                        //@synthesize btCoexStats=_btCoexStats - In the implementation block
@property (nonatomic,readonly) char hasBtCoexModeChange; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexModeChange * btCoexModeChange;              //@synthesize btCoexModeChange=_btCoexModeChange - In the implementation block
@property (nonatomic,retain) NSMutableArray * chipCountersPerSlices;                                //@synthesize chipCountersPerSlices=_chipCountersPerSlices - In the implementation block
+(Class)chipCountersPerSliceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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
-(void)setHasTimestamp:(char)arg1 ;
-(void)setChipCounters:(AWDWiFiMetricsManagerChipCounters *)arg1 ;
-(void)setBtCoexStats:(AWDWiFiMetricsManagerBTCoexStats *)arg1 ;
-(void)setBtCoexModeChange:(AWDWiFiMetricsManagerBTCoexModeChange *)arg1 ;
-(void)setChipCountersPerSlices:(NSMutableArray *)arg1 ;
-(void)addChipCountersPerSlice:(id)arg1 ;
-(unsigned long long)chipCountersPerSlicesCount;
-(void)clearChipCountersPerSlices;
-(id)chipCountersPerSliceAtIndex:(unsigned long long)arg1 ;
-(char)hasChipCounters;
-(char)hasBtCoexStats;
-(char)hasBtCoexModeChange;
-(AWDWiFiMetricsManagerChipCounters *)chipCounters;
-(AWDWiFiMetricsManagerBTCoexStats *)btCoexStats;
-(AWDWiFiMetricsManagerBTCoexModeChange *)btCoexModeChange;
-(NSMutableArray *)chipCountersPerSlices;
@end

