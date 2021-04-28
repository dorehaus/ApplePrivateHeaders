/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class NSString, MXSignpostIntervalData;

@interface MXSignpostMetric : MXMetric {

	NSString* _signpostName;
	NSString* _signpostCategory;
	MXSignpostIntervalData* _signpostIntervalData;
	unsigned long long _totalCount;

}

@property (readonly) NSString * signpostName;                                    //@synthesize signpostName=_signpostName - In the implementation block
@property (readonly) NSString * signpostCategory;                                //@synthesize signpostCategory=_signpostCategory - In the implementation block
@property (readonly) MXSignpostIntervalData * signpostIntervalData;              //@synthesize signpostIntervalData=_signpostIntervalData - In the implementation block
@property (readonly) unsigned long long totalCount;                              //@synthesize totalCount=_totalCount - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)totalCount;
-(id)toDictionary;
-(NSString *)signpostName;
-(id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4 ;
-(NSString *)signpostCategory;
-(MXSignpostIntervalData *)signpostIntervalData;
@end
