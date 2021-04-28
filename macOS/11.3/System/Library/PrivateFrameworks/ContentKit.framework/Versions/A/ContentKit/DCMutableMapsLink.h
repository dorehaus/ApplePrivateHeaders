/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/DCMapsLink.h>

@class NSString;

@interface DCMutableMapsLink : DCMapsLink {

	NSString* _searchQuery;
	NSString* _searchNearQuery;
	NSString* _searchLocation;
	NSString* _startAddress;
	NSString* _destinationAddress;
	unsigned long long _directionsMode;
	NSString* _centerLocation;
	long long _zoomLevel;
	unsigned long long _mapType;
	char _showsTraffic;
	char _showsTransit;
	char _showsStreetView;
	char _showsBicycling;
	NSString* _streetViewLocation;

}

@property (nonatomic,copy) NSString * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * searchNearQuery;                       //@synthesize searchNearQuery=_searchNearQuery - In the implementation block
@property (nonatomic,copy) NSString * searchLocation;                        //@synthesize searchLocation=_searchLocation - In the implementation block
@property (nonatomic,copy) NSString * startAddress;                          //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;                    //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (assign,nonatomic) unsigned long long directionsMode;              //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,copy) NSString * centerLocation;                        //@synthesize centerLocation=_centerLocation - In the implementation block
@property (assign,nonatomic) long long zoomLevel;                            //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                     //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char showsTraffic;                              //@synthesize showsTraffic=_showsTraffic - In the implementation block
@property (assign,nonatomic) char showsTransit;                              //@synthesize showsTransit=_showsTransit - In the implementation block
@property (assign,nonatomic) char showsStreetView;                           //@synthesize showsStreetView=_showsStreetView - In the implementation block
@property (assign,nonatomic) char showsBicycling;                            //@synthesize showsBicycling=_showsBicycling - In the implementation block
@property (nonatomic,copy) NSString * streetViewLocation;                    //@synthesize streetViewLocation=_streetViewLocation - In the implementation block
-(NSString *)destinationAddress;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(void)setZoomLevel:(long long)arg1 ;
-(long long)zoomLevel;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(NSString *)searchLocation;
-(void)setSearchLocation:(NSString *)arg1 ;
-(NSString *)searchQuery;
-(void)setStartAddress:(NSString *)arg1 ;
-(void)setShowsTraffic:(char)arg1 ;
-(char)showsTraffic;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setDirectionsMode:(unsigned long long)arg1 ;
-(unsigned long long)directionsMode;
-(NSString *)searchNearQuery;
-(NSString *)startAddress;
-(NSString *)centerLocation;
-(char)showsTransit;
-(char)showsStreetView;
-(char)showsBicycling;
-(NSString *)streetViewLocation;
-(void)setSearchNearQuery:(NSString *)arg1 ;
-(void)setCenterLocation:(NSString *)arg1 ;
-(void)setShowsTransit:(char)arg1 ;
-(void)setShowsStreetView:(char)arg1 ;
-(void)setShowsBicycling:(char)arg1 ;
-(void)setStreetViewLocation:(NSString *)arg1 ;
@end

