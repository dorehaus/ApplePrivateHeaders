/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRItemNotificationReceiving.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSURL, brc_task_tracker, BRCNotificationPipe, NSString;

@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass> {

	BRCAccountSession* _session;
	unsigned long long _section;
	NSURL* _url;
	brc_task_tracker* _tracker;
	BRCNotificationPipe* _pipe;
	char _isFinished;
	/*^block*/id _evictionCompletionBlock;

}

@property (copy) id evictionCompletionBlock;                        //@synthesize evictionCompletionBlock=_evictionCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)invalidate;
-(void)cancel;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)receiveProgressUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEvictionCompletionBlock:(id)arg1 ;
-(id)evictionCompletionBlock;
-(char)shouldRetryForError:(id)arg1 ;
-(id)initWithSession:(id)arg1 url:(id)arg2 ;
@end
