/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {

	MapsSuggestionsSignalPack* _signalPack;

}
+(id)evaluatorFromSignalPack:(id)arg1 ;
-(char)isWalkable;
-(char)hasTransitInfo;
-(char)hasCarPlayInfo;
-(char)hasTouristInfo;
-(char)isCarPlayConnected;
-(id)initWithSignalPack:(id)arg1 ;
-(char)isTouristHere;
-(char)hasWeatherTemperatureInfo;
-(char)hasWeatherPrecipitationInfo;
-(char)isHotWeather;
-(char)isColdWeather;
-(char)isHighChanceOfRaining;
-(char)isHighChanceOfSnowing;
-(char)hasWeatherInfo;
-(char)isMildWeather;
-(char)isLowChanceOfRaining;
-(char)isLowChanceOfSnowing;
-(char)isBadWeather;
-(char)hasUserTransportTypePreferenceInfo;
-(char)isUserPreferenceDriving;
-(char)isUserPreferenceWalking;
-(char)isUserPreferenceTransit;
-(char)isUserPreferenceRidesharing;
-(char)hasDistanceFromHereToDestinationInfo;
-(char)hasDistanceFromHereToOriginInfo;
-(char)hasDistanceFromOriginToDestinationInfo;
-(char)isEasilyWalkable;
-(char)hasMapTypeInfo;
-(char)isMapTypeTransit;
-(char)isTransitCurrentlyPossible;
-(char)hasRidesharingInfo;
-(char)isRideSharingAppsInstalled;
@end

