/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTransitSectionController.h>

@class NSString, NSArray, NSMapTable, NSDictionary, MKTransitDepartureServiceGapFormatter;

@interface MKTransitDeparturesSectionController : MKTransitSectionController {

	NSString* _direction;
	NSArray* _sequences;
	NSMapTable* _sequencesToInclude;
	NSDictionary* _serviceGapStrings;
	char _needsFindRowForServiceGap;
	char _needsFindDeparturesAreVehicleSpecific;
	char _departuresAreVehicleSpecific;
	MKTransitDepartureServiceGapFormatter* _serviceGapFormatter;

}

@property (nonatomic,retain) MKTransitDepartureServiceGapFormatter * serviceGapFormatter;              //@synthesize serviceGapFormatter=_serviceGapFormatter - In the implementation block
@property (nonatomic,readonly) char showOperatingHours; 
@property (nonatomic,readonly) char departuresAreVehicleSpecific;                                      //@synthesize departuresAreVehicleSpecific=_departuresAreVehicleSpecific - In the implementation block
-(id)init;
-(char)departuresAreVehicleSpecific;
-(void)_buildRows;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(char)showOperatingHours;
-(void)setDepartureCutoffDate:(id)arg1 ;
-(id)sequenceForRow:(long long)arg1 outIsNewLine:(out char*)arg2 outNextLineIsSame:(out char*)arg3 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(id)sequences;
-(void)_serviceGapDate:(out id*)arg1 string:(out id*)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4 ;
-(char)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3 ;
-(MKTransitDepartureServiceGapFormatter *)serviceGapFormatter;
-(id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2 ;
-(id)serviceGapDescriptionForRow:(long long)arg1 ;
-(void)setServiceGapFormatter:(MKTransitDepartureServiceGapFormatter *)arg1 ;
@end
