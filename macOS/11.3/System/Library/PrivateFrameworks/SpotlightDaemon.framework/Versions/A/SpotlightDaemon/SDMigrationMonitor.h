/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SDEventHandlerProvider.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider> {

	char _unlocked;
	char _foundExtensions;
	char _finishedDataMigration;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char unlocked;                                   //@synthesize unlocked=_unlocked - In the implementation block
@property (assign,nonatomic) char foundExtensions;                            //@synthesize foundExtensions=_foundExtensions - In the implementation block
@property (assign,nonatomic) char finishedDataMigration;                      //@synthesize finishedDataMigration=_finishedDataMigration - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)unlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(char)unlocked;
-(void)setUnlocked:(char)arg1 ;
-(void)_didFindExtensions:(id)arg1 ;
-(void)_finishMigration;
-(void)registerHandlerWithEventMonitor:(id)arg1 ;
-(void)suspendMigrationQueue;
-(void)resumeMigrationQueue;
-(void)monitorDataMigrationWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)foundExtensions;
-(void)setFoundExtensions:(char)arg1 ;
-(char)finishedDataMigration;
-(void)setFinishedDataMigration:(char)arg1 ;
@end

