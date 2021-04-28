/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PPEventsAggregator : NSObject {

	NSArray* _eventsPool;

}

@property (nonatomic,retain) NSArray * eventsPool;              //@synthesize eventsPool=_eventsPool - In the implementation block
-(id)initWithEventsPool:(id)arg1 ;
-(id)tripCandidatesFromEventsPool;
-(char)isEvent:(id)arg1 dupeOfEvent:(id)arg2 ;
-(void)dedupeEventsInPool;
-(id)sortedEvents;
-(NSArray *)eventsPool;
-(void)setEventsPool:(NSArray *)arg1 ;
@end

