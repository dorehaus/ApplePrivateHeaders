/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>

@class NSString, NSURL, NSDate, CalManagedCalendarItem;

@interface CalManagedComment : CalManagedObject

@property (retain) NSString * commentString; 
@property (assign) char userGeneratedCommentChanged; 
@property (retain) NSURL * address; 
@property (retain) NSDate * timeStamp; 
@property (retain) CalManagedCalendarItem * item; 
+(id)entityName;
+(char)userGeneratedCommentChangedWithPreviousComment:(id)arg1 newComment:(id)arg2 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(void)willRefresh:(char)arg1 ;
-(void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(id)uniqueKeyForObject;
-(void)updateWithEntity:(id)arg1 ;
@end

