/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConditionInducer.framework/Versions/A/ConditionInducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSMutableArray, NSFileHandle;

@interface COConditionTask : NSObject {

	char _running;
	char _slowTimeout;
	int _endStatus;
	int _processIdentifier;
	NSObject*<OS_dispatch_semaphore> _termination_sem;
	NSString* _launchPath;
	NSArray* _arguments;
	NSMutableArray* _taskFileHandleArray;
	NSString* _stdoutFname;
	NSString* _stderrFname;
	NSString* _stdinFname;
	NSFileHandle* _stdinFileHandle;
	NSFileHandle* _stdoutFileHandle;
	NSFileHandle* _stderrFileHandle;
	double _executionTime;
	NSObject*<OS_dispatch_queue> _taskQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> termination_sem;              //@synthesize termination_sem=_termination_sem - In the implementation block
@property (nonatomic,copy) NSString * launchPath;                                           //@synthesize launchPath=_launchPath - In the implementation block
@property (nonatomic,retain) NSArray * arguments;                                           //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain) NSMutableArray * taskFileHandleArray;                          //@synthesize taskFileHandleArray=_taskFileHandleArray - In the implementation block
@property (nonatomic,retain) NSString * stdoutFname;                                        //@synthesize stdoutFname=_stdoutFname - In the implementation block
@property (nonatomic,retain) NSString * stderrFname;                                        //@synthesize stderrFname=_stderrFname - In the implementation block
@property (nonatomic,retain) NSString * stdinFname;                                         //@synthesize stdinFname=_stdinFname - In the implementation block
@property (nonatomic,retain) NSFileHandle * stdinFileHandle;                                //@synthesize stdinFileHandle=_stdinFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * stdoutFileHandle;                               //@synthesize stdoutFileHandle=_stdoutFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * stderrFileHandle;                               //@synthesize stderrFileHandle=_stderrFileHandle - In the implementation block
@property (assign,nonatomic) int processIdentifier;                                         //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) double executionTime;                                          //@synthesize executionTime=_executionTime - In the implementation block
@property (assign,nonatomic) int endStatus;                                                 //@synthesize endStatus=_endStatus - In the implementation block
@property (assign) char running;                                                            //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) char slowTimeout;                                              //@synthesize slowTimeout=_slowTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskQueue;                        //@synthesize taskQueue=_taskQueue - In the implementation block
-(id)description;
-(char)resume;
-(int)processIdentifier;
-(void)setArguments:(NSArray *)arg1 ;
-(char)start;
-(NSArray *)arguments;
-(char)suspend;
-(void)stop;
-(NSString *)launchPath;
-(void)setLaunchPath:(NSString *)arg1 ;
-(void)interrupt;
-(void)terminate;
-(char)running;
-(void)setProcessIdentifier:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)taskQueue;
-(void)setRunning:(char)arg1 ;
-(double)executionTime;
-(void)setTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExecutionTime:(double)arg1 ;
-(void)setEndStatus:(int)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)termination_sem;
-(NSMutableArray *)taskFileHandleArray;
-(void)waitForExitInformation:(int)arg1 ;
-(char)slowTimeout;
-(int)signalRunningTask:(int)arg1 ;
-(NSString *)stdoutFname;
-(NSString *)stderrFname;
-(char)launchTask:(id*)arg1 ;
-(void)stopTask;
-(id)initWithCommand:(id)arg1 arguments:(id)arg2 ;
-(char)waitForTaskWithTimeout:(unsigned)arg1 ;
-(id)stdoutFromResults;
-(id)stderrFromResults;
-(int)endStatus;
-(void)setTermination_sem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setTaskFileHandleArray:(NSMutableArray *)arg1 ;
-(void)setStdoutFname:(NSString *)arg1 ;
-(void)setStderrFname:(NSString *)arg1 ;
-(NSString *)stdinFname;
-(void)setStdinFname:(NSString *)arg1 ;
-(NSFileHandle *)stdinFileHandle;
-(void)setStdinFileHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)stdoutFileHandle;
-(void)setStdoutFileHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)stderrFileHandle;
-(void)setStderrFileHandle:(NSFileHandle *)arg1 ;
-(void)setSlowTimeout:(char)arg1 ;
@end

