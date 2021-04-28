/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNTimeProvider, CNTaskTimeProfileLogging;
@class CNTask;

@interface _CNTimeProfilingTask : CNTask {

	CNTask* _task;
	id<CNTimeProvider> _timeProvider;
	id<CNTaskTimeProfileLogging> _logger;

}

@property (readonly) CNTask * task;                                    //@synthesize task=_task - In the implementation block
@property (readonly) id<CNTimeProvider> timeProvider;                  //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) id<CNTaskTimeProfileLogging> logger;              //@synthesize logger=_logger - In the implementation block
-(id)run;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(id<CNTaskTimeProfileLogging>)logger;
-(CNTask *)task;
-(id<CNTimeProvider>)timeProvider;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 os_log:(id)arg3 ;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 logger:(id)arg3 ;
@end

