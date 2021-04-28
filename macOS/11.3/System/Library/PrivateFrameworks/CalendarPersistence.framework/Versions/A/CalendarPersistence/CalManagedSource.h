/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CoreCalendarSource.h>

@interface CalManagedSource : CoreCalendarSource {

	int _status;

}
-(int)status;
-(id)initWithKey:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(char)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)hasCalendarItemForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)calendarInManagedObjectContext:(id)arg1 ;
-(id)entitiesMatchingSearchElement:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)entityForLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)entityForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)eventsWithFutureInvitationsInManagedObjectContext:(id)arg1 ;
-(id)calendarItemWithLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)calendarItemWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)hasEntitiesInManagedObjectContext:(id)arg1 ;
@end

