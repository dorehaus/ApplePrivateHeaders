/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RBProcessCPUMaximumLimits : NSObject {

	unsigned long long _percentage;
	unsigned long long _duration;
	unsigned long long _violationPolicy;

}

@property (nonatomic,readonly) unsigned long long percentage;                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long violationPolicy;              //@synthesize violationPolicy=_violationPolicy - In the implementation block
-(id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 violationPolicy:(unsigned long long)arg3 ;
-(id)unionLimit:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)duration;
-(unsigned long long)percentage;
-(unsigned long long)violationPolicy;
@end
