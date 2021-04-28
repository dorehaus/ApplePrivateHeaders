/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalExecutableTask;
@class NSMutableSet, NSMutableArray, NSRunLoop;

@interface CalTaskManager : NSObject {

	NSMutableSet* _independentTasks;
	NSMutableSet* _heldIndependentTasks;
	NSMutableSet* _modalHeldIndependentTasks;
	NSMutableSet* _outstandingTaskGroups;
	NSMutableArray* _queuedTasks;
	id<CalExecutableTask> _activeQueuedTask;
	id<CalExecutableTask> _modalHeldActiveQueuedTask;
	NSMutableArray* _queuedModalTasks;
	id<CalExecutableTask> _activeModalTask;
	int _state;
	NSRunLoop* _workRunLoop;

}

@property (retain) NSRunLoop * workRunLoop;                           //@synthesize workRunLoop=_workRunLoop - In the implementation block
@property (retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(void)dealloc;
-(id)init;
-(id)stateString;
-(void)shutdown;
-(NSMutableSet *)outstandingTaskGroups;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
-(void)taskGroupDidFinish:(id)arg1 ;
-(void)startTaskGroup:(id)arg1 ;
-(void)_schedulePerformTask:(id)arg1 ;
-(void)submitQueuedTask:(id)arg1 toFrontOfQueue:(char)arg2 ;
-(id)allTasks;
-(void)_reactivateHeldTasks;
-(void)_scheduleStartModal:(id)arg1 ;
-(void)_makeStateTransition;
-(void)_performTask:(id)arg1 ;
-(void)_startModal:(id)arg1 ;
-(void)submitIndependentTask:(id)arg1 ;
-(void)submitQueuedTask:(id)arg1 ;
-(void)taskDidFinish:(id)arg1 ;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(NSRunLoop *)workRunLoop;
@end

