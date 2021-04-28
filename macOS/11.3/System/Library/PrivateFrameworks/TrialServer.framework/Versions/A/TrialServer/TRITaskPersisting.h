/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRITaskPersisting
@required
-(id)tasks;
-(char)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2;
-(id)idForTask:(id)arg1;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
-(char)removeTaskWithId:(id)arg1 cleanupBlock:(/*^block*/id)arg2;
-(char)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
-(id)taskIdsWithTag:(id)arg1;
-(id)directDependenciesOfTaskWithId:(id)arg1;
-(id)tasksDependentOnTask:(id)arg1;

@end
