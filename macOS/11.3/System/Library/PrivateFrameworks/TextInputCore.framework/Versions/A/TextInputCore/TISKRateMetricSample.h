/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TISKRateMetricSample : NSObject <NSSecureCoding> {

	int _countFactor;
	double _durationFactor;

}

@property (assign,nonatomic) int countFactor;                    //@synthesize countFactor=_countFactor - In the implementation block
@property (assign,nonatomic) double durationFactor;              //@synthesize durationFactor=_durationFactor - In the implementation block
+(char)supportsSecureCoding;
+(id)makeMetric;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)merge:(id)arg1 ;
-(id)rate;
-(void)addToCounter:(int)arg1 ;
-(void)addToDuration:(double)arg1 ;
-(int)countFactor;
-(void)setCountFactor:(int)arg1 ;
-(double)durationFactor;
-(void)setDurationFactor:(double)arg1 ;
@end

