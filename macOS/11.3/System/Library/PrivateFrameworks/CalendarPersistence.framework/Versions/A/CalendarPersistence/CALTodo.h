/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CALEntity.h>

@class NSString;

@interface CALTodo : CALEntity {

	NSString* _recurrenceDescription;

}

@property (retain) NSString * recurrenceDescription;              //@synthesize recurrenceDescription=_recurrenceDescription - In the implementation block
+(id)entityFromManagedObject:(id)arg1 ;
+(id)todo;
+(id)exchangeConversionLocalizedMessage;
+(id)exchangeConversionLocalizedInfo;
+(id)exchangeConversionLocalizedPluralMessage;
+(id)exchangeConversionLocalizedPluralInfo;
-(void)dealloc;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(id)location;
-(unsigned long long)order;
-(id)duration;
-(void)setDuration:(id)arg1 ;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(void)setLocation:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(id)dueDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)completionDate;
-(char)isCompleted;
-(void)cleanUp;
-(id)checkValidity;
-(char)isExchangeCompatible;
-(void)actualCommitInManagedObjectContext:(id)arg1 ;
-(char)isValidStatus:(int)arg1 ;
-(id)expandOnTimeRange:(id)arg1 ;
-(void)forceDatesToGMT;
-(id)humanReadableRepeatDescription;
-(id)upperBoundDate;
-(id)_makeExchangeCompatible;
-(char)_isAlarmExchangeCompatible:(id)arg1 ;
-(void)_makeAlarmExchangeCompatible:(id)arg1 ;
-(void)setRecurrenceDescription:(NSString *)arg1 ;
-(NSString *)recurrenceDescription;
-(id)masterTodoUID;
-(void)setMasterTodoUID:(id)arg1 ;
@end

