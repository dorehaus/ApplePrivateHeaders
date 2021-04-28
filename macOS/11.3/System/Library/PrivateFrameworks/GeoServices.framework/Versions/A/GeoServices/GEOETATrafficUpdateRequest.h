/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, NSMutableArray, NSData, NSString, GEORouteAttributes, GEOTFTrafficSnapshot, GEOETATrafficUpdateWaypointRoute;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _clientTimepoint;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	NSString* _displayedBannerId;
	NSString* _requestingAppId;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	NSMutableArray* _trafficApiResponses;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSData* _tripID;
	GEOLocation* _tripOrigin;
	GEOETATrafficUpdateWaypointRoute* _waypointRoute;
	NSString* _xpcUuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxAlternateRouteCount;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	char _includeBetterRouteSuggestion;
	char _needServerLatency;
	char _useClientTimepointAsNow;
	char _useLiveTrafficAsFallback;
	struct {
		unsigned has_clientTimepoint : 1;
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_maxAlternateRouteCount : 1;
		unsigned has_previouslyRejectedRerouteSavings : 1;
		unsigned has_rerouteStatus : 1;
		unsigned has_includeBetterRouteSuggestion : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useClientTimepointAsNow : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_destinationWaypointTypeds : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_displayedBannerId : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_routeAttributes : 1;
		unsigned read_routes : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponses : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_tripID : 1;
		unsigned read_tripOrigin : 1;
		unsigned read_waypointRoute : 1;
		unsigned read_xpcUuid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) char hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) char useLiveTrafficAsFallback; 
@property (assign,nonatomic) char hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) char hasUseClientTimepointAsNow; 
@property (assign,nonatomic) char useClientTimepointAsNow; 
@property (assign,nonatomic) char hasNeedServerLatency; 
@property (assign,nonatomic) char needServerLatency; 
@property (nonatomic,readonly) char hasXpcUuid; 
@property (nonatomic,retain) NSString * xpcUuid; 
@property (nonatomic,readonly) char hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) char hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes; 
@property (assign,nonatomic) char hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) char includeBetterRouteSuggestion; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,readonly) char hasWaypointRoute; 
@property (nonatomic,retain) GEOETATrafficUpdateWaypointRoute * waypointRoute; 
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) char hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) char hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds; 
@property (assign,nonatomic) char hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings; 
@property (nonatomic,readonly) char hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (assign,nonatomic) char hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus; 
@property (nonatomic,readonly) char hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) char hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (assign,nonatomic) char hasMaxAlternateRouteCount; 
@property (assign,nonatomic) unsigned maxAlternateRouteCount; 
@property (nonatomic,readonly) char hasTripID; 
@property (nonatomic,retain) NSData * tripID; 
@property (nonatomic,readonly) char hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,readonly) char hasTripOrigin; 
@property (nonatomic,retain) GEOLocation * tripOrigin; 
@property (nonatomic,readonly) char hasDisplayedBannerId; 
@property (nonatomic,retain) NSString * displayedBannerId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,retain) NSMutableArray * trafficApiResponses; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeType;
+(char)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)trafficApiResponsesType;
+(Class)trafficSnapshotIdsType;
+(Class)destinationWaypointTypedType;
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
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(NSString *)requestingAppId;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(void)clearSensitiveFields;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(char)hasAbClientMetadata;
-(char)hasRequestingAppId;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSData *)tripID;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(char)arg1 ;
-(char)hasSessionRelativeTimestamp;
-(GEOLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(char)hasCurrentUserLocation;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(char)hasClientCapabilities;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(char)hasSessionState;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(NSMutableArray *)routes;
-(GEOETATrafficUpdateWaypointRoute *)waypointRoute;
-(char)hasDirectionsResponseID;
-(char)hasXpcUuid;
-(void)setXpcUuid:(NSString *)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(unsigned long long)routesCount;
-(void)setTripID:(NSData *)arg1 ;
-(char)hasTripID;
-(void)setTripOrigin:(GEOLocation *)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(void)setMaxAlternateRouteCount:(unsigned)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(char)hasAdditionalEnabledMarkets;
-(unsigned)maxAlternateRouteCount;
-(void)setHasMaxAlternateRouteCount:(char)arg1 ;
-(char)hasMaxAlternateRouteCount;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setUseLiveTrafficAsFallback:(char)arg1 ;
-(void)setNeedServerLatency:(char)arg1 ;
-(char)hasTrafficSnapshot;
-(char)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(char)arg1 ;
-(char)hasUseLiveTrafficAsFallback;
-(char)needServerLatency;
-(void)setHasNeedServerLatency:(char)arg1 ;
-(char)hasNeedServerLatency;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setUseClientTimepointAsNow:(char)arg1 ;
-(GEOTimepoint)clientTimepoint;
-(void)setHasClientTimepoint:(char)arg1 ;
-(char)hasClientTimepoint;
-(char)useClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(char)arg1 ;
-(char)hasUseClientTimepointAsNow;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(GEOCommonOptions *)commonOptions;
-(NSMutableArray *)trafficSnapshotIds;
-(void)addTrafficApiResponses:(id)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(unsigned long long)trafficApiResponsesCount;
-(void)clearTrafficApiResponses;
-(id)trafficApiResponsesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(void)clearTrafficSnapshotIds;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(char)hasRouteAttributes;
-(char)hasCommonOptions;
-(NSMutableArray *)trafficApiResponses;
-(void)setTrafficApiResponses:(NSMutableArray *)arg1 ;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(void)addRoute:(id)arg1 ;
-(void)clearRoutes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setWaypointRoute:(GEOETATrafficUpdateWaypointRoute *)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(unsigned long long)destinationWaypointTypedsCount;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(GEOLocation *)tripOrigin;
-(NSString *)displayedBannerId;
-(NSString *)xpcUuid;
-(void)setIncludeBetterRouteSuggestion:(char)arg1 ;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setRerouteStatus:(int)arg1 ;
-(void)setDisplayedBannerId:(NSString *)arg1 ;
-(char)hasTripOrigin;
-(char)includeBetterRouteSuggestion;
-(void)setHasIncludeBetterRouteSuggestion:(char)arg1 ;
-(char)hasIncludeBetterRouteSuggestion;
-(char)hasWaypointRoute;
-(unsigned)previouslyRejectedRerouteSavings;
-(void)setHasPreviouslyRejectedRerouteSavings:(char)arg1 ;
-(char)hasPreviouslyRejectedRerouteSavings;
-(int)rerouteStatus;
-(void)setHasRerouteStatus:(char)arg1 ;
-(char)hasRerouteStatus;
-(id)rerouteStatusAsString:(int)arg1 ;
-(int)StringAsRerouteStatus:(id)arg1 ;
-(char)hasDisplayedBannerId;
@end

