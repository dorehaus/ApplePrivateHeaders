/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEONavigationTransitStopSummary;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _lineID;
	double _scheduledArrival;
	double _scheduledDeparture;
	GEONavigationTransitStopSummary* _stopFrom;
	GEONavigationTransitStopSummary* _stopTo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineID : 1;
		unsigned has_scheduledArrival : 1;
		unsigned has_scheduledDeparture : 1;
		unsigned read_stopFrom : 1;
		unsigned read_stopTo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasLineID; 
@property (assign,nonatomic) unsigned long long lineID; 
@property (assign,nonatomic) char hasScheduledDeparture; 
@property (assign,nonatomic) double scheduledDeparture; 
@property (assign,nonatomic) char hasScheduledArrival; 
@property (assign,nonatomic) double scheduledArrival; 
@property (nonatomic,readonly) char hasStopFrom; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopFrom; 
@property (nonatomic,readonly) char hasStopTo; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopTo; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEONavigationTransitStopSummary *)stopFrom;
-(GEONavigationTransitStopSummary *)stopTo;
-(void)setLineID:(unsigned long long)arg1 ;
-(void)setScheduledDeparture:(double)arg1 ;
-(void)setScheduledArrival:(double)arg1 ;
-(void)setStopFrom:(GEONavigationTransitStopSummary *)arg1 ;
-(void)setStopTo:(GEONavigationTransitStopSummary *)arg1 ;
-(unsigned long long)lineID;
-(void)setHasLineID:(char)arg1 ;
-(char)hasLineID;
-(double)scheduledDeparture;
-(void)setHasScheduledDeparture:(char)arg1 ;
-(char)hasScheduledDeparture;
-(double)scheduledArrival;
-(void)setHasScheduledArrival:(char)arg1 ;
-(char)hasScheduledArrival;
-(char)hasStopFrom;
-(char)hasStopTo;
-(id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3 ;
@end

