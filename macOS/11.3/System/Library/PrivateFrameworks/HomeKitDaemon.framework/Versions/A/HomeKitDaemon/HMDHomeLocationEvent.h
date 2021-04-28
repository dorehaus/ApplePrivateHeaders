/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, CLLocation, NSString;

@interface HMDHomeLocationEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSArray* _tuples;
	CLLocation* _selectedHomeLocation;
	unsigned long long _numOfIterations;
	CLLocation* _nearestLOI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tuples;                                  //@synthesize tuples=_tuples - In the implementation block
@property (nonatomic,retain) CLLocation * selectedHomeLocation;               //@synthesize selectedHomeLocation=_selectedHomeLocation - In the implementation block
@property (assign,nonatomic) unsigned long long numOfIterations;              //@synthesize numOfIterations=_numOfIterations - In the implementation block
@property (nonatomic,retain) CLLocation * nearestLOI;                         //@synthesize nearestLOI=_nearestLOI - In the implementation block
+(id)eventWithLocationTuples:(id)arg1 selectedHomeLocation:(id)arg2 numberOfIterations:(unsigned long long)arg3 nearestLOI:(id)arg4 ;
-(NSArray *)tuples;
-(void)setTuples:(NSArray *)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(CLLocation *)selectedHomeLocation;
-(void)setSelectedHomeLocation:(CLLocation *)arg1 ;
-(id)awdLocationFromLocationTuple:(id)arg1 ;
-(void)setNearestLOI:(CLLocation *)arg1 ;
-(CLLocation *)nearestLOI;
-(void)setNumOfIterations:(unsigned long long)arg1 ;
-(unsigned long long)numOfIterations;
@end

