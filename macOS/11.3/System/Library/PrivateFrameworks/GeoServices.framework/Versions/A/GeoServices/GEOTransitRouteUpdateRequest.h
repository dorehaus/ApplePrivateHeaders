/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, NSData, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEORouteAttributes, NSMutableArray, NSString, NSUUID, NSArray;

@interface GEOTransitRouteUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	NSData* _directionsResponseId;
	GEOAdditionalEnabledMarkets* _originalAdditionalEnabledMarkets;
	GEOClientCapabilities* _originalClientCapabilities;
	GEORouteAttributes* _originalRouteAttributes;
	NSMutableArray* _originalWaypoints;
	NSString* _requestingAppId;
	NSMutableArray* _routeIdentifiers;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_originalAdditionalEnabledMarkets : 1;
		unsigned read_originalClientCapabilities : 1;
		unsigned read_originalRouteAttributes : 1;
		unsigned read_originalWaypoints : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeIdentifiers : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSUUID * clientRouteID; 
@property (nonatomic,readonly) NSArray * allClientRouteIDs; 
@property (nonatomic,retain) NSMutableArray * routeIdentifiers; 
@property (nonatomic,readonly) char hasOriginalClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * originalClientCapabilities; 
@property (nonatomic,readonly) char hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (nonatomic,retain) NSMutableArray * originalWaypoints; 
@property (nonatomic,readonly) char hasOriginalRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * originalRouteAttributes; 
@property (nonatomic,readonly) char hasOriginalAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * originalAdditionalEnabledMarkets; 
@property (nonatomic,readonly) char hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) char hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)routeIdentifierType;
+(Class)originalWaypointType;
+(Class)serviceTagType;
+(id)mergedTransitRouteUpdateRequests:(id)arg1 ;
+(id)splitTransitRouteUpdateRequests:(id)arg1 ;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 ;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 composedRoutes:(id)arg3 ;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOClientCapabilities *)originalClientCapabilities;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(GEORouteAttributes *)originalRouteAttributes;
-(GEOAdditionalEnabledMarkets *)originalAdditionalEnabledMarkets;
-(NSData *)directionsResponseId;
-(NSString *)requestingAppId;
-(void)addRouteIdentifier:(id)arg1 ;
-(void)setOriginalClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)addOriginalWaypoint:(id)arg1 ;
-(void)setOriginalRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setOriginalAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(NSMutableArray *)originalWaypoints;
-(void)clearSensitiveFields;
-(unsigned long long)routeIdentifiersCount;
-(void)clearRouteIdentifiers;
-(id)routeIdentifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalWaypointsCount;
-(void)clearOriginalWaypoints;
-(id)originalWaypointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routeIdentifiers;
-(void)setRouteIdentifiers:(NSMutableArray *)arg1 ;
-(char)hasOriginalClientCapabilities;
-(char)hasAbClientMetadata;
-(void)setOriginalWaypoints:(NSMutableArray *)arg1 ;
-(char)hasOriginalRouteAttributes;
-(char)hasOriginalAdditionalEnabledMarkets;
-(char)hasDirectionsResponseId;
-(char)hasRequestingAppId;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSArray *)allClientRouteIDs;
-(NSUUID *)clientRouteID;
@end

