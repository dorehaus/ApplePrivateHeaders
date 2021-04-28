/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOAutomobileOptions, GEOCyclingOptions, GEOLocation, NSMutableArray, GEOMapRegion, GEOTransitOptions, GEOTraitsTransitScheduleFilter, GEOPDVenueIdentifier, GEOWalkingOptions;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _engineTypes;
	SCD_Struct_GE86* _knownClientResolvedTypes;
	SCD_Struct_GE86* _supportedAutocompleteListTypes;
	SCD_Struct_GE86* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE86* _supportedChildActions;
	SCD_Struct_GE86* _transportTypes;
	GEOSessionID _sessionId;
	NSString* _analyticsAppIdentifier;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	GEOAutomobileOptions* _automobileOptions;
	NSString* _carHeadunitManufacturer;
	NSString* _carHeadunitModel;
	double _carHeadunitPixelHeight;
	double _carHeadunitPixelWidth;
	GEOCyclingOptions* _cyclingOptions;
	GEOLocation* _deviceLocation;
	NSMutableArray* _deviceDisplayLanguages;
	NSString* _deviceKeyboardLocale;
	NSString* _deviceSpokenLocale;
	NSString* _displayRegion;
	NSMutableArray* _evChargingPorts;
	NSMutableArray* _historicalLocations;
	double _isTourist;
	GEOMapRegion* _mapRegion;
	double _mapZoomLevel;
	NSMutableArray* _photoSizes;
	NSString* _providerID;
	NSMutableArray* _reviewUserPhotoSizes;
	double _sessionRelativeTimestamp;
	GEOTransitOptions* _transitOptions;
	GEOTraitsTransitScheduleFilter* _transitScheduleFilter;
	GEOTraitsTransitScheduleFilter* _transitTripStopTimeFilter;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _carHeadunitConnectionType;
	int _carHeadunitInteractionModel;
	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	unsigned _httpRequestPriority;
	int _mode;
	int _navigationTransportType;
	unsigned _photosCount;
	unsigned _ratingsCount;
	int _requestPurpose;
	unsigned _reviewUserPhotosCount;
	unsigned _sequenceNumber;
	int _source;
	unsigned _timeSinceMapEnteredForeground;
	unsigned _timeSinceMapViewportChanged;
	char _appDarkMode;
	char _autocompleteRequestSupportsSectionHeader;
	char _deviceDarkMode;
	char _deviceInVehicle;
	char _isAPICall;
	char _isRedoSearch;
	char _isRefund;
	char _isSettlement;
	char _isWidgetRequest;
	char _navigating;
	char _supportAutocompleteGuideResults;
	char _supportAutocompletePublisherResults;
	char _supportAutocompleteRapAffordance;
	char _supportChildItems;
	char _supportClientRankingFeatureMetadata;
	char _supportDirectionIntentAutocomplete;
	char _supportDirectionIntentSearch;
	char _supportDymSuggestion;
	char _supportUnresolvedDirectionIntent;
	char _supportsBrandFallback;
	char _useBackgroundUrl;
	char _wantsBrandIcon;
	struct {
		unsigned has_sessionId : 1;
		unsigned has_carHeadunitPixelHeight : 1;
		unsigned has_carHeadunitPixelWidth : 1;
		unsigned has_isTourist : 1;
		unsigned has_mapZoomLevel : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_carHeadunitConnectionType : 1;
		unsigned has_carHeadunitInteractionModel : 1;
		unsigned has_deviceBatteryState : 1;
		unsigned has_deviceInterfaceOrientation : 1;
		unsigned has_httpRequestPriority : 1;
		unsigned has_mode : 1;
		unsigned has_navigationTransportType : 1;
		unsigned has_photosCount : 1;
		unsigned has_ratingsCount : 1;
		unsigned has_requestPurpose : 1;
		unsigned has_reviewUserPhotosCount : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_source : 1;
		unsigned has_timeSinceMapEnteredForeground : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
		unsigned has_appDarkMode : 1;
		unsigned has_autocompleteRequestSupportsSectionHeader : 1;
		unsigned has_deviceDarkMode : 1;
		unsigned has_deviceInVehicle : 1;
		unsigned has_isAPICall : 1;
		unsigned has_isRedoSearch : 1;
		unsigned has_isRefund : 1;
		unsigned has_isSettlement : 1;
		unsigned has_isWidgetRequest : 1;
		unsigned has_navigating : 1;
		unsigned has_supportAutocompleteGuideResults : 1;
		unsigned has_supportAutocompletePublisherResults : 1;
		unsigned has_supportAutocompleteRapAffordance : 1;
		unsigned has_supportChildItems : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentAutocomplete : 1;
		unsigned has_supportDirectionIntentSearch : 1;
		unsigned has_supportDymSuggestion : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned has_supportsBrandFallback : 1;
		unsigned has_useBackgroundUrl : 1;
		unsigned has_wantsBrandIcon : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_knownClientResolvedTypes : 1;
		unsigned read_supportedAutocompleteListTypes : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedChildActions : 1;
		unsigned read_transportTypes : 1;
		unsigned read_analyticsAppIdentifier : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_carHeadunitManufacturer : 1;
		unsigned read_carHeadunitModel : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_deviceLocation : 1;
		unsigned read_deviceDisplayLanguages : 1;
		unsigned read_deviceKeyboardLocale : 1;
		unsigned read_deviceSpokenLocale : 1;
		unsigned read_displayRegion : 1;
		unsigned read_evChargingPorts : 1;
		unsigned read_historicalLocations : 1;
		unsigned read_mapRegion : 1;
		unsigned read_photoSizes : 1;
		unsigned read_providerID : 1;
		unsigned read_reviewUserPhotoSizes : 1;
		unsigned read_transitOptions : 1;
		unsigned read_transitScheduleFilter : 1;
		unsigned read_transitTripStopTimeFilter : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (nonatomic,readonly) char hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) char hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) char hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (nonatomic,readonly) char hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation; 
