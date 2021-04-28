/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {

	NSString* _path;
	int _fd;
	void* _bytes;
	unsigned long long _mappedLen;
	AB _dead;
	opaque_pthread_mutex_t _localLock;

}
-(void)dealloc;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(char)resetLocked;
-(void)saveCorruptState;
-(void)_remapWithFlock:(char)arg1 ;
-(void)_die;
-(unsigned long long)_reserveCapacity:(unsigned)arg1 ;
@end

