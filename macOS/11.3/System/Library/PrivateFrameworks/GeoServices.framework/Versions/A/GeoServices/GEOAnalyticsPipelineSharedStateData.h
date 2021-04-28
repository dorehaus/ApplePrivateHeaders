/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@protocol OS_dispatch_queue;
@class geo_isolater, NSObject;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;
	geo_isolater* _mapViewIso;
	NSObject*<OS_dispatch_queue> _configQueue;

}
+(id)sharedData;
-(id)init;
-(void)setMetroRegion:(id)arg1 ;
-(void)setUserHomemetro:(id)arg1 ;
-(void)setUserHomecountry:(id)arg1 ;
-(void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(char)hasPlaceCard_PlaceActionDetails;
-(char)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(char)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(char)_isHandoff;
-(char)_isHandoffFromDeviceType:(id)arg1 ;
-(char)isIPadHandoff;
-(char)isWatchHandoff;
-(void)performMapViewStateUpdate:(/*^block*/id)arg1 ;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(void)clearPlaceCardStateData;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(char)hasPlaceCardStateData;
-(char)hasMapsServerData;
-(char)hasSuggestionsData;
-(void)clearSuggestionsData;
-(char)hasMapRestoreData;
-(char)hasMapLaunchData;
-(int)navVoiceVolumeAsGEONavVoiceVolume;
-(int)transportModeAsGEOTransportMode;
-(int)activeNavModeAsGEOTransportType;
-(int)locationPrecisionTypeAsGEOSettingsLocationType;
-(int)layoutInfoAsGEOLayoutInfo;
-(int)layoutStyleAsGEOLayoutStyle;
-(char)isIPhoneHandoff;
-(char)isMacHandoff;
@end

