/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocation;

@interface RTLearnedLocation : NSObject {

	RTLocation* _location;
	unsigned long long _dataPointCount;
	double _confidence;

}

@property (nonatomic,readonly) RTLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long dataPointCount;              //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
+(double)confidenceFromDataPointCount:(unsigned long long)arg1 ;
+(id)shiftLocation:(id)arg1 shifter:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(RTLocation *)location;
-(double)confidence;
-(unsigned long long)dataPointCount;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(id)initWithLearnedLocations:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(void)calculateAltitude:(double*)arg1 verticalUncertainty:(double*)arg2 learnedLocations:(id)arg3 ;
@end

