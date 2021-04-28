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

@class NSMutableArray, NSString;

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _intervalSinceLastAttempt;
	unsigned long long _latency;
	unsigned long long _maxIntervalBetweenLocations;
	unsigned long long _timestamp;
	unsigned _locationsProcessed;
	unsigned _placeCountDevice;
	unsigned _placeCountTotal;
	NSMutableArray* _places;
	unsigned _visitCountDevice;
	unsigned _visitCountTotal;
	NSMutableArray* _visits;
	char _trainedVisits;
	SCD_Struct_AW14 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasTrainedVisits; 
@property (assign,nonatomic) char trainedVisits;                                          //@synthesize trainedVisits=_trainedVisits - In the implementation block
@property (assign,nonatomic) char hasIntervalSinceLastAttempt; 
@property (assign,nonatomic) unsigned long long intervalSinceLastAttempt;                 //@synthesize intervalSinceLastAttempt=_intervalSinceLastAttempt - In the implementation block
@property (assign,nonatomic) char hasLatency; 
@property (assign,nonatomic) unsigned long long latency;                                  //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) char hasLocationsProcessed; 
@property (assign,nonatomic) unsigned locationsProcessed;                                 //@synthesize locationsProcessed=_locationsProcessed - In the implementation block
@property (assign,nonatomic) char hasMaxIntervalBetweenLocations; 
@property (assign,nonatomic) unsigned long long maxIntervalBetweenLocations;              //@synthesize maxIntervalBetweenLocations=_maxIntervalBetweenLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                                     //@synthesize visits=_visits - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                                     //@synthesize places=_places - In the implementation block
@property (assign,nonatomic) char hasVisitCountDevice; 
@property (assign,nonatomic) unsigned visitCountDevice;                                   //@synthesize visitCountDevice=_visitCountDevice - In the implementation block
@property (assign,nonatomic) char hasVisitCountTotal; 
@property (assign,nonatomic) unsigned visitCountTotal;                                    //@synthesize visitCountTotal=_visitCountTotal - In the implementation block
@property (assign,nonatomic) char hasPlaceCountDevice; 
@property (assign,nonatomic) unsigned placeCountDevice;                                   //@synthesize placeCountDevice=_placeCountDevice - In the implementation block
@property (assign,nonatomic) char hasPlaceCountTotal; 
@property (assign,nonatomic) unsigned placeCountTotal;                                    //@synthesize placeCountTotal=_placeCountTotal - In the implementation block
+(Class)visitsType;
+(Class)placesType;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)initWithLearnedLocationEngineMetrics:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)latency;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(NSMutableArray *)visits;
-(unsigned long long)maxIntervalBetweenLocations;
-(void)setMaxIntervalBetweenLocations:(unsigned long long)arg1 ;
-(char)trainedVisits;
-(unsigned long long)intervalSinceLastAttempt;
-(unsigned)locationsProcessed;
-(NSMutableArray *)places;
-(unsigned)visitCountDevice;
-(unsigned)visitCountTotal;
-(unsigned)placeCountDevice;
-(unsigned)placeCountTotal;
-(void)setIntervalSinceLastAttempt:(unsigned long long)arg1 ;
-(void)setLatency:(unsigned long long)arg1 ;
-(void)setLocationsProcessed:(unsigned)arg1 ;
-(void)setPlaceCountDevice:(unsigned)arg1 ;
-(void)setPlaceCountTotal:(unsigned)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)setVisitCountDevice:(unsigned)arg1 ;
-(void)setVisitCountTotal:(unsigned)arg1 ;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(void)setTrainedVisits:(char)arg1 ;
-(void)addVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned long long)placesCount;
-(void)clearPlaces;
-(void)setHasLatency:(char)arg1 ;
-(char)hasLatency;
-(void)addPlaces:(id)arg1 ;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(id)placesAtIndex:(unsigned long long)arg1 ;
-(void)setHasTrainedVisits:(char)arg1 ;
-(char)hasTrainedVisits;
-(void)setHasIntervalSinceLastAttempt:(char)arg1 ;
-(char)hasIntervalSinceLastAttempt;
-(void)setHasLocationsProcessed:(char)arg1 ;
-(char)hasLocationsProcessed;
-(void)setHasMaxIntervalBetweenLocations:(char)arg1 ;
-(char)hasMaxIntervalBetweenLocations;
-(void)setHasVisitCountDevice:(char)arg1 ;
-(char)hasVisitCountDevice;
-(void)setHasVisitCountTotal:(char)arg1 ;
-(char)hasVisitCountTotal;
-(void)setHasPlaceCountDevice:(char)arg1 ;
-(char)hasPlaceCountDevice;
-(void)setHasPlaceCountTotal:(char)arg1 ;
-(char)hasPlaceCountTotal;
@end

