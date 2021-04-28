/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLogMsgEventId, GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventCuratedCollectionStats, GEOLogMsgEventCuratedCollectionUsage, GEOLogMsgEventDailyUseSummary, GEOLogMsgEventDirections, GEOLogMsgEventDirectionsRequestDetails, GEOLogMsgEventDisplayAnalytic, GEOLogMsgEventEVRoutingVehicleDetails, GEOLogMsgEventEVTrip, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGenericAppError, GEOLogMsgEventGridDuration, GEOLogMsgEventHardStop, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogDiscard, GEOLogMsgEventLogFramework, NSMutableArray, GEOLogMsgEventMapKitCounts, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsDeviceSettings, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventMarcoLiteUsage, GEOLogMsgEventNetwork, GEOLogMsgEventParkedCar, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventPOIBusynessData, GEOLogMsgEventPredExTrainingData, GEOLogMsgEventPressureData, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, GEOLogMsgEventStateTiming, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, GEOLogMsgEventTelemetric, GEOLogMsgEventThrottle, GEOLogMsgEventTileCacheAnalytic, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventTripDepartureFeedback, GEOLogMsgEventUserAction, GEOLogMsgEventVLFUsage, GEOLogMsgEventWifiConnectionQualityProbe;

@interface GEOLogMsgEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLogMsgEventId* _analyticTag;
	GEOLogMsgEventBatchTrafficProbe* _batchTrafficProbeCollection;
	GEOLogMsgEventClientACSuggestions* _clientAcSuggestions;
	GEOLogMsgEventCommuteWindow* _commuteWindow;
	GEOLogMsgEventCuratedCollectionStats* _curatedCollectionStats;
	GEOLogMsgEventCuratedCollectionUsage* _curatedCollectionUsage;
	GEOLogMsgEventDailyUseSummary* _dailyUseSummary;
	GEOLogMsgEventDirections* _directionsEvent;
	GEOLogMsgEventDirectionsRequestDetails* _directionsRequestDetails;
	GEOLogMsgEventDisplayAnalytic* _displayAnalytic;
	GEOLogMsgEventEVRoutingVehicleDetails* _evRoutingVehicleDetails;
	GEOLogMsgEventEVTrip* _evTrip;
	GEOLogMsgEventFullNavTrace* _fullNavTrace;
	GEOLogMsgEventGenericAppError* _genericAppErrorEvent;
	GEOLogMsgEventGridDuration* _gridDuration;
	GEOLogMsgEventHardStop* _hardStop;
	GEOLogMsgEventListInteractionSession* _listInteractionSession;
	GEOLogMsgEventLogDiscard* _logDiscard;
	GEOLogMsgEventLogFramework* _logFrameworkEvent;
	NSMutableArray* _logMsgStates;
	GEOLogMsgEventMapKitCounts* _mapKitCounts;
	GEOLogMsgEventMapLaunch* _mapLaunchEvent;
	GEOLogMsgEventMapsDeviceSettings* _mapsDeviceSettings;
	GEOLogMsgEventMapsWidgetsInteractionSession* _mapsWidgetsInteractionSession;
	GEOLogMsgEventMarcoLiteUsage* _marcoLiteUsage;
	GEOLogMsgEventNetwork* _networkEvent;
	GEOLogMsgEventParkedCar* _parkedCar;
	GEOLogMsgEventPlaceDataCache* _placeDataCacheEvent;
	GEOLogMsgEventPOIBusynessData* _poiBusynessData;
	GEOLogMsgEventPredExTrainingData* _predExTrainingData;
	GEOLogMsgEventPressureData* _pressureData;
	GEOLogMsgEventProactiveSuggestionInteractionSession* _proactiveSuggestionInteractionSessionEvent;
	GEOLogMsgEventRealtimeTrafficProbe* _realtimeTrafficProbeCollection;
	GEOLogMsgEventRefineSearchSession* _refineSearchSession;
	LOGMSGEVENTLogMsgEventRideBookedSession* _rideBookedSession;
	LOGMSGEVENTLogMsgEventRideBookingSession* _rideBookingSession;
	GEOLogMsgEventStateTiming* _stateTimingEvent;
	LOGMSGEVENTLogMsgEventTableBookedSession* _tableBookedSession;
	LOGMSGEVENTLogMsgEventTableBookingSession* _tableBookingSession;
	GEOLogMsgEventTelemetric* _telemetric;
	GEOLogMsgEventThrottle* _throttleEvent;
	GEOLogMsgEventTileCacheAnalytic* _tileCacheAnalytic;
	GEOLogMsgEventTileSetState* _tileSetStateEvent;
	GEOLogMsgEventTimeToLeaveHypothesis* _timeToLeaveHypothesisEvent;
	GEOLogMsgEventTimeToLeaveInitialTravelTime* _timeToLeaveInitialTravelTimeEvent;
	GEOLogMsgEventTransitAppLaunch* _transitAppLaunchEvent;
	GEOLogMsgEventTripDepartureFeedback* _tripDepartureFeedback;
	double _usageEventTime;
	GEOLogMsgEventUserAction* _userActionEvent;
	GEOLogMsgEventVLFUsage* _vlfUsage;
	GEOLogMsgEventWifiConnectionQualityProbe* _wifiConnectionQualityProbeEvent;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _eventType;
	struct {
		unsigned has_usageEventTime : 1;
		unsigned has_eventType : 1;
		unsigned read_analyticTag : 1;
		unsigned read_batchTrafficProbeCollection : 1;
		unsigned read_clientAcSuggestions : 1;
		unsigned read_commuteWindow : 1;
		unsigned read_curatedCollectionStats : 1;
		unsigned read_curatedCollectionUsage : 1;
		unsigned read_dailyUseSummary : 1;
		unsigned read_directionsEvent : 1;
		unsigned read_directionsRequestDetails : 1;
		unsigned read_displayAnalytic : 1;
		unsigned read_evRoutingVehicleDetails : 1;
		unsigned read_evTrip : 1;
		unsigned read_fullNavTrace : 1;
		unsigned read_genericAppErrorEvent : 1;
		unsigned read_gridDuration : 1;
		unsigned read_hardStop : 1;
		unsigned read_listInteractionSession : 1;
		unsigned read_logDiscard : 1;
		unsigned read_logFrameworkEvent : 1;
		unsigned read_logMsgStates : 1;
		unsigned read_mapKitCounts : 1;
		unsigned read_mapLaunchEvent : 1;
		unsigned read_mapsDeviceSettings : 1;
		unsigned read_mapsWidgetsInteractionSession : 1;
		unsigned read_marcoLiteUsage : 1;
		unsigned read_networkEvent : 1;
		unsigned read_parkedCar : 1;
		unsigned read_placeDataCacheEvent : 1;
		unsigned read_poiBusynessData : 1;
		unsigned read_predExTrainingData : 1;
		unsigned read_pressureData : 1;
		unsigned read_proactiveSuggestionInteractionSessionEvent : 1;
		unsigned read_realtimeTrafficProbeCollection : 1;
		unsigned read_refineSearchSession : 1;
		unsigned read_rideBookedSession : 1;
		unsigned read_rideBookingSession : 1;
		unsigned read_stateTimingEvent : 1;
		unsigned read_tableBookedSession : 1;
		unsigned read_tableBookingSession : 1;
		unsigned read_telemetric : 1;
		unsigned read_throttleEvent : 1;
		unsigned read_tileCacheAnalytic : 1;
		unsigned read_tileSetStateEvent : 1;
		unsigned read_timeToLeaveHypothesisEvent : 1;
		unsigned read_timeToLeaveInitialTravelTimeEvent : 1;
		unsigned read_transitAppLaunchEvent : 1;
		unsigned read_tripDepartureFeedback : 1;
		unsigned read_userActionEvent : 1;
		unsigned read_vlfUsage : 1;
		unsigned read_wifiConnectionQualityProbeEvent : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasUsageEventTime; 
@property (assign,nonatomic) double usageEventTime; 
@property (nonatomic,retain) NSMutableArray * logMsgStates; 
@property (nonatomic,readonly) char hasAnalyticTag; 
@property (nonatomic,retain) GEOLogMsgEventId * analyticTag; 
@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) int eventType; 
@property (nonatomic,readonly) char hasUserActionEvent; 
@property (nonatomic,retain) GEOLogMsgEventUserAction * userActionEvent; 
@property (nonatomic,readonly) char hasStateTimingEvent; 
@property (nonatomic,retain) GEOLogMsgEventStateTiming * stateTimingEvent; 
@property (nonatomic,readonly) char hasTileSetStateEvent; 
@property (nonatomic,retain) GEOLogMsgEventTileSetState * tileSetStateEvent; 
@property (nonatomic,readonly) char hasPlaceDataCacheEvent; 
@property (nonatomic,retain) GEOLogMsgEventPlaceDataCache * placeDataCacheEvent; 
@property (nonatomic,readonly) char hasNetworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventNetwork * networkEvent; 
@property (nonatomic,readonly) char hasDirectionsEvent; 
@property (nonatomic,retain) GEOLogMsgEventDirections * directionsEvent; 
@property (nonatomic,readonly) char hasTransitAppLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventTransitAppLaunch * transitAppLaunchEvent; 
@property (nonatomic,readonly) char hasTimeToLeaveHypothesisEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveHypothesis * timeToLeaveHypothesisEvent; 
@property (nonatomic,readonly) char hasTimeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveInitialTravelTime * timeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,readonly) char hasLogFrameworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventLogFramework * logFrameworkEvent; 
@property (nonatomic,readonly) char hasMapsWidgetsInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventMapsWidgetsInteractionSession * mapsWidgetsInteractionSession; 
@property (nonatomic,readonly) char hasListInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventListInteractionSession * listInteractionSession; 
@property (nonatomic,readonly) char hasRefineSearchSession; 
@property (nonatomic,retain) GEOLogMsgEventRefineSearchSession * refineSearchSession; 
@property (nonatomic,readonly) char hasProactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,retain) GEOLogMsgEventProactiveSuggestionInteractionSession * proactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,readonly) char hasMapLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventMapLaunch * mapLaunchEvent; 
@property (nonatomic,readonly) char hasRideBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookingSession * rideBookingSession; 
@property (nonatomic,readonly) char hasRideBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookedSession * rideBookedSession; 
@property (nonatomic,readonly) char hasTableBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookingSession * tableBookingSession; 
@property (nonatomic,readonly) char hasTableBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookedSession * tableBookedSession; 
@property (nonatomic,readonly) char hasFullNavTrace; 
@property (nonatomic,retain) GEOLogMsgEventFullNavTrace * fullNavTrace; 
@property (nonatomic,readonly) char hasTelemetric; 
@property (nonatomic,retain) GEOLogMsgEventTelemetric * telemetric; 
@property (nonatomic,readonly) char hasClientAcSuggestions; 
@property (nonatomic,retain) GEOLogMsgEventClientACSuggestions * clientAcSuggestions; 
@property (nonatomic,readonly) char hasRealtimeTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventRealtimeTrafficProbe * realtimeTrafficProbeCollection; 
@property (nonatomic,readonly) char hasBatchTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventBatchTrafficProbe * batchTrafficProbeCollection; 
@property (nonatomic,readonly) char hasCommuteWindow; 
@property (nonatomic,retain) GEOLogMsgEventCommuteWindow * commuteWindow; 
@property (nonatomic,readonly) char hasGenericAppErrorEvent; 
@property (nonatomic,retain) GEOLogMsgEventGenericAppError * genericAppErrorEvent; 
@property (nonatomic,readonly) char hasWifiConnectionQualityProbeEvent; 
@property (nonatomic,retain) GEOLogMsgEventWifiConnectionQualityProbe * wifiConnectionQualityProbeEvent; 
@property (nonatomic,readonly) char hasParkedCar; 
@property (nonatomic,retain) GEOLogMsgEventParkedCar * parkedCar; 
@property (nonatomic,readonly) char hasTileCacheAnalytic; 
@property (nonatomic,retain) GEOLogMsgEventTileCacheAnalytic * tileCacheAnalytic; 
@property (nonatomic,readonly) char hasGridDuration; 
@property (nonatomic,retain) GEOLogMsgEventGridDuration * gridDuration; 
@property (nonatomic,readonly) char hasDisplayAnalytic; 
@property (nonatomic,retain) GEOLogMsgEventDisplayAnalytic * displayAnalytic; 
@property (nonatomic,readonly) char hasThrottleEvent; 
@property (nonatomic,retain) GEOLogMsgEventThrottle * throttleEvent; 
@property (nonatomic,readonly) char hasMapKitCounts; 
@property (nonatomic,retain) GEOLogMsgEventMapKitCounts * mapKitCounts; 
@property (nonatomic,readonly) char hasPredExTrainingData; 
@property (nonatomic,retain) GEOLogMsgEventPredExTrainingData * predExTrainingData; 
@property (nonatomic,readonly) char hasMarcoLiteUsage; 
@property (nonatomic,retain) GEOLogMsgEventMarcoLiteUsage * marcoLiteUsage; 
@property (nonatomic,readonly) char hasTripDepartureFeedback; 
@property (nonatomic,retain) GEOLogMsgEventTripDepartureFeedback * tripDepartureFeedback; 
@property (nonatomic,readonly) char hasDirectionsRequestDetails; 
@property (nonatomic,retain) GEOLogMsgEventDirectionsRequestDetails * directionsRequestDetails; 
@property (nonatomic,readonly) char hasEvRoutingVehicleDetails; 
@property (nonatomic,retain) GEOLogMsgEventEVRoutingVehicleDetails * evRoutingVehicleDetails; 
@property (nonatomic,readonly) char hasEvTrip; 
@property (nonatomic,retain) GEOLogMsgEventEVTrip * evTrip; 
@property (nonatomic,readonly) char hasCuratedCollectionStats; 
@property (nonatomic,retain) GEOLogMsgEventCuratedCollectionStats * curatedCollectionStats; 
@property (nonatomic,readonly) char hasCuratedCollectionUsage; 
@property (nonatomic,retain) GEOLogMsgEventCuratedCollectionUsage * curatedCollectionUsage; 
@property (nonatomic,readonly) char hasMapsDeviceSettings; 
@property (nonatomic,retain) GEOLogMsgEventMapsDeviceSettings * mapsDeviceSettings; 
@property (nonatomic,readonly) char hasHardStop; 
@property (nonatomic,retain) GEOLogMsgEventHardStop * hardStop; 
@property (nonatomic,readonly) char hasVlfUsage; 
@property (nonatomic,retain) GEOLogMsgEventVLFUsage * vlfUsage; 
@property (nonatomic,readonly) char hasLogDiscard; 
@property (nonatomic,retain) GEOLogMsgEventLogDiscard * logDiscard; 
@property (nonatomic,readonly) char hasDailyUseSummary; 
@property (nonatomic,retain) GEOLogMsgEventDailyUseSummary * dailyUseSummary; 
@property (nonatomic,readonly) char hasPressureData; 
@property (nonatomic,retain) GEOLogMsgEventPressureData * pressureData; 
@property (nonatomic,readonly) char hasPoiBusynessData; 
@property (nonatomic,retain) GEOLogMsgEventPOIBusynessData * poiBusynessData; 
+(char)isValid:(id)arg1 ;
+(Class)logMsgStateType;
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
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(double)usageEventTime;
-(void)setUsageEventTime:(double)arg1 ;
-(GEOLogMsgEventPredExTrainingData *)predExTrainingData;
-(void)setPredExTrainingData:(GEOLogMsgEventPredExTrainingData *)arg1 ;
-(char)hasPredExTrainingData;
-(GEOLogMsgEventId *)analyticTag;
-(void)setAnalyticTag:(GEOLogMsgEventId *)arg1 ;
-(void)setLogDiscard:(GEOLogMsgEventLogDiscard *)arg1 ;
-(GEOLogMsgEventLogDiscard *)logDiscard;
-(void)addLogMsgState:(id)arg1 ;
-(void)setPressureData:(GEOLogMsgEventPressureData *)arg1 ;
-(GEOLogMsgEventPressureData *)pressureData;
-(void)setTileCacheAnalytic:(GEOLogMsgEventTileCacheAnalytic *)arg1 ;
-(GEOLogMsgEventTileCacheAnalytic *)tileCacheAnalytic;
-(void)setPoiBusynessData:(GEOLogMsgEventPOIBusynessData *)arg1 ;
-(GEOLogMsgEventPOIBusynessData *)poiBusynessData;
-(void)setParkedCar:(GEOLogMsgEventParkedCar *)arg1 ;
-(GEOLogMsgEventParkedCar *)parkedCar;
-(void)setRealtimeTrafficProbeCollection:(GEOLogMsgEventRealtimeTrafficProbe *)arg1 ;
-(GEOLogMsgEventRealtimeTrafficProbe *)realtimeTrafficProbeCollection;
-(void)setBatchTrafficProbeCollection:(GEOLogMsgEventBatchTrafficProbe *)arg1 ;
-(GEOLogMsgEventBatchTrafficProbe *)batchTrafficProbeCollection;
-(void)setNetworkEvent:(GEOLogMsgEventNetwork *)arg1 ;
-(GEOLogMsgEventNetwork *)networkEvent;
-(void)setWifiConnectionQualityProbeEvent:(GEOLogMsgEventWifiConnectionQualityProbe *)arg1 ;
-(GEOLogMsgEventWifiConnectionQualityProbe *)wifiConnectionQualityProbeEvent;
-(void)setUserActionEvent:(GEOLogMsgEventUserAction *)arg1 ;
-(GEOLogMsgEventUserAction *)userActionEvent;
-(void)setDisplayAnalytic:(GEOLogMsgEventDisplayAnalytic *)arg1 ;
-(GEOLogMsgEventDisplayAnalytic *)displayAnalytic;
-(void)setClientAcSuggestions:(GEOLogMsgEventClientACSuggestions *)arg1 ;
-(GEOLogMsgEventClientACSuggestions *)clientAcSuggestions;
-(void)setGridDuration:(GEOLogMsgEventGridDuration *)arg1 ;
-(GEOLogMsgEventGridDuration *)gridDuration;
-(void)setDirectionsEvent:(GEOLogMsgEventDirections *)arg1 ;
-(GEOLogMsgEventDirections *)directionsEvent;
-(void)setFullNavTrace:(GEOLogMsgEventFullNavTrace *)arg1 ;
-(GEOLogMsgEventFullNavTrace *)fullNavTrace;
-(void)setThrottleEvent:(GEOLogMsgEventThrottle *)arg1 ;
-(GEOLogMsgEventThrottle *)throttleEvent;
-(void)setMarcoLiteUsage:(GEOLogMsgEventMarcoLiteUsage *)arg1 ;
-(GEOLogMsgEventMarcoLiteUsage *)marcoLiteUsage;
-(void)setProactiveSuggestionInteractionSessionEvent:(GEOLogMsgEventProactiveSuggestionInteractionSession *)arg1 ;
-(GEOLogMsgEventProactiveSuggestionInteractionSession *)proactiveSuggestionInteractionSessionEvent;
-(void)setMapLaunchEvent:(GEOLogMsgEventMapLaunch *)arg1 ;
-(GEOLogMsgEventMapLaunch *)mapLaunchEvent;
-(void)setTileSetStateEvent:(GEOLogMsgEventTileSetState *)arg1 ;
-(GEOLogMsgEventTileSetState *)tileSetStateEvent;
-(void)setTransitAppLaunchEvent:(GEOLogMsgEventTransitAppLaunch *)arg1 ;
-(GEOLogMsgEventTransitAppLaunch *)transitAppLaunchEvent;
-(void)setTimeToLeaveHypothesisEvent:(GEOLogMsgEventTimeToLeaveHypothesis *)arg1 ;
-(GEOLogMsgEventTimeToLeaveHypothesis *)timeToLeaveHypothesisEvent;
-(void)setTimeToLeaveInitialTravelTimeEvent:(GEOLogMsgEventTimeToLeaveInitialTravelTime *)arg1 ;
-(GEOLogMsgEventTimeToLeaveInitialTravelTime *)timeToLeaveInitialTravelTimeEvent;
-(void)setMapsWidgetsInteractionSession:(GEOLogMsgEventMapsWidgetsInteractionSession *)arg1 ;
-(GEOLogMsgEventMapsWidgetsInteractionSession *)mapsWidgetsInteractionSession;
-(void)setCommuteWindow:(GEOLogMsgEventCommuteWindow *)arg1 ;
-(GEOLogMsgEventCommuteWindow *)commuteWindow;
-(void)setMapKitCounts:(GEOLogMsgEventMapKitCounts *)arg1 ;
-(GEOLogMsgEventMapKitCounts *)mapKitCounts;
-(void)setDailyUseSummary:(GEOLogMsgEventDailyUseSummary *)arg1 ;
-(GEOLogMsgEventDailyUseSummary *)dailyUseSummary;
-(void)setTelemetric:(GEOLogMsgEventTelemetric *)arg1 ;
-(GEOLogMsgEventTelemetric *)telemetric;
-(void)setTripDepartureFeedback:(GEOLogMsgEventTripDepartureFeedback *)arg1 ;
-(GEOLogMsgEventTripDepartureFeedback *)tripDepartureFeedback;
-(void)setRideBookingSession:(LOGMSGEVENTLogMsgEventRideBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookingSession *)rideBookingSession;
-(void)setRideBookedSession:(LOGMSGEVENTLogMsgEventRideBookedSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookedSession *)rideBookedSession;
-(void)setTableBookingSession:(LOGMSGEVENTLogMsgEventTableBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookingSession *)tableBookingSession;
-(void)setTableBookedSession:(LOGMSGEVENTLogMsgEventTableBookedSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookedSession *)tableBookedSession;
-(void)setDirectionsRequestDetails:(GEOLogMsgEventDirectionsRequestDetails *)arg1 ;
-(GEOLogMsgEventDirectionsRequestDetails *)directionsRequestDetails;
-(void)setEvRoutingVehicleDetails:(GEOLogMsgEventEVRoutingVehicleDetails *)arg1 ;
-(GEOLogMsgEventEVRoutingVehicleDetails *)evRoutingVehicleDetails;
-(void)setEvTrip:(GEOLogMsgEventEVTrip *)arg1 ;
-(GEOLogMsgEventEVTrip *)evTrip;
-(void)setCuratedCollectionUsage:(GEOLogMsgEventCuratedCollectionUsage *)arg1 ;
-(GEOLogMsgEventCuratedCollectionUsage *)curatedCollectionUsage;
-(void)setCuratedCollectionStats:(GEOLogMsgEventCuratedCollectionStats *)arg1 ;
-(GEOLogMsgEventCuratedCollectionStats *)curatedCollectionStats;
-(void)setMapsDeviceSettings:(GEOLogMsgEventMapsDeviceSettings *)arg1 ;
-(void)setHardStop:(GEOLogMsgEventHardStop *)arg1 ;
-(GEOLogMsgEventHardStop *)hardStop;
-(void)setVlfUsage:(GEOLogMsgEventVLFUsage *)arg1 ;
-(GEOLogMsgEventVLFUsage *)vlfUsage;
-(NSMutableArray *)logMsgStates;
-(GEOLogMsgEventStateTiming *)stateTimingEvent;
-(GEOLogMsgEventPlaceDataCache *)placeDataCacheEvent;
-(GEOLogMsgEventLogFramework *)logFrameworkEvent;
-(GEOLogMsgEventListInteractionSession *)listInteractionSession;
-(GEOLogMsgEventRefineSearchSession *)refineSearchSession;
-(GEOLogMsgEventGenericAppError *)genericAppErrorEvent;
-(GEOLogMsgEventMapsDeviceSettings *)mapsDeviceSettings;
-(void)setStateTimingEvent:(GEOLogMsgEventStateTiming *)arg1 ;
-(void)setPlaceDataCacheEvent:(GEOLogMsgEventPlaceDataCache *)arg1 ;
-(void)setLogFrameworkEvent:(GEOLogMsgEventLogFramework *)arg1 ;
-(void)setListInteractionSession:(GEOLogMsgEventListInteractionSession *)arg1 ;
-(void)setRefineSearchSession:(GEOLogMsgEventRefineSearchSession *)arg1 ;
-(void)setGenericAppErrorEvent:(GEOLogMsgEventGenericAppError *)arg1 ;
-(unsigned long long)logMsgStatesCount;
-(void)clearLogMsgStates;
-(id)logMsgStateAtIndex:(unsigned long long)arg1 ;
-(void)setLogMsgStates:(NSMutableArray *)arg1 ;
-(char)hasAnalyticTag;
-(char)hasUserActionEvent;
-(char)hasStateTimingEvent;
-(char)hasTileSetStateEvent;
-(char)hasPlaceDataCacheEvent;
-(char)hasNetworkEvent;
-(char)hasDirectionsEvent;
-(char)hasTransitAppLaunchEvent;
-(char)hasTimeToLeaveHypothesisEvent;
-(char)hasTimeToLeaveInitialTravelTimeEvent;
-(char)hasLogFrameworkEvent;
-(char)hasMapsWidgetsInteractionSession;
-(char)hasListInteractionSession;
-(char)hasRefineSearchSession;
-(char)hasProactiveSuggestionInteractionSessionEvent;
-(char)hasMapLaunchEvent;
-(char)hasRideBookingSession;
-(char)hasRideBookedSession;
-(char)hasTableBookingSession;
-(char)hasTableBookedSession;
-(char)hasFullNavTrace;
-(char)hasTelemetric;
-(char)hasClientAcSuggestions;
-(char)hasRealtimeTrafficProbeCollection;
-(char)hasBatchTrafficProbeCollection;
-(char)hasCommuteWindow;
-(char)hasGenericAppErrorEvent;
-(char)hasWifiConnectionQualityProbeEvent;
-(char)hasParkedCar;
-(char)hasTileCacheAnalytic;
-(char)hasGridDuration;
-(char)hasDisplayAnalytic;
-(char)hasThrottleEvent;
-(char)hasMapKitCounts;
-(char)hasMarcoLiteUsage;
-(char)hasTripDepartureFeedback;
-(char)hasDirectionsRequestDetails;
-(char)hasEvRoutingVehicleDetails;
-(char)hasEvTrip;
-(char)hasCuratedCollectionStats;
-(char)hasCuratedCollectionUsage;
-(char)hasMapsDeviceSettings;
-(char)hasHardStop;
-(char)hasVlfUsage;
-(char)hasLogDiscard;
-(char)hasDailyUseSummary;
-(char)hasPressureData;
-(char)hasPoiBusynessData;
-(void)setHasUsageEventTime:(char)arg1 ;
-(char)hasUsageEventTime;
@end

