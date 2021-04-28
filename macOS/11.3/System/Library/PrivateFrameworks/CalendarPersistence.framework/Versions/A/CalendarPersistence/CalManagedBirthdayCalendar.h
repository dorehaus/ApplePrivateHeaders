/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendar.h>

@class NSString;

@interface CalManagedBirthdayCalendar : CalManagedCalendar

@property (nonatomic,copy) NSString * accountIDForHeading; 
@property (nonatomic,copy) NSString * groupHeaderTitle; 
+(id)entityName;
+(id)color;
+(id)singletonContainerSource;
-(id)type;
-(id)color;
-(void)didSave;
-(void)awakeFromInsert;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(char)isRenameable;
-(char)isBirthday;
-(id)containerSource;
-(char)isColorEditable;
-(char)isFacebookBirthdayCalendar;
-(char)allowsScheduling;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 ;
-(char)validateForWrite:(id*)arg1 ;
-(char)keepSyncRecordLocal;
-(char)supportsPublishing;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 fromServer:(char)arg2 ;
@end
