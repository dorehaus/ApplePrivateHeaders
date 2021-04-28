/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _samples;

}

@property (nonatomic,retain) NSMutableArray * samples;              //@synthesize samples=_samples - In the implementation block
+(char)supportsSecureCoding;
+(id)makeMetric;
-(unsigned long long)size;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)samples;
-(void)merge:(id)arg1 ;
-(void)addSample:(id)arg1 ;
-(double)variance;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(double)average;
-(double)sum;
-(id)generateDataForSR:(id)arg1 dropSampleSize:(char)arg2 ;
@end

