/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSURL * executableURL; 
@property (copy) NSArray * arguments; 
@property (copy) NSDictionary * environment; 
@property (copy) NSURL * currentDirectoryURL; 
@property (retain) id standardInput; 
@property (retain) id standardOutput; 
@property (retain) id standardError; 
@property (readonly) int processIdentifier; 
@property (getter=isRunning,readonly) char running; 
@property (readonly) int terminationStatus; 
@property (readonly) long long terminationReason; 
@property (copy) id terminationHandler; 
@property (assign) long long qualityOfService; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id*)arg3 terminationHandler:(/*^block*/id)arg4 ;
-(id)init;
-(char)resume;
-(void)setQualityOfService:(long long)arg1 ;
-(int)processIdentifier;
-(NSURL *)executableURL;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(NSArray *)arguments;
-(char)suspend;
-(id)currentDirectoryPath;
-(NSDictionary *)environment;
-(long long)qualityOfService;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(id)launchPath;
-(void)setLaunchPath:(id)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(id)terminationHandler;
-(int)terminationStatus;
-(long long)terminationReason;
-(char)isRunning;
-(void)launch;
-(char)launchAndReturnError:(id*)arg1 ;
-(void)setCurrentDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)currentDirectoryURL;
-(void)setExecutableURL:(NSURL *)arg1 ;
-(void)interrupt;
-(void)terminate;
-(long long)suspendCount;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)setSpawnedProcessDisclaimed:(char)arg1 ;
-(char)isSpawnedProcessDisclaimed;
@end

