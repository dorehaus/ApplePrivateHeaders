/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CMFallDetectionEvent : NSObject {

	NSDate* _date;
	long long _resolution;

}

@property (nonatomic,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long resolution;              //@synthesize resolution=_resolution - In the implementation block
-(void)dealloc;
-(NSDate *)date;
-(long long)resolution;
-(id)initWithAnomalyEvent:(id)arg1 ;
-(id)initWithResolution:(long long)arg1 date:(id)arg2 ;
@end

