/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXAnimationMetric : MXMetric {

	NSMeasurement* _scrollHitchTimeRatio;

}

@property (readonly) NSMeasurement * scrollHitchTimeRatio;              //@synthesize scrollHitchTimeRatio=_scrollHitchTimeRatio - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithGlitchTimeRatio:(id)arg1 ;
-(NSMeasurement *)scrollHitchTimeRatio;
@end

