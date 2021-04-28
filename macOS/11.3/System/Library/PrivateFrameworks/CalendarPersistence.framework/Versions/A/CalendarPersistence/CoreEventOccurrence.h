/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CALOccurrence.h>

@class CALDate, CALDuration, CalEventOccurrence;

@interface CoreEventOccurrence : CALOccurrence {

	CALDate* _cachedEndDate;
	CALDuration* _cachedDuration;
	CalEventOccurrence* _regularOccurrence;

}

@property (nonatomic,retain) CalEventOccurrence * regularOccurrence;              //@synthesize regularOccurrence=_regularOccurrence - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(id)event;
-(id)endDate;
-(id)duration;
-(void)restore;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)summary;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithOccurrableEntity:(id)arg1 withStartDate:(id)arg2 ;
-(void)moveToStartDate:(id)arg1 ;
-(void)setStartDateAndTimeZone:(id)arg1 ;
-(void)invalidateCachedEndDate;
-(char)isFullDayOccurrence;
-(id)timeRangeForFullDayOccurrence;
-(id)makeEntityFromOccurrence;
-(CalEventOccurrence *)regularOccurrence;
-(void)setRegularOccurrence:(CalEventOccurrence *)arg1 ;
@end
