/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/_GEOEnrouteNoticesProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOClientMetrics, NSString, GEOPDDatasetABStatus, GEOTransitDecoderData, NSData, GEORouteDisplayHints, GEOETAServiceResponseSummary, GEOAlert, GEOSnapScoreMetadata, GEOStyleAttributes, GEOPBTransitRoutingIncidentMessage, GEOTransitRouteUpdateConfiguration;

@interface GEODirectionsResponse : PBCodable <GEOCompanionCompatibility, _GEOEnrouteNoticesProvider, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	SCD_Struct_GE86* _supportedTransportTypes;
	GEOTimepoint _timepointUsed;
	NSMutableArray* _arrivalParameters;
	GEOClientMetrics* _clientMetrics;
	NSString* _dataVersion;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugLatencyMs;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOAlert* _failureAlert;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	NSMutableArray* _internalErrors;
	NSData* _nonRecommendedRoutesCache;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	NSMutableArray* _serviceGaps;
	NSString* _serviceVersion;
	NSData* _sessionState;
	GEOSnapScoreMetadata* _snapScoreMetadataDebug;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSMutableArray* _trafficCameras;
	NSMutableArray* _trafficSignals;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	GEOTransitRouteUpdateConfiguration* _transitRouteUpdateConfiguration;
	NSMutableArray* _waypointRoutes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _instructionSignFillColor;
	int _liveRouteSavingsSeconds;
	int _localDistanceUnits;
	unsigned _selectedRouteIndex;
	int _status;
	char _hasKhSegments;
	char _isNavigable;
	char _isOfflineResponse;
	char _routeDeviatesFromOriginal;
	struct {
		unsigned has_timepointUsed : 1;
		unsigned has_debugLatencyMs : 1;
		unsigned has_instructionSignFillColor : 1;
		unsigned has_liveRouteSavingsSeconds : 1;
		unsigned has_localDistanceUnits : 1;
		unsigned has_selectedRouteIndex : 1;
		unsigned has_hasKhSegments : 1;
		unsigned has_isNavigable : 1;
		unsigned has_isOfflineResponse : 1;
		unsigned has_routeDeviatesFromOriginal : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_supportedTransportTypes : 1;
		unsigned read_arrivalParameters : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_dataVersion : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_decoderData : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_displayHints : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_failureAlert : 1;
		unsigned read_incidentsOffRoutes : 1;
		unsigned read_incidentsOnRoutes : 1;
		unsigned read_internalErrors : 1;
		unsigned read_nonRecommendedRoutesCache : 1;
		unsigned read_placeSearchResponses : 1;
		unsigned read_routes : 1;
		unsigned read_serviceGaps : 1;
		unsigned read_serviceVersion : 1;
		unsigned read_sessionState : 1;
		unsigned read_snapScoreMetadataDebug : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_suggestedRoutes : 1;
		unsigned read_trafficCameras : 1;
		unsigned read_trafficSignals : 1;
		unsigned read_transitDataVersion : 1;
		unsigned read_transitIncidentMessage : 1;
		unsigned read_transitRouteUpdateConfiguration : 1;
		unsigned read_waypointRoutes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) char hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (nonatomic,readonly) char hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,retain) NSMutableArray * waypointRoutes; 
