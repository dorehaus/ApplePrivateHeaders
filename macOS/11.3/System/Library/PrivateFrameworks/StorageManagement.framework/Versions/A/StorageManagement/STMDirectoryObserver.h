/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageManagement.framework/Versions/A/StorageManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StorageManagement/StorageManagement-Structs.h>
@interface STMDirectoryObserver : NSObject {

	/*^block*/id _callbackBlock;
	FSEventStreamRef _fsEventStream;

}

@property (copy) id callbackBlock;                              //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (assign) FSEventStreamRef fsEventStream;              //@synthesize fsEventStream=_fsEventStream - In the implementation block
+(id)scheduledObserverForPaths:(id)arg1 queue:(id)arg2 eventFlags:(unsigned)arg3 latency:(double)arg4 callBack:(/*^block*/id)arg5 ;
+(id)scheduledObserverForPaths:(id)arg1 queue:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)callbackBlock;
-(id)initWithPaths:(id)arg1 onQueue:(id)arg2 eventFlags:(unsigned)arg3 latency:(double)arg4 ;
-(void)setCallbackBlock:(id)arg1 ;
-(void)setFsEventStream:(FSEventStreamRef)arg1 ;
-(FSEventStreamRef)fsEventStream;
@end

