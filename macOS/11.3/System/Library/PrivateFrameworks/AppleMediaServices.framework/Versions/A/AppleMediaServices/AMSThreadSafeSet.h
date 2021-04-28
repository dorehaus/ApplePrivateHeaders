/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSArray;

@interface AMSThreadSafeSet : NSObject {

	NSMutableSet* _backingSet;
	NSObject*<OS_dispatch_queue> _backingSetAccessQueue;

}

@property (retain) NSMutableSet * backingSet;                                       //@synthesize backingSet=_backingSet - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> backingSetAccessQueue;              //@synthesize backingSetAccessQueue=_backingSetAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(NSArray *)allObjects;
-(void)removeObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backingSetAccessQueue;
-(NSMutableSet *)backingSet;
-(void)setBackingSet:(NSMutableSet *)arg1 ;
-(void)setBackingSetAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
