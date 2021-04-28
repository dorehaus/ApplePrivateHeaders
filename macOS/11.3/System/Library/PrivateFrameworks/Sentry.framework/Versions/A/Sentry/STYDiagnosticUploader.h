/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Versions/A/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, STYURLSessionHelper, NSMutableDictionary;

@interface STYDiagnosticUploader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	STYURLSessionHelper* _eventReportingSession;
	STYURLSessionHelper* _diagnosticUploadSession;
	NSMutableDictionary* _pendingFiles;

}

@property (nonatomic,readonly) unsigned long long pendingReportCount; 
+(id)sharedDiagnosticUploader;
+(id)_createRequestFileForReport:(id)arg1 withDiagnostic:(id)arg2 ;
-(id)init;
-(void)_loadPendingFiles;
-(void)_createSessions;
-(id)_eventReportingSession;
-(char)_addPendingDiagnosticFile:(id)arg1 ;
-(id)_diagnosticUploadSession;
-(void)_uploadDiagnostic:(id)arg1 ;
-(unsigned long long)pendingReportCount;
-(char)uploadReport:(id)arg1 withDiagnostic:(id)arg2 ;
-(void)_session:(id)arg1 task:(id)arg2 didCompleteWithResponse:(id)arg3 error:(id)arg4 ;
@end

