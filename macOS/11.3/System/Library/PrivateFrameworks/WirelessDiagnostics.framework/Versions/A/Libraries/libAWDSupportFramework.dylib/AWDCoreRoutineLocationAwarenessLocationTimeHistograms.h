/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram, NSString;

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _anyPositiveHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan10mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan200mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan20mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan55mHistogram;
	SCD_Struct_AW2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) char hasLessThan10mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan10mHistogram;               //@synthesize lessThan10mHistogram=_lessThan10mHistogram - In the implementation block
@property (nonatomic,readonly) char hasLessThan20mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan20mHistogram;               //@synthesize lessThan20mHistogram=_lessThan20mHistogram - In the implementation block
@property (nonatomic,readonly) char hasLessThan55mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan55mHistogram;               //@synthesize lessThan55mHistogram=_lessThan55mHistogram - In the implementation block
@property (nonatomic,readonly) char hasLessThan200mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan200mHistogram;              //@synthesize lessThan200mHistogram=_lessThan200mHistogram - In the implementation block
@property (nonatomic,readonly) char hasAnyPositiveHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * anyPositiveHistogram;               //@synthesize anyPositiveHistogram=_anyPositiveHistogram - In the implementation block
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)anyPositiveHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan200mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan55mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan20mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan10mHistogram;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setLessThan10mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan20mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan55mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan200mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setAnyPositiveHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(char)hasLessThan10mHistogram;
-(char)hasLessThan20mHistogram;
-(char)hasLessThan55mHistogram;
-(char)hasLessThan200mHistogram;
-(char)hasAnyPositiveHistogram;
@end

