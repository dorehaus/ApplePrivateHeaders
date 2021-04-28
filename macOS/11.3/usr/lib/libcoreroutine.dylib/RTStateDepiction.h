/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateDepictionOneState, RTStateModelLocation, RTMapItem, NSDate, NSString;

@interface RTStateDepiction : NSObject <NSSecureCoding> {

	long long _numOfDataPts;
	RTStateDepictionOneState* _clusterState;

}

@property (nonatomic,retain) RTStateDepictionOneState * clusterState;              //@synthesize clusterState=_clusterState - In the implementation block
@property (assign,nonatomic) long long numOfDataPts;                               //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
@property (assign,nonatomic) unsigned long long mapItemSource; 
@property (nonatomic,retain) id<GEOMapItem> geoMapItem; 
@property (nonatomic,retain) RTStateModelLocation * location; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) unsigned long long typeSource; 
@property (nonatomic,retain) RTMapItem * mapItem; 
@property (nonatomic,retain) NSDate * geocodeDate; 
@property (nonatomic,copy) NSString * customLabel; 
+(char)supportsSecureCoding;
+(long long)maximumNumberOfDataPoints;
+(double)quantizeTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(RTStateModelLocation *)location;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(RTMapItem *)mapItem;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(unsigned long long)typeSource;
-(unsigned long long)mapItemSource;
-(void)setMapItemSource:(unsigned long long)arg1 ;
-(void)setTypeSource:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(unsigned long long)arg3 customLabel:(id)arg4 mapItem:(id)arg5 ;
-(id<GEOMapItem>)geoMapItem;
-(NSDate *)geocodeDate;
-(void)setGeocodeDate:(NSDate *)arg1 ;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(void)_performIntegrityCheck;
-(void)_performErrorCorrection;
-(long long)numOfDataPts;
-(RTStateDepictionOneState *)clusterState;
-(void)setNumOfDataPts:(long long)arg1 ;
-(id)lastEntyExit;
-(char)exemptFromPurge;
-(id)getAllOneVisits;
-(void)submitEntry:(double)arg1 exit:(double)arg2 ;
-(double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2 ;
-(void)removeEntry:(double)arg1 exit:(double)arg2 ;
-(void)incrementNumOfDataPtsByInteger:(long long)arg1 ;
-(double)getLastVisit;
-(char)cleanState:(double)arg1 ;
-(id)getRecentVisits:(double)arg1 ;
-(void)addOneVisitsFromStateDepiction:(id)arg1 ;
-(unsigned long long)getNumOfVisitsOverall;
-(id)getAggStateStat;
-(void)showState;
-(id)getEarliestLatestEntry;
-(id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3 ;
-(id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(void)removeAllVisitsExceptMostRecent;
-(void)setClusterState:(RTStateDepictionOneState *)arg1 ;
-(id)_filterEntryExitData:(id)arg1 options:(id)arg2 ;
-(id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2 ;
-(id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2 ;
-(double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(double)calculateStandardDeviationWithOptions:(id)arg1 error:(id*)arg2 ;
@end
