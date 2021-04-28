/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NUJobQueue, NSObject, NSString;

@interface NUJobPriorityQueue : NSObject {

	NSMutableArray* _jobs;
	char _needSort;
	NUJobQueue* _owner;
	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	char _isRunning;
	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) long long count; 
-(id)description;
-(id)init;
-(NSString *)name;
-(long long)count;
-(char)start;
-(void)_run;
-(void)addJob:(id)arg1 ;
-(char)removeJob:(id)arg1 ;
-(id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned)arg3 ;
-(void)_addJob:(id)arg1 ;
-(char)_removeJob:(id)arg1 ;
-(id)popJob;
-(id)_popJob;
-(void)_sortIfNeeded;
-(void)_sort;
-(void)_startRunning;
-(char)_runNextJob;
@end
