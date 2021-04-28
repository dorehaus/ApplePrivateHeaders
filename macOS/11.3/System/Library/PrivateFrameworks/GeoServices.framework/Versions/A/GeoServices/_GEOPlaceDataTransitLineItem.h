/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLineItem.h>

@protocol GEOTransitAttribution, GEOTransitLine, GEOMapItemTransitInfo, GEOEncyclopedicInfo;
@class NSArray, GEOMapRegion, NSString, GEOMapItemIdentifier;

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {

	id<GEOTransitAttribution> _attribution;
	id<GEOTransitLine> _line;
	id<GEOMapItemTransitInfo> _transitInfo;
	GEOMapRegion* _mapRegion;
	char _hasEncyclopedicInfo;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;

}

@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasIncidentComponent; 
@property (nonatomic,readonly) char hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) char departuresAreVehicleSpecific; 
@property (nonatomic,readonly) char isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) char hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) char showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(GEOMapItemIdentifier *)identifier;
-(id<GEOTransitSystem>)system;
-(unsigned long long)muid;
-(id)initWithMapItem:(id)arg1 ;
-(char)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id<GEOTransitAttribution>)attribution;
-(NSArray *)incidents;
-(GEOMapRegion *)mapRegion;
-(id<GEOTransitArtworkDataSource>)artwork;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(char)showVehicleNumber;
-(NSString *)lineColorString;
-(NSArray *)labelItems;
-(char)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(char)isBus;
-(char)hasLineColorString;
-(char)isIncidentsTTLExpired;
-(char)hasIncidentComponent;
@end

