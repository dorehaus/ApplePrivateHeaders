/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, MKTransitSectionPagingFilter, NSSet, NSDate;

@interface MKTransitSectionController : NSObject {

	MKMapItem* _mapItem;
	MKTransitSectionPagingFilter* __pagingFilter;
	NSSet* _linesToShow;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfFilteredRows;
	unsigned long long _numberOfFilteredLines;
	char _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _incidentEntitiesToExclude;

}

@property (nonatomic,readonly) id<GEOTransitSystem> system;                               //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                     //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * incidentEntitiesToExclude;                           //@synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                  //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) MKTransitSectionPagingFilter * _pagingFilter;              //@synthesize _pagingFilter=__pagingFilter - In the implementation block
-(id)init;
-(unsigned long long)numberOfRows;
-(id<GEOTransitSystem>)system;
-(char)_needsBuildRows;
-(void)_buildRows;
-(void)_setNeedsBuildRows;
-(MKTransitSectionPagingFilter *)_pagingFilter;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(NSDate *)departureCutoffDate;
-(NSSet *)incidentEntitiesToExclude;
-(void)incrementPagingFilter;
-(char)hasFilteredRows;
-(unsigned long long)numberOfFilteredLines;
-(id)linesToShow;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(char)hasFilteredLines;
@end
