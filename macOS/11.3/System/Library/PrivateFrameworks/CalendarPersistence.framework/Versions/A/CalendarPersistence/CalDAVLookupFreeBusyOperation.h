/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVFreeBusyLookupTask, NSDictionary, NSMutableDictionary, CalDateRange;

@interface CalDAVLookupFreeBusyOperation : CalSingleSynchronousTask {

	CalDAVFreeBusyLookupTask* _task;
	NSDictionary* _freeBusySpans;
	NSMutableDictionary* _userEventArrays;
	CalDateRange* _timeRange;

}

@property (readonly) NSDictionary * freeBusySpans;                //@synthesize freeBusySpans=_freeBusySpans - In the implementation block
@property (readonly) NSDictionary * userEventArrays;              //@synthesize userEventArrays=_userEventArrays - In the implementation block
-(NSDictionary *)freeBusySpans;
-(id)initWithPrincipal:(id)arg1 timeRange:(id)arg2 attendees:(id)arg3 maskingEventSharedUid:(id)arg4 ;
-(char)executeSynchronouslyWithError:(id*)arg1 ;
-(NSDictionary *)userEventArrays;
@end

