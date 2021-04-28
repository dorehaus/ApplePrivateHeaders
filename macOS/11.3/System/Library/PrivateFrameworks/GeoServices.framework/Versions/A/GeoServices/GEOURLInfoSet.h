/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOURLInfo, NSMutableArray, NSURL, NSArray;

@interface GEOURLInfoSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOURLInfo* _abExperimentURL;
	GEOURLInfo* _addressCorrectionInitURL;
	GEOURLInfo* _addressCorrectionTaggedLocationURL;
	GEOURLInfo* _addressCorrectionUpdateURL;
	NSMutableArray* _alternateResourcesURLs;
	GEOURLInfo* _analyticsCohortSessionURL;
	GEOURLInfo* _analyticsLongSessionURL;
	GEOURLInfo* _analyticsSessionlessURL;
	GEOURLInfo* _analyticsShortSessionURL;
	GEOURLInfo* _announcementsURL;
	GEOURLInfo* _authProxyURL;
	GEOURLInfo* _authenticatedClientFeatureFlagURL;
	GEOURLInfo* _backgroundDispatcherURL;
	GEOURLInfo* _backgroundRevGeoURL;
	GEOURLInfo* _batchReverseGeocoderPlaceRequestURL;
	GEOURLInfo* _batchReverseGeocoderURL;
	GEOURLInfo* _batchTrafficProbeURL;
	GEOURLInfo* _bluePOIDispatcherURL;
	GEOURLInfo* _businessPortalBaseURL;
	GEOURLInfo* _directionsURL;
	GEOURLInfo* _dispatcherURL;
	GEOURLInfo* _enrichmentSubmissionURL;
	GEOURLInfo* _etaURL;
	GEOURLInfo* _feedbackLookupURL;
	GEOURLInfo* _feedbackSubmissionURL;
	GEOURLInfo* _junctionImageServiceURL;
	GEOURLInfo* _logMessageUsageURL;
	GEOURLInfo* _logMessageUsageV3URL;
	GEOURLInfo* _muninBaseURL;
	GEOURLInfo* _poiBusynessActivityCollectionURL;
	GEOURLInfo* _polyLocationShiftURL;
	GEOURLInfo* _pressureProbeDataURL;
	GEOURLInfo* _proactiveAppClipURL;
	GEOURLInfo* _proactiveRoutingURL;
	GEOURLInfo* _problemCategoriesURL;
	GEOURLInfo* _problemOptInURL;
	GEOURLInfo* _problemStatusURL;
	GEOURLInfo* _problemSubmissionURL;
	GEOURLInfo* _realtimeTrafficProbeURL;
	GEOURLInfo* _resourcesURL;
	GEOURLInfo* _reverseGeocoderVersionsURL;
	GEOURLInfo* _searchAttributionManifestURL;
	GEOURLInfo* _simpleETAURL;
	GEOURLInfo* _spatialLookupURL;
	GEOURLInfo* _tokenAuthenticationURL;
	GEOURLInfo* _ugcLogDiscardURL;
	GEOURLInfo* _webModuleBaseURL;
	GEOURLInfo* _wifiConnectionQualityProbeURL;
	GEOURLInfo* _wifiQualityTileURL;
	GEOURLInfo* _wifiQualityURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	struct {
		unsigned has_dataSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abExperimentURL : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionTaggedLocationURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_alternateResourcesURLs : 1;
		unsigned read_analyticsCohortSessionURL : 1;
		unsigned read_analyticsLongSessionURL : 1;
		unsigned read_analyticsSessionlessURL : 1;
		unsigned read_analyticsShortSessionURL : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_authProxyURL : 1;
		unsigned read_authenticatedClientFeatureFlagURL : 1;
		unsigned read_backgroundDispatcherURL : 1;
		unsigned read_backgroundRevGeoURL : 1;
		unsigned read_batchReverseGeocoderPlaceRequestURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_batchTrafficProbeURL : 1;
		unsigned read_bluePOIDispatcherURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_enrichmentSubmissionURL : 1;
		unsigned read_etaURL : 1;
		unsigned read_feedbackLookupURL : 1;
		unsigned read_feedbackSubmissionURL : 1;
		unsigned read_junctionImageServiceURL : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_logMessageUsageV3URL : 1;
		unsigned read_muninBaseURL : 1;
		unsigned read_poiBusynessActivityCollectionURL : 1;
		unsigned read_polyLocationShiftURL : 1;
		unsigned read_pressureProbeDataURL : 1;
		unsigned read_proactiveAppClipURL : 1;
		unsigned read_proactiveRoutingURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_realtimeTrafficProbeURL : 1;
		unsigned read_resourcesURL : 1;
		unsigned read_reverseGeocoderVersionsURL : 1;
		unsigned read_searchAttributionManifestURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned read_tokenAuthenticationURL : 1;
		unsigned read_ugcLogDiscardURL : 1;
		unsigned read_webModuleBaseURL : 1;
		unsigned read_wifiConnectionQualityProbeURL : 1;
		unsigned read_wifiQualityTileURL : 1;
		unsigned read_wifiQualityURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSURL * resourcesProxyURL; 
@property (nonatomic,readonly) NSArray * alternateResourcesNSURLs; 
@property (assign,nonatomic) char hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (nonatomic,readonly) char hasResourcesURL; 
@property (nonatomic,retain) GEOURLInfo * resourcesURL; 
@property (nonatomic,readonly) char hasSearchAttributionManifestURL; 
@property (nonatomic,retain) GEOURLInfo * searchAttributionManifestURL; 
@property (nonatomic,readonly) char hasDirectionsURL; 
@property (nonatomic,retain) GEOURLInfo * directionsURL; 
@property (nonatomic,readonly) char hasEtaURL; 
@property (nonatomic,retain) GEOURLInfo * etaURL; 
@property (nonatomic,readonly) char hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) GEOURLInfo * batchReverseGeocoderURL; 
@property (nonatomic,readonly) char hasSimpleETAURL; 
@property (nonatomic,retain) GEOURLInfo * simpleETAURL; 
@property (nonatomic,readonly) char hasAddressCorrectionInitURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionInitURL; 
@property (nonatomic,readonly) char hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) char hasPolyLocationShiftURL; 
@property (nonatomic,retain) GEOURLInfo * polyLocationShiftURL; 
@property (nonatomic,readonly) char hasProblemSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * problemSubmissionURL; 
@property (nonatomic,readonly) char hasProblemStatusURL; 
@property (nonatomic,retain) GEOURLInfo * problemStatusURL; 
@property (nonatomic,readonly) char hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) GEOURLInfo * reverseGeocoderVersionsURL; 
@property (nonatomic,readonly) char hasProblemCategoriesURL; 
@property (nonatomic,retain) GEOURLInfo * problemCategoriesURL; 
@property (nonatomic,readonly) char hasAnnouncementsURL; 
@property (nonatomic,retain) GEOURLInfo * announcementsURL; 
@property (nonatomic,readonly) char hasDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * dispatcherURL; 
@property (nonatomic,readonly) char hasProblemOptInURL; 
@property (nonatomic,retain) GEOURLInfo * problemOptInURL; 
@property (nonatomic,readonly) char hasAbExperimentURL; 
@property (nonatomic,retain) GEOURLInfo * abExperimentURL; 
@property (nonatomic,readonly) char hasBusinessPortalBaseURL; 
@property (nonatomic,retain) GEOURLInfo * businessPortalBaseURL; 
@property (nonatomic,readonly) char hasLogMessageUsageURL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageURL; 
@property (nonatomic,readonly) char hasSpatialLookupURL; 
@property (nonatomic,retain) GEOURLInfo * spatialLookupURL; 
@property (nonatomic,readonly) char hasRealtimeTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * realtimeTrafficProbeURL; 
@property (nonatomic,readonly) char hasBatchTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * batchTrafficProbeURL; 
@property (nonatomic,readonly) char hasProactiveRoutingURL; 
@property (nonatomic,retain) GEOURLInfo * proactiveRoutingURL; 
@property (nonatomic,readonly) char hasLogMessageUsageV3URL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageV3URL; 
@property (nonatomic,readonly) char hasBackgroundDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundDispatcherURL; 
@property (nonatomic,readonly) char hasBluePOIDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * bluePOIDispatcherURL; 
@property (nonatomic,readonly) char hasBackgroundRevGeoURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundRevGeoURL; 
@property (nonatomic,readonly) char hasWifiConnectionQualityProbeURL; 
@property (nonatomic,retain) GEOURLInfo * wifiConnectionQualityProbeURL; 
@property (nonatomic,readonly) char hasMuninBaseURL; 
@property (nonatomic,retain) GEOURLInfo * muninBaseURL; 
@property (nonatomic,readonly) char hasAuthProxyURL; 
@property (nonatomic,retain) GEOURLInfo * authProxyURL; 
@property (nonatomic,readonly) char hasWifiQualityURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityURL; 
@property (nonatomic,readonly) char hasFeedbackSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackSubmissionURL; 
@property (nonatomic,readonly) char hasFeedbackLookupURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackLookupURL; 
@property (nonatomic,readonly) char hasJunctionImageServiceURL; 
@property (nonatomic,retain) GEOURLInfo * junctionImageServiceURL; 
@property (nonatomic,readonly) char hasAnalyticsCohortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsCohortSessionURL; 
@property (nonatomic,readonly) char hasAnalyticsLongSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsLongSessionURL; 
@property (nonatomic,readonly) char hasAnalyticsShortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsShortSessionURL; 
@property (nonatomic,readonly) char hasAnalyticsSessionlessURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsSessionlessURL; 
@property (nonatomic,readonly) char hasWebModuleBaseURL; 
@property (nonatomic,retain) GEOURLInfo * webModuleBaseURL; 
@property (nonatomic,readonly) char hasWifiQualityTileURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityTileURL; 
@property (nonatomic,retain) NSMutableArray * alternateResourcesURLs; 
@property (nonatomic,readonly) char hasTokenAuthenticationURL; 
@property (nonatomic,retain) GEOURLInfo * tokenAuthenticationURL; 
@property (nonatomic,readonly) char hasAuthenticatedClientFeatureFlagURL; 
@property (nonatomic,retain) GEOURLInfo * authenticatedClientFeatureFlagURL; 
@property (nonatomic,readonly) char hasAddressCorrectionTaggedLocationURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionTaggedLocationURL; 
@property (nonatomic,readonly) char hasProactiveAppClipURL; 
@property (nonatomic,retain) GEOURLInfo * proactiveAppClipURL; 
@property (nonatomic,readonly) char hasEnrichmentSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * enrichmentSubmissionURL; 
@property (nonatomic,readonly) char hasUgcLogDiscardURL; 
@property (nonatomic,retain) GEOURLInfo * ugcLogDiscardURL; 
@property (nonatomic,readonly) char hasBatchReverseGeocoderPlaceRequestURL; 
@property (nonatomic,retain) GEOURLInfo * batchReverseGeocoderPlaceRequestURL; 
@property (nonatomic,readonly) char hasPressureProbeDataURL; 
@property (nonatomic,retain) GEOURLInfo * pressureProbeDataURL; 
@property (nonatomic,readonly) char hasPoiBusynessActivityCollectionURL; 
@property (nonatomic,retain) GEOURLInfo * poiBusynessActivityCollectionURL; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)alternateResourcesURLType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(unsigned)dataSet;
-(void)setHasDataSet:(char)arg1 ;
-(char)hasDataSet;
-(GEOURLInfo *)directionsURL;
-(GEOURLInfo *)etaURL;
-(GEOURLInfo *)batchReverseGeocoderURL;
-(GEOURLInfo *)simpleETAURL;
-(GEOURLInfo *)addressCorrectionInitURL;
-(GEOURLInfo *)addressCorrectionUpdateURL;
-(GEOURLInfo *)problemSubmissionURL;
-(GEOURLInfo *)problemStatusURL;
-(GEOURLInfo *)problemCategoriesURL;
-(GEOURLInfo *)announcementsURL;
-(GEOURLInfo *)dispatcherURL;
-(GEOURLInfo *)problemOptInURL;
-(GEOURLInfo *)businessPortalBaseURL;
-(GEOURLInfo *)logMessageUsageURL;
-(GEOURLInfo *)spatialLookupURL;
-(void)setDirectionsURL:(GEOURLInfo *)arg1 ;
-(void)setEtaURL:(GEOURLInfo *)arg1 ;
-(void)setBatchReverseGeocoderURL:(GEOURLInfo *)arg1 ;
-(void)setSimpleETAURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionInitURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(GEOURLInfo *)arg1 ;
-(void)setProblemSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setProblemStatusURL:(GEOURLInfo *)arg1 ;
-(void)setProblemCategoriesURL:(GEOURLInfo *)arg1 ;
-(void)setAnnouncementsURL:(GEOURLInfo *)arg1 ;
-(void)setDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setProblemOptInURL:(GEOURLInfo *)arg1 ;
-(void)setBusinessPortalBaseURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageURL:(GEOURLInfo *)arg1 ;
-(void)setSpatialLookupURL:(GEOURLInfo *)arg1 ;
-(char)hasDirectionsURL;
-(char)hasEtaURL;
-(char)hasBatchReverseGeocoderURL;
-(char)hasSimpleETAURL;
-(char)hasAddressCorrectionInitURL;
-(char)hasAddressCorrectionUpdateURL;
-(char)hasProblemSubmissionURL;
-(char)hasProblemStatusURL;
-(char)hasProblemCategoriesURL;
-(char)hasAnnouncementsURL;
-(char)hasDispatcherURL;
-(char)hasProblemOptInURL;
-(char)hasBusinessPortalBaseURL;
-(char)hasLogMessageUsageURL;
-(char)hasSpatialLookupURL;
-(GEOURLInfo *)resourcesURL;
-(GEOURLInfo *)searchAttributionManifestURL;
-(GEOURLInfo *)polyLocationShiftURL;
-(GEOURLInfo *)reverseGeocoderVersionsURL;
-(GEOURLInfo *)abExperimentURL;
-(GEOURLInfo *)realtimeTrafficProbeURL;
-(GEOURLInfo *)batchTrafficProbeURL;
-(GEOURLInfo *)proactiveRoutingURL;
-(GEOURLInfo *)logMessageUsageV3URL;
-(GEOURLInfo *)backgroundDispatcherURL;
-(GEOURLInfo *)bluePOIDispatcherURL;
-(GEOURLInfo *)backgroundRevGeoURL;
-(GEOURLInfo *)wifiConnectionQualityProbeURL;
-(GEOURLInfo *)muninBaseURL;
-(GEOURLInfo *)authProxyURL;
-(void)setResourcesURL:(GEOURLInfo *)arg1 ;
-(void)setSearchAttributionManifestURL:(GEOURLInfo *)arg1 ;
-(void)setPolyLocationShiftURL:(GEOURLInfo *)arg1 ;
-(void)setReverseGeocoderVersionsURL:(GEOURLInfo *)arg1 ;
-(void)setAbExperimentURL:(GEOURLInfo *)arg1 ;
-(void)setRealtimeTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setBatchTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setProactiveRoutingURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageV3URL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBluePOIDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundRevGeoURL:(GEOURLInfo *)arg1 ;
-(void)setWifiConnectionQualityProbeURL:(GEOURLInfo *)arg1 ;
-(void)setMuninBaseURL:(GEOURLInfo *)arg1 ;
-(void)setAuthProxyURL:(GEOURLInfo *)arg1 ;
-(char)hasResourcesURL;
-(char)hasSearchAttributionManifestURL;
-(char)hasPolyLocationShiftURL;
-(char)hasReverseGeocoderVersionsURL;
-(char)hasAbExperimentURL;
-(char)hasRealtimeTrafficProbeURL;
-(char)hasBatchTrafficProbeURL;
-(char)hasProactiveRoutingURL;
-(char)hasLogMessageUsageV3URL;
-(char)hasBackgroundDispatcherURL;
-(char)hasBluePOIDispatcherURL;
-(char)hasBackgroundRevGeoURL;
-(char)hasWifiConnectionQualityProbeURL;
-(char)hasMuninBaseURL;
-(char)hasAuthProxyURL;
-(GEOURLInfo *)wifiQualityURL;
-(GEOURLInfo *)feedbackSubmissionURL;
-(GEOURLInfo *)feedbackLookupURL;
-(GEOURLInfo *)junctionImageServiceURL;
-(GEOURLInfo *)analyticsCohortSessionURL;
-(GEOURLInfo *)analyticsLongSessionURL;
-(GEOURLInfo *)analyticsShortSessionURL;
-(GEOURLInfo *)analyticsSessionlessURL;
-(GEOURLInfo *)webModuleBaseURL;
-(GEOURLInfo *)wifiQualityTileURL;
-(GEOURLInfo *)tokenAuthenticationURL;
-(GEOURLInfo *)authenticatedClientFeatureFlagURL;
-(GEOURLInfo *)addressCorrectionTaggedLocationURL;
-(GEOURLInfo *)proactiveAppClipURL;
-(GEOURLInfo *)enrichmentSubmissionURL;
-(GEOURLInfo *)ugcLogDiscardURL;
-(GEOURLInfo *)batchReverseGeocoderPlaceRequestURL;
-(GEOURLInfo *)pressureProbeDataURL;
-(GEOURLInfo *)poiBusynessActivityCollectionURL;
-(void)setWifiQualityURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackLookupURL:(GEOURLInfo *)arg1 ;
-(void)setJunctionImageServiceURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsCohortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsLongSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsShortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsSessionlessURL:(GEOURLInfo *)arg1 ;
-(void)setWebModuleBaseURL:(GEOURLInfo *)arg1 ;
-(void)setWifiQualityTileURL:(GEOURLInfo *)arg1 ;
-(void)addAlternateResourcesURL:(id)arg1 ;
-(void)setTokenAuthenticationURL:(GEOURLInfo *)arg1 ;
-(void)setAuthenticatedClientFeatureFlagURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionTaggedLocationURL:(GEOURLInfo *)arg1 ;
-(void)setProactiveAppClipURL:(GEOURLInfo *)arg1 ;
-(void)setEnrichmentSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setUgcLogDiscardURL:(GEOURLInfo *)arg1 ;
-(void)setBatchReverseGeocoderPlaceRequestURL:(GEOURLInfo *)arg1 ;
-(void)setPressureProbeDataURL:(GEOURLInfo *)arg1 ;
-(void)setPoiBusynessActivityCollectionURL:(GEOURLInfo *)arg1 ;
-(unsigned long long)alternateResourcesURLsCount;
-(void)clearAlternateResourcesURLs;
-(id)alternateResourcesURLAtIndex:(unsigned long long)arg1 ;
-(char)hasWifiQualityURL;
-(char)hasFeedbackSubmissionURL;
-(char)hasFeedbackLookupURL;
-(char)hasJunctionImageServiceURL;
-(char)hasAnalyticsCohortSessionURL;
-(char)hasAnalyticsLongSessionURL;
-(char)hasAnalyticsShortSessionURL;
-(char)hasAnalyticsSessionlessURL;
-(char)hasWebModuleBaseURL;
-(char)hasWifiQualityTileURL;
-(NSMutableArray *)alternateResourcesURLs;
-(void)setAlternateResourcesURLs:(NSMutableArray *)arg1 ;
-(char)hasTokenAuthenticationURL;
-(char)hasAuthenticatedClientFeatureFlagURL;
-(char)hasAddressCorrectionTaggedLocationURL;
-(char)hasProactiveAppClipURL;
-(char)hasEnrichmentSubmissionURL;
-(char)hasUgcLogDiscardURL;
-(char)hasBatchReverseGeocoderPlaceRequestURL;
-(char)hasPressureProbeDataURL;
-(char)hasPoiBusynessActivityCollectionURL;
-(NSURL *)resourcesProxyURL;
-(NSArray *)alternateResourcesNSURLs;
@end

