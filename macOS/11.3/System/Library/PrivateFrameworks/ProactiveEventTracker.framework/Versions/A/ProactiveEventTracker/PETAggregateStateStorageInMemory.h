/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {

	NSMutableData* _data;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(char)resetLocked;
-(void)saveCorruptState;
@end