@property (nonatomic,retain) NSMutableArray * placeSearchResponses; 
@property (assign,nonatomic) char hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits; 
@property (assign,nonatomic) char hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) char routeDeviatesFromOriginal; 
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) char hasIsNavigable; 
@property (assign,nonatomic) char isNavigable; 
@property (assign,nonatomic) char hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor; 
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes; 
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (nonatomic,retain) NSMutableArray * serviceGaps; 
@property (assign,nonatomic) char hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex; 
@property (nonatomic,readonly) char hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage; 
@property (nonatomic,readonly) char hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) char hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) char hasFailureAlert; 
@property (nonatomic,retain) GEOAlert * failureAlert; 
@property (assign,nonatomic) char hasLiveRouteSavingsSeconds; 
@property (assign,nonatomic) int liveRouteSavingsSeconds; 
@property (nonatomic,readonly) char hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * trafficCameras; 
@property (nonatomic,readonly) char hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache; 
@property (assign,nonatomic) char hasIsOfflineResponse; 
@property (assign,nonatomic) char isOfflineResponse; 
@property (nonatomic,readonly) char hasSnapScoreMetadataDebug; 
@property (nonatomic,retain) GEOSnapScoreMetadata * snapScoreMetadataDebug; 
@property (assign,nonatomic) char hasHasKhSegments; 
@property (assign,nonatomic) char hasKhSegments; 
@property (nonatomic,readonly) char hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,retain) NSMutableArray * arrivalParameters; 
@property (nonatomic,retain) NSMutableArray * trafficSignals; 
@property (nonatomic,readonly) char hasTransitRouteUpdateConfiguration; 
@property (nonatomic,retain) GEOTransitRouteUpdateConfiguration * transitRouteUpdateConfiguration; 
@property (nonatomic,retain) NSMutableArray * internalErrors; 
@property (nonatomic,readonly) char hasServiceVersion; 
@property (nonatomic,retain) NSString * serviceVersion; 
@property (nonatomic,readonly) char hasDataVersion; 
@property (nonatomic,retain) NSString * dataVersion; 
@property (nonatomic,retain) NSMutableArray * suggestedRoutes; 
@property (assign,nonatomic) char hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed; 
@property (nonatomic,readonly) char hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData; 
@property (nonatomic,readonly) char hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeType;
+(char)isValid:(id)arg1 ;
+(Class)arrivalParametersType;
+(Class)trafficSignalType;
+(Class)trafficCameraType;
+(Class)waypointRouteType;
+(Class)placeSearchResponseType;
+(Class)incidentsOnRoutesType;
+(Class)incidentsOffRoutesType;
+(Class)serviceGapType;
+(Class)internalErrorType;
+(Class)suggestedRouteType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)transitDataVersion;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(char)hasDatasetAbStatus;
-(GEOTimepoint)timepointUsed;
-(void)setHasTimepointUsed:(char)arg1 ;
-(char)hasTimepointUsed;
-(char)hasTransitDataVersion;
-(GEOProblemDetail*)problemDetails;
-(unsigned long long)problemDetailsCount;
-(GEOAlert *)failureAlert;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(GEOTransitDecoderData *)decoderData;
-(NSMutableArray *)internalErrors;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(char)hasTransitIncidentMessage;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(unsigned long long)debugLatencyMs;
-(void)setHasDebugLatencyMs:(char)arg1 ;
-(char)hasDebugLatencyMs;
-(char)hasClientMetrics;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(char)hasSessionState;
-(void)clearLocations;
-(NSMutableArray *)routes;
-(unsigned long long)placeSearchResponsesCount;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(char)hasStyleAttributes;
-(NSMutableArray *)waypointRoutes;
-(char)isNavigable;
-(NSMutableArray *)suggestedRoutes;
-(GEORouteDisplayHints *)displayHints;
-(void)setIsNavigable:(char)arg1 ;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(char)hasDecoderData;
-(void)addArrivalParameters:(id)arg1 ;
-(void)addTrafficSignal:(id)arg1 ;
-(void)addTrafficCamera:(id)arg1 ;
-(unsigned long long)arrivalParametersCount;
-(void)clearArrivalParameters;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficSignalsCount;
-(void)clearTrafficSignals;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficCamerasCount;
-(void)clearTrafficCameras;
-(id)trafficCameraAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)arrivalParameters;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficSignals;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficCameras;
-(void)setTrafficCameras:(NSMutableArray *)arg1 ;
-(char)hasDirectionsResponseID;
-(unsigned long long)routesCount;
-(unsigned long long)suggestedRoutesCount;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(char)hasDisplayHints;
-(NSMutableArray *)incidentsOnRoutes;
-(NSString *)dataVersion;
-(void)setDataVersion:(NSString *)arg1 ;
-(char)hasDataVersion;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(char)hasEtaServiceSummary;
-(GEOTransitRouteUpdateConfiguration *)transitRouteUpdateConfiguration;
-(id)_geoTrafficCameras;
-(id)_geoTrafficSignals;
-(NSMutableArray *)placeSearchResponses;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(NSData *)nonRecommendedRoutesCache;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(char)hasNonRecommendedRoutesCache;
-(void)clearProblemDetails;
-(GEOSnapScoreMetadata *)snapScoreMetadataDebug;
-(NSString *)debugData;
-(NSString *)serviceVersion;
-(void)addRoute:(id)arg1 ;
-(void)addWaypointRoute:(id)arg1 ;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(void)setRouteDeviatesFromOriginal:(char)arg1 ;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(void)addSupportedTransportType:(int)arg1 ;
-(void)addServiceGap:(id)arg1 ;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(void)setFailureAlert:(GEOAlert *)arg1 ;
-(void)setLiveRouteSavingsSeconds:(int)arg1 ;
-(void)setIsOfflineResponse:(char)arg1 ;
-(void)setSnapScoreMetadataDebug:(GEOSnapScoreMetadata *)arg1 ;
-(void)setHasKhSegments:(char)arg1 ;
-(void)setDebugData:(NSString *)arg1 ;
-(void)setTransitRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(void)addInternalError:(id)arg1 ;
-(void)setServiceVersion:(NSString *)arg1 ;
-(void)addSuggestedRoute:(id)arg1 ;
-(void)clearRoutes;
-(unsigned long long)waypointRoutesCount;
-(void)clearWaypointRoutes;
-(id)waypointRouteAtIndex:(unsigned long long)arg1 ;
-(void)clearPlaceSearchResponses;
-(unsigned long long)incidentsOnRoutesCount;
-(void)clearIncidentsOnRoutes;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)incidentsOffRoutesCount;
-(void)clearIncidentsOffRoutes;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedTransportTypesCount;
-(void)clearSupportedTransportTypes;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceGapsCount;
-(void)clearServiceGaps;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)internalErrorsCount;
-(void)clearInternalErrors;
-(id)internalErrorAtIndex:(unsigned long long)arg1 ;
-(void)clearSuggestedRoutes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(int)localDistanceUnits;
-(void)setHasLocalDistanceUnits:(char)arg1 ;
-(char)hasLocalDistanceUnits;
-(id)localDistanceUnitsAsString:(int)arg1 ;
-(int)StringAsLocalDistanceUnits:(id)arg1 ;
-(char)routeDeviatesFromOriginal;
-(void)setHasRouteDeviatesFromOriginal:(char)arg1 ;
-(char)hasRouteDeviatesFromOriginal;
-(void)setHasIsNavigable:(char)arg1 ;
-(char)hasIsNavigable;
-(int)instructionSignFillColor;
-(void)setHasInstructionSignFillColor:(char)arg1 ;
-(char)hasInstructionSignFillColor;
-(id)instructionSignFillColorAsString:(int)arg1 ;
-(int)StringAsInstructionSignFillColor:(id)arg1 ;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidentsOffRoutes;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(int*)supportedTransportTypes;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedTransportTypesAsString:(int)arg1 ;
-(int)StringAsSupportedTransportTypes:(id)arg1 ;
-(NSMutableArray *)serviceGaps;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(unsigned)selectedRouteIndex;
-(void)setHasSelectedRouteIndex:(char)arg1 ;
-(char)hasSelectedRouteIndex;
-(char)hasFailureAlert;
-(int)liveRouteSavingsSeconds;
-(void)setHasLiveRouteSavingsSeconds:(char)arg1 ;
-(char)hasLiveRouteSavingsSeconds;
-(char)isOfflineResponse;
-(void)setHasIsOfflineResponse:(char)arg1 ;
-(char)hasIsOfflineResponse;
-(char)hasSnapScoreMetadataDebug;
-(char)hasKhSegments;
-(void)setHasHasKhSegments:(char)arg1 ;
-(char)hasHasKhSegments;
-(char)hasDebugData;
-(char)hasTransitRouteUpdateConfiguration;
-(void)setInternalErrors:(NSMutableArray *)arg1 ;
-(char)hasServiceVersion;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
@end
