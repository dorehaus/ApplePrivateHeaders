/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ICNotesImporterClient : NSObject {

	NSXPCConnection* _connectionToService;
	NSObject*<OS_dispatch_queue> _requestCountQueue;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestCountQueue;              //@synthesize requestCountQueue=_requestCountQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                             //@synthesize requestCount=_requestCount - In the implementation block
-(id)init;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)requestCount;
-(void)setRequestCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(NSObject*<OS_dispatch_queue>)requestCountQueue;
-(void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)parseTitleFromHTMLString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cleanupArchiveId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

