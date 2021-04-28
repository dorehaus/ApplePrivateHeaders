/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)shutdown;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)setWorkRunLoop:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;

@end

