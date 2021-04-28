/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString, NSNumber;

@interface CalManagedCalendarHomeChangeRequest : CalManagedChangeRequest

@property (retain) NSString * principalUID; 
@property (retain) NSString * uri; 
@property (retain) NSString * property; 
@property (retain) NSString * value; 
@property (retain) NSNumber * valueType; 
+(id)entityName;
+(id)insertCalendarHomeChangeRequestWithType:(int)arg1 principalUID:(id)arg2 uri:(id)arg3 inManagedObjectContext:(id)arg4 ;
@end

