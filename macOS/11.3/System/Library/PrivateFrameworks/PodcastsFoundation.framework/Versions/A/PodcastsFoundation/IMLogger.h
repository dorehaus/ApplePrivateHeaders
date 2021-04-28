/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileHandle, NSRegularExpression;

@interface IMLogger : NSObject {

	NSString* _auxPath;
	NSFileHandle* _fileHandle;
	NSString* _filter;
	NSString* _runtimeOverride;
	int _pid;
	NSString* _procName;
	char _logTofileOnly;
	NSRegularExpression* _runtimeOverrideRegex;

}

@property (nonatomic,copy) NSString * filter;              //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * runtimeOverride;               //@synthesize runtimeOverride=_runtimeOverride - In the implementation block
+(id)sharedLogger;
+(id)rolledLogPrefix;
+(void)rollLogPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
+(void)deleteRolledLogsForLogPath:(id)arg1 maxAge:(double)arg2 ;
-(id)init;
-(NSString *)filter;
-(void)setFilter:(NSString *)arg1 ;
-(void)logString:(id)arg1 ;
-(void)setRuntimeOverride:(NSString *)arg1 ;
-(void)logFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
-(NSString *)runtimeOverride;
-(void)setAuxPath:(id)arg1 ;
-(id)auxPath;
-(void)setLogToFileOnly:(char)arg1 ;
-(char)logTofileOnly;
-(char)shouldOverrideCondition:(id)arg1 file:(id)arg2 ;
-(void)logFunction:(const char*)arg1 format:(id)arg2 ;
-(void)addRuntimeOverride:(id)arg1 ;
-(void)removeRuntimeOverride:(id)arg1 ;
@end
