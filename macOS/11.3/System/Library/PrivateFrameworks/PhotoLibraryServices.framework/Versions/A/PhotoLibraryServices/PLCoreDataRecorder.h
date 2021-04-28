/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLCoreDataRecorder : NSObject
+(void)reset;
+(char)stopRecording;
+(char)isRecording;
+(char)startRecordingForDbWithFilename:(id)arg1 limitToMarkedThreads:(char)arg2 includeBindVariables:(char)arg3 includeIOMetrics:(char)arg4 entryDecorator:(/*^block*/id)arg5 entriesAvailableHandler:(/*^block*/id)arg6 ;
+(id)recordedEntriesAndReset;
+(id)_queryPlanFromSQL:(const char*)arg1 usingDb:(sqlite3Ref)arg2 ;
+(char)_isCorrectDB:(sqlite3Ref)arg1 ;
+(sqlite3Ref)_dbHandleFromConnection:(id)arg1 ;
+(char)_installConnectionSwizzle;
+(void)_bindVariablesSubEntryForStatement:(id)arg1 outBindVariables:(id*)arg2 outBindIntArrays:(id*)arg3 ;
+(id)_recordedStatementsAndReset:(char)arg1 ;
+(char)_installRecorder;
+(void)_recordExecutedStatementSQL:(id)arg1 queryPlan:(id)arg2 bindVariables:(id)arg3 bindIntArrays:(id)arg4 db:(sqlite3Ref)arg5 pageHitCountBeforeExecution:(int)arg6 pageMissCountBeforeExecution:(int)arg7 ;
+(id)recordedEntriesDescription;
+(id)recordedEntries;
@end

