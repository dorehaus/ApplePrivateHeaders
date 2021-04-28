/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/Versions/A/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RCMutexLock;

@interface RCOnce : NSObject {

	char _finished;
	RCMutexLock* _lock;

}

@property (assign,nonatomic) char finished;                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) RCMutexLock * lock;              //@synthesize lock=_lock - In the implementation block
-(id)init;
-(RCMutexLock *)lock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)setFinished:(char)arg1 ;
-(char)finished;
-(char)trigger;
-(void)setLock:(RCMutexLock *)arg1 ;
-(char)hasBeenTriggered;
-(void)executeOnce:(/*^block*/id)arg1 ;
@end

