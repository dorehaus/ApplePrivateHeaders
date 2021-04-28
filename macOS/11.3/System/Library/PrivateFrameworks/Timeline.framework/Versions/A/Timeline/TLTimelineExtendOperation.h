/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Versions/A/Timeline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Timeline/TLTimelineOperation.h>

@class NSDate, NSArray, NSError;

@interface TLTimelineExtendOperation : TLTimelineOperation {

	NSDate* _afterDate;
	double _timeout;
	unsigned long long _limit;
	NSArray* _timelineEntries;
	NSError* _extendError;

}

@property (retain) NSArray * timelineEntries;                         //@synthesize timelineEntries=_timelineEntries - In the implementation block
@property (retain) NSError * extendError;                             //@synthesize extendError=_extendError - In the implementation block
@property (copy) id operationCompletionBlock; 
@property (copy) id timelineOperationCompletionBlock; 
@property (nonatomic,readonly) NSDate * afterDate;                    //@synthesize afterDate=_afterDate - In the implementation block
@property (nonatomic,readonly) double timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
+(unsigned long long)relativePriority;
-(id)error;
-(unsigned long long)limit;
-(double)timeout;
-(void)main;
-(NSError *)extendError;
-(NSDate *)afterDate;
-(void)setExtendError:(NSError *)arg1 ;
-(void)setTimelineEntries:(NSArray *)arg1 ;
-(id)initWithIdentifiable:(id)arg1 afterDate:(id)arg2 timeout:(double)arg3 entryLimit:(unsigned long long)arg4 ;
-(NSArray *)timelineEntries;
@end