@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,retain) NSMutableArray * deviceDisplayLanguages; 
@property (nonatomic,readonly) char hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale; 
@property (nonatomic,readonly) char hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale; 
@property (assign,nonatomic) char hasIsAPICall; 
@property (assign,nonatomic) char isAPICall; 
@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source; 
@property (nonatomic,retain) NSMutableArray * photoSizes; 
@property (assign,nonatomic) char hasPhotosCount; 
@property (assign,nonatomic) unsigned photosCount; 
@property (nonatomic,retain) NSMutableArray * reviewUserPhotoSizes; 
@property (assign,nonatomic) char hasReviewUserPhotosCount; 
@property (assign,nonatomic) unsigned reviewUserPhotosCount; 
@property (assign,nonatomic) char hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground; 
@property (assign,nonatomic) char hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) char hasCarHeadunitInteractionModel; 
@property (assign,nonatomic) int carHeadunitInteractionModel; 
@property (nonatomic,readonly) char hasCarHeadunitManufacturer; 
@property (nonatomic,retain) NSString * carHeadunitManufacturer; 
@property (nonatomic,readonly) char hasCarHeadunitModel; 
@property (nonatomic,retain) NSString * carHeadunitModel; 
@property (assign,nonatomic) char hasCarHeadunitPixelWidth; 
@property (assign,nonatomic) double carHeadunitPixelWidth; 
@property (assign,nonatomic) char hasCarHeadunitPixelHeight; 
@property (assign,nonatomic) double carHeadunitPixelHeight; 
@property (nonatomic,readonly) char hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitScheduleFilter; 
@property (assign,nonatomic) char hasMapZoomLevel; 
@property (assign,nonatomic) double mapZoomLevel; 
@property (assign,nonatomic) char hasMode; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) char hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,readonly) char hasProviderID; 
@property (nonatomic,retain) NSString * providerID; 
@property (assign,nonatomic) char hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation; 
@property (assign,nonatomic) char hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState; 
@property (assign,nonatomic) char hasCarHeadunitConnectionType; 
@property (assign,nonatomic) int carHeadunitConnectionType; 
@property (assign,nonatomic) char hasNavigating; 
@property (assign,nonatomic) char navigating; 
@property (assign,nonatomic) char hasIsRedoSearch; 
@property (assign,nonatomic) char isRedoSearch; 
@property (nonatomic,retain) NSMutableArray * historicalLocations; 
@property (nonatomic,readonly) char hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) char hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) char hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (assign,nonatomic) char hasSupportDirectionIntentSearch; 
@property (assign,nonatomic) char supportDirectionIntentSearch; 
@property (assign,nonatomic) char hasSupportDymSuggestion; 
@property (assign,nonatomic) char supportDymSuggestion; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (assign,nonatomic) char hasWantsBrandIcon; 
@property (assign,nonatomic) char wantsBrandIcon; 
@property (nonatomic,readonly) char hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) char hasDeviceInVehicle; 
@property (assign,nonatomic) char deviceInVehicle; 
@property (assign,nonatomic) char hasUseBackgroundUrl; 
@property (assign,nonatomic) char useBackgroundUrl; 
@property (assign,nonatomic) char hasHttpRequestPriority; 
@property (assign,nonatomic) unsigned httpRequestPriority; 
@property (nonatomic,readonly) char hasAnalyticsAppIdentifier; 
@property (nonatomic,retain) NSString * analyticsAppIdentifier; 
@property (assign,nonatomic) char hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (assign,nonatomic) char hasSupportDirectionIntentAutocomplete; 
@property (assign,nonatomic) char supportDirectionIntentAutocomplete; 
@property (assign,nonatomic) char hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) char supportUnresolvedDirectionIntent; 
@property (assign,nonatomic) char hasDeviceDarkMode; 
@property (assign,nonatomic) char deviceDarkMode; 
@property (assign,nonatomic) char hasAppDarkMode; 
@property (assign,nonatomic) char appDarkMode; 
@property (assign,nonatomic) char hasSupportsBrandFallback; 
@property (assign,nonatomic) char supportsBrandFallback; 
@property (assign,nonatomic) char hasRequestPurpose; 
@property (assign,nonatomic) int requestPurpose; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteListTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteListTypes; 
@property (assign,nonatomic) char hasIsSettlement; 
@property (assign,nonatomic) char isSettlement; 
@property (nonatomic,readonly) char hasTransitTripStopTimeFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitTripStopTimeFilter; 
@property (assign,nonatomic) char hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) char supportClientRankingFeatureMetadata; 
@property (nonatomic,readonly) unsigned long long supportedChildActionsCount; 
@property (nonatomic,readonly) int* supportedChildActions; 
@property (assign,nonatomic) char hasSupportChildItems; 
@property (assign,nonatomic) char supportChildItems; 
@property (assign,nonatomic) char hasIsRefund; 
@property (assign,nonatomic) char isRefund; 
@property (assign,nonatomic) char hasAutocompleteRequestSupportsSectionHeader; 
@property (assign,nonatomic) char autocompleteRequestSupportsSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (assign,nonatomic) char hasSupportAutocompleteRapAffordance; 
@property (assign,nonatomic) char supportAutocompleteRapAffordance; 
@property (assign,nonatomic) char hasNavigationTransportType; 
@property (assign,nonatomic) int navigationTransportType; 
@property (nonatomic,readonly) char hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (assign,nonatomic) char hasRatingsCount; 
@property (assign,nonatomic) unsigned ratingsCount; 
@property (nonatomic,retain) NSMutableArray * evChargingPorts; 
@property (assign,nonatomic) char hasIsWidgetRequest; 
@property (assign,nonatomic) char isWidgetRequest; 
@property (assign,nonatomic) char hasIsTourist; 
@property (assign,nonatomic) double isTourist; 
@property (assign,nonatomic) char hasSupportAutocompletePublisherResults; 
@property (assign,nonatomic) char supportAutocompletePublisherResults; 
@property (assign,nonatomic) char hasSupportAutocompleteGuideResults; 
@property (assign,nonatomic) char supportAutocompleteGuideResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)deviceDisplayLanguageType;
+(Class)photoSizesType;
+(Class)reviewUserPhotoSizesType;
+(Class)historicalLocationsType;
+(Class)evChargingPortType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)source;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)mode;
-(void)setSource:(int)arg1 ;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOSessionID)sessionId;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(void)setHasSessionId:(char)arg1 ;
-(char)hasSessionId;
-(GEOMapRegion *)mapRegion;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(char)arg1 ;
-(char)hasSessionRelativeTimestamp;
-(char)hasMapRegion;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(char)hasSource;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(void)setSupportUnresolvedDirectionIntent:(char)arg1 ;
-(void)setSupportClientRankingFeatureMetadata:(char)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(char)hasVenueIdentifier;
-(char)supportUnresolvedDirectionIntent;
-(void)setHasSupportUnresolvedDirectionIntent:(char)arg1 ;
-(char)hasSupportUnresolvedDirectionIntent;
-(char)supportClientRankingFeatureMetadata;
-(void)setHasSupportClientRankingFeatureMetadata:(char)arg1 ;
-(char)hasSupportClientRankingFeatureMetadata;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(NSString *)appIdentifier;
-(char)hasAppIdentifier;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(char)hasDisplayRegion;
-(void)clearLocations;
-(void)addEngineType:(int)arg1 ;
-(void)setIsWidgetRequest:(char)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(char)isWidgetRequest;
-(void)setHasIsWidgetRequest:(char)arg1 ;
-(char)hasIsWidgetRequest;
-(void)setSupportDymSuggestion:(char)arg1 ;
-(void)setSupportDirectionIntentSearch:(char)arg1 ;
-(char)supportDymSuggestion;
-(void)setHasSupportDymSuggestion:(char)arg1 ;
-(char)hasSupportDymSuggestion;
-(char)supportDirectionIntentSearch;
-(void)setHasSupportDirectionIntentSearch:(char)arg1 ;
-(char)hasSupportDirectionIntentSearch;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(char)arg1 ;
-(char)hasTimeSinceMapViewportChanged;
-(GEOAutomobileOptions *)automobileOptions;
-(char)hasAutomobileOptions;
-(char)hasTransitOptions;
-(char)hasWalkingOptions;
-(char)hasCyclingOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(char)useBackgroundUrl;
-(char)hasUseBackgroundUrl;
-(GEOLocation *)deviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(unsigned long long)transportTypesCount;
-(unsigned long long)deviceDisplayLanguagesCount;
-(NSMutableArray *)deviceDisplayLanguages;
-(char)hasDeviceSpokenLocale;
-(NSString *)deviceSpokenLocale;
-(char)hasIsAPICall;
-(char)isAPICall;
-(char)hasTimeSinceMapEnteredForeground;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(char)hasMode;
-(void)setHasSource:(char)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(void)updateAnalyticsShortSession;
-(char)hasNavigationTransportType;
-(int)navigationTransportType;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setDeviceDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)photoSizes;
-(void)addPhotoSizes:(id)arg1 ;
-(char)hasPhotosCount;
-(void)setPhotosCount:(unsigned)arg1 ;
-(char)hasRatingsCount;
-(void)setRatingsCount:(unsigned)arg1 ;
-(NSMutableArray *)reviewUserPhotoSizes;
-(void)addReviewUserPhotoSizes:(id)arg1 ;
-(char)hasReviewUserPhotosCount;
-(void)setReviewUserPhotosCount:(unsigned)arg1 ;
-(char)hasTransitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(GEOTraitsTransitScheduleFilter *)transitScheduleFilter;
-(void)setHttpRequestPriority:(unsigned)arg1 ;
-(void)setSupportsBrandFallback:(char)arg1 ;
-(void)setUseBackgroundUrl:(char)arg1 ;
-(void)setIsAPICall:(char)arg1 ;
-(void)setWantsBrandIcon:(char)arg1 ;
-(GEOTraitsTransitScheduleFilter *)transitTripStopTimeFilter;
-(void)setTransitTripStopTimeFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(char)hasTransitTripStopTimeFilter;
-(void)addTransportType:(int)arg1 ;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(unsigned)photosCount;
-(void)setSupportChildItems:(char)arg1 ;
-(void)addSupportedChildAction:(int)arg1 ;
-(unsigned long long)supportedChildActionsCount;
-(void)clearSupportedChildActions;
-(int)supportedChildActionAtIndex:(unsigned long long)arg1 ;
-(char)supportChildItems;
-(void)setHasSupportChildItems:(char)arg1 ;
-(char)hasSupportChildItems;
-(int*)supportedChildActions;
-(void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedChildActionsAsString:(int)arg1 ;
-(int)StringAsSupportedChildActions:(id)arg1 ;
-(char)hasHttpRequestPriority;
-(unsigned)httpRequestPriority;
-(int)requestPurpose;
-(char)hasDeviceLocation;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(char)hasAppMajorVersion;
-(char)hasAppMinorVersion;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(char)arg1 ;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(void)setIsTourist:(double)arg1 ;
-(double)isTourist;
-(void)setHasIsTourist:(char)arg1 ;
-(char)hasIsTourist;
-(unsigned)ratingsCount;
-(unsigned long long)photoSizesCount;
-(void)clearPhotoSizes;
-(NSString *)deviceKeyboardLocale;
-(NSString *)carHeadunitManufacturer;
-(NSString *)carHeadunitModel;
-(NSString *)providerID;
-(NSString *)analyticsAppIdentifier;
-(void)addDeviceDisplayLanguage:(id)arg1 ;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(void)setCarHeadunitInteractionModel:(int)arg1 ;
-(void)setCarHeadunitManufacturer:(NSString *)arg1 ;
-(void)setCarHeadunitModel:(NSString *)arg1 ;
-(void)setCarHeadunitPixelWidth:(double)arg1 ;
-(void)setCarHeadunitPixelHeight:(double)arg1 ;
-(void)setMapZoomLevel:(double)arg1 ;
-(void)setProviderID:(NSString *)arg1 ;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setCarHeadunitConnectionType:(int)arg1 ;
-(void)setNavigating:(char)arg1 ;
-(void)setIsRedoSearch:(char)arg1 ;
-(void)addHistoricalLocations:(id)arg1 ;
-(void)setDeviceInVehicle:(char)arg1 ;
-(void)setAnalyticsAppIdentifier:(NSString *)arg1 ;
-(void)setSupportDirectionIntentAutocomplete:(char)arg1 ;
-(void)setDeviceDarkMode:(char)arg1 ;
-(void)setAppDarkMode:(char)arg1 ;
-(void)setRequestPurpose:(int)arg1 ;
-(void)addSupportedAutocompleteListType:(int)arg1 ;
-(void)setIsSettlement:(char)arg1 ;
-(void)setIsRefund:(char)arg1 ;
-(void)setAutocompleteRequestSupportsSectionHeader:(char)arg1 ;
-(void)setSupportAutocompleteRapAffordance:(char)arg1 ;
-(void)setNavigationTransportType:(int)arg1 ;
-(void)addEvChargingPort:(id)arg1 ;
-(void)setSupportAutocompletePublisherResults:(char)arg1 ;
-(void)setSupportAutocompleteGuideResults:(char)arg1 ;
-(NSMutableArray *)historicalLocations;
-(void)clearDeviceDisplayLanguages;
-(id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1 ;
-(id)photoSizesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)reviewUserPhotoSizesCount;
-(void)clearReviewUserPhotoSizes;
-(id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)historicalLocationsCount;
-(void)clearHistoricalLocations;
-(id)historicalLocationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedAutocompleteListTypesCount;
-(void)clearSupportedAutocompleteListTypes;
-(int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)evChargingPortsCount;
-(void)clearEvChargingPorts;
-(id)evChargingPortAtIndex:(unsigned long long)arg1 ;
-(char)hasDeviceKeyboardLocale;
-(void)setHasIsAPICall:(char)arg1 ;
-(void)setPhotoSizes:(NSMutableArray *)arg1 ;
-(void)setHasPhotosCount:(char)arg1 ;
-(void)setReviewUserPhotoSizes:(NSMutableArray *)arg1 ;
-(unsigned)reviewUserPhotosCount;
-(void)setHasReviewUserPhotosCount:(char)arg1 ;
-(int)carHeadunitInteractionModel;
-(void)setHasCarHeadunitInteractionModel:(char)arg1 ;
-(char)hasCarHeadunitInteractionModel;
-(id)carHeadunitInteractionModelAsString:(int)arg1 ;
-(int)StringAsCarHeadunitInteractionModel:(id)arg1 ;
-(char)hasCarHeadunitManufacturer;
-(char)hasCarHeadunitModel;
-(double)carHeadunitPixelWidth;
-(void)setHasCarHeadunitPixelWidth:(char)arg1 ;
-(char)hasCarHeadunitPixelWidth;
-(double)carHeadunitPixelHeight;
-(void)setHasCarHeadunitPixelHeight:(char)arg1 ;
-(char)hasCarHeadunitPixelHeight;
-(double)mapZoomLevel;
-(void)setHasMapZoomLevel:(char)arg1 ;
-(char)hasMapZoomLevel;
-(void)setHasMode:(char)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(char)hasProviderID;
-(int)deviceInterfaceOrientation;
-(void)setHasDeviceInterfaceOrientation:(char)arg1 ;
-(char)hasDeviceInterfaceOrientation;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(int)deviceBatteryState;
-(void)setHasDeviceBatteryState:(char)arg1 ;
-(char)hasDeviceBatteryState;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(int)carHeadunitConnectionType;
-(void)setHasCarHeadunitConnectionType:(char)arg1 ;
-(char)hasCarHeadunitConnectionType;
-(id)carHeadunitConnectionTypeAsString:(int)arg1 ;
-(int)StringAsCarHeadunitConnectionType:(id)arg1 ;
-(char)navigating;
-(void)setHasNavigating:(char)arg1 ;
-(char)hasNavigating;
-(char)isRedoSearch;
-(void)setHasIsRedoSearch:(char)arg1 ;
-(char)hasIsRedoSearch;
-(void)setHistoricalLocations:(NSMutableArray *)arg1 ;
-(char)wantsBrandIcon;
-(void)setHasWantsBrandIcon:(char)arg1 ;
-(char)hasWantsBrandIcon;
-(char)deviceInVehicle;
-(void)setHasDeviceInVehicle:(char)arg1 ;
-(char)hasDeviceInVehicle;
-(void)setHasUseBackgroundUrl:(char)arg1 ;
-(void)setHasHttpRequestPriority:(char)arg1 ;
-(char)hasAnalyticsAppIdentifier;
-(char)supportDirectionIntentAutocomplete;
-(void)setHasSupportDirectionIntentAutocomplete:(char)arg1 ;
-(char)hasSupportDirectionIntentAutocomplete;
-(char)deviceDarkMode;
-(void)setHasDeviceDarkMode:(char)arg1 ;
-(char)hasDeviceDarkMode;
-(char)appDarkMode;
-(void)setHasAppDarkMode:(char)arg1 ;
-(char)hasAppDarkMode;
-(char)supportsBrandFallback;
-(void)setHasSupportsBrandFallback:(char)arg1 ;
-(char)hasSupportsBrandFallback;
-(void)setHasRequestPurpose:(char)arg1 ;
-(char)hasRequestPurpose;
-(id)requestPurposeAsString:(int)arg1 ;
-(int)StringAsRequestPurpose:(id)arg1 ;
-(int*)supportedAutocompleteListTypes;
-(void)setSupportedAutocompleteListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteListTypes:(id)arg1 ;
-(char)isSettlement;
-(void)setHasIsSettlement:(char)arg1 ;
-(char)hasIsSettlement;
-(char)isRefund;
-(void)setHasIsRefund:(char)arg1 ;
-(char)hasIsRefund;
-(char)autocompleteRequestSupportsSectionHeader;
-(void)setHasAutocompleteRequestSupportsSectionHeader:(char)arg1 ;
-(char)hasAutocompleteRequestSupportsSectionHeader;
-(char)supportAutocompleteRapAffordance;
-(void)setHasSupportAutocompleteRapAffordance:(char)arg1 ;
-(char)hasSupportAutocompleteRapAffordance;
-(void)setHasNavigationTransportType:(char)arg1 ;
-(id)navigationTransportTypeAsString:(int)arg1 ;
-(int)StringAsNavigationTransportType:(id)arg1 ;
-(void)setHasRatingsCount:(char)arg1 ;
-(NSMutableArray *)evChargingPorts;
-(void)setEvChargingPorts:(NSMutableArray *)arg1 ;
-(char)supportAutocompletePublisherResults;
-(void)setHasSupportAutocompletePublisherResults:(char)arg1 ;
-(char)hasSupportAutocompletePublisherResults;
-(char)supportAutocompleteGuideResults;
-(void)setHasSupportAutocompleteGuideResults:(char)arg1 ;
-(char)hasSupportAutocompleteGuideResults;
-(void)_internal_incrementSessionCounters;
-(id)copyByIncrementingSessionCounters;
-(void)clearSessionId;
@end

