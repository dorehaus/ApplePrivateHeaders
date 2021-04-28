/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeOperation.h>

@class NSArray, EWSFolderIdType, NSString;

@interface CalExchangeGetItemOperation : CalExchangeOperation {

	NSArray* _itemIds;
	EWSFolderIdType* _folderId;
	NSString* _messageTracerUID;

}
+(id)iCalendarDateFormatter;
+(id)iCalendarDateTimeFormatter;
-(void)dealloc;
-(id)itemIds;
-(id)folderId;
-(id)initWithSession:(id)arg1 itemIds:(id)arg2 inFolder:(id)arg3 messageTracerUID:(id)arg4 ;
-(id)initWithSession:(id)arg1 itemIds:(id)arg2 inFolder:(id)arg3 ;
-(id)_dayFromEWSDayOfWeekType:(long long)arg1 ;
-(void)updateAlarmsForCalendarItem:(id)arg1 inCalendar:(id)arg2 withItem:(id)arg3 ;
-(void)updateRecurrenceForManagedCalendarItem:(id)arg1 withCalendarItem:(id)arg2 ;
@end

