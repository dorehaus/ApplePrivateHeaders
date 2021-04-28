/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)description;
-(NSString *)previousScheduleTag;
-(id)additionalHeaderValues;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
@end
