/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOURLCamera, GEOURLCenterSpan, NSString, GEOURLRouteHandle, GEOURLTimePoint;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {

	PBDataReader* _reader;
	GEOURLCamera* _camera;
	GEOURLCenterSpan* _centerSpan;
	NSString* _referralIdentifier;
	GEOURLRouteHandle* _routeHandle;
	GEOURLTimePoint* _timePoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _mapType;
	int _transportType;
	int _userTrackingMode;
	char _connectedToCar;
	char _enableTraffic;
	struct {
		unsigned has_mapType : 1;
		unsigned has_transportType : 1;
		unsigned has_userTrackingMode : 1;
		unsigned has_connectedToCar : 1;
		unsigned has_enableTraffic : 1;
		unsigned read_camera : 1;
		unsigned read_centerSpan : 1;
		unsigned read_referralIdentifier : 1;
		unsigned read_routeHandle : 1;
		unsigned read_timePoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasEnableTraffic; 
@property (assign,nonatomic) char enableTraffic; 
@property (assign,nonatomic) char hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) char hasCenterSpan; 
@property (nonatomic,retain) GEOURLCenterSpan * centerSpan; 
@property (nonatomic,readonly) char hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera; 
@property (nonatomic,readonly) char hasReferralIdentifier; 
@property (nonatomic,retain) NSString * referralIdentifier; 
@property (assign,nonatomic) char hasUserTrackingMode; 
@property (assign,nonatomic) int userTrackingMode; 
@property (nonatomic,readonly) char hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) char hasTimePoint; 
@property (nonatomic,retain) GEOURLTimePoint * timePoint; 
@property (assign,nonatomic) char hasConnectedToCar; 
@property (assign,nonatomic) char connectedToCar; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(void)setEnableTraffic:(char)arg1 ;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(void)setTimePoint:(GEOURLTimePoint *)arg1 ;
-(void)setConnectedToCar:(char)arg1 ;
-(char)hasEnableTraffic;
-(char)hasMapType;
-(char)hasTransportType;
-(char)hasCenterSpan;
-(char)hasCamera;
-(char)hasReferralIdentifier;
-(char)hasRouteHandle;
-(char)hasTimePoint;
-(int)mapType;
-(GEOURLCenterSpan *)centerSpan;
-(GEOURLCamera *)camera;
-(char)enableTraffic;
-(NSString *)referralIdentifier;
-(GEOURLRouteHandle *)routeHandle;
-(GEOURLTimePoint *)timePoint;
-(char)hasConnectedToCar;
-(char)connectedToCar;
-(id)urlRepresentation;
-(void)setHasMapType:(char)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)setHasEnableTraffic:(char)arg1 ;
-(int)userTrackingMode;
-(void)setHasUserTrackingMode:(char)arg1 ;
-(char)hasUserTrackingMode;
-(id)userTrackingModeAsString:(int)arg1 ;
-(int)StringAsUserTrackingMode:(id)arg1 ;
-(void)setHasConnectedToCar:(char)arg1 ;
@end

