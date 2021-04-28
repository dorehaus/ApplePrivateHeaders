/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OITSUAssertionHandler : NSObject
+(void)simulateCrashWithMessage:(id)arg1 ;
+(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(char)arg4 description:(const char*)arg5 ;
+(void)logBacktraceThrottled;
+(id)p_performBlockIgnoringAssertions:(/*^block*/id)arg1 onlyFatal:(char)arg2 ;
+(void)logBacktraceWithCallStackSymbols:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
+(id)performBlockIgnoringFatalAssertions:(/*^block*/id)arg1 ;
+(int)_atomicIncrementAssertCount;
+(void)logBacktrace;
@end

