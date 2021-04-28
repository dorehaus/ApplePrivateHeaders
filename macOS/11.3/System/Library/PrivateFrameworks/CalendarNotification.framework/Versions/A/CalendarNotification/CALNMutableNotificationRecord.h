/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <CalendarNotification/CALNNotificationRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CALNNotificationContent, NSDate;

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>

@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (nonatomic,copy) NSString * sourceClientIdentifier; 
@property (nonatomic,copy) CALNNotificationContent * content; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) char shouldPresentAlert; 
@property (assign,nonatomic) char shouldPlaySound; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContent:(CALNNotificationContent *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setSourceClientIdentifier:(NSString *)arg1 ;
-(void)setShouldPresentAlert:(char)arg1 ;
-(void)setShouldPlaySound:(char)arg1 ;
@end

