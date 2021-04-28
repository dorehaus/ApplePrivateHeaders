/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>

@class NSDate, CalManagedEvent;

@interface CalManagedRecurrenceException : CalManagedObject

@property (retain) NSDate * date; 
@property (retain) CalManagedEvent * detachedEvent; 
@property (retain) CalManagedEvent * masterEvent; 
+(id)entityName;
+(void)addExceptionPrefetchToCalendarItemFetch:(id)arg1 ;
-(unsigned long long)occurrenceIndex;
-(id)committedExtraAttendees;
-(id)uniqueKeyForObject;
-(id)enclosingSource;
@end

