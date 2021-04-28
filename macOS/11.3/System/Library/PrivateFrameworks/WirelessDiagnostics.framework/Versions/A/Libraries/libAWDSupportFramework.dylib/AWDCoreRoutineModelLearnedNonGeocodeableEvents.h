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

@class NSString;

@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _learnedNongeocodableEvents;
	int _nongeocodableEvents;
	int _unlearnedNongeocodableEvents;
	SCD_Struct_AW8 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasUnlearnedNongeocodableEvents; 
@property (assign,nonatomic) int unlearnedNongeocodableEvents;                  //@synthesize unlearnedNongeocodableEvents=_unlearnedNongeocodableEvents - In the implementation block
@property (assign,nonatomic) char hasLearnedNongeocodableEvents; 
@property (assign,nonatomic) int learnedNongeocodableEvents;                    //@synthesize learnedNongeocodableEvents=_learnedNongeocodableEvents - In the implementation block
@property (assign,nonatomic) char hasNongeocodableEvents; 
@property (assign,nonatomic) int nongeocodableEvents;                           //@synthesize nongeocodableEvents=_nongeocodableEvents - In the implementation block
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setLearnedNongeocodableEvents:(int)arg1 ;
-(void)setNongeocodableEvents:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setUnlearnedNongeocodableEvents:(int)arg1 ;
-(void)setHasUnlearnedNongeocodableEvents:(char)arg1 ;
-(char)hasUnlearnedNongeocodableEvents;
-(void)setHasLearnedNongeocodableEvents:(char)arg1 ;
-(char)hasLearnedNongeocodableEvents;
-(void)setHasNongeocodableEvents:(char)arg1 ;
-(char)hasNongeocodableEvents;
-(int)unlearnedNongeocodableEvents;
-(int)learnedNongeocodableEvents;
-(int)nongeocodableEvents;
@end

