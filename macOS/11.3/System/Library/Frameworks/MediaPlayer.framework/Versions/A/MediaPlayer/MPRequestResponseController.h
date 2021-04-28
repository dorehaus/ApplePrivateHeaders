/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRequestCancellationToken, OS_dispatch_source, MPRequestResponseControllerDelegate, OS_dispatch_queue;
@class NSObject, NSError;

@interface MPRequestResponseController : NSObject {

	long long _numberOfObservers;
	long long _requestRevision;
	char _shouldAutomaticallyLoad;
	char _needsReload;
	id<MPRequestCancellationToken> _cancelToken;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSError* _lastError;
	id _pendingResponse;
	unsigned long long _stateHandle;
	id _request;
	id _response;
	id<MPRequestResponseControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                          //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id response;                                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MPRequestResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<MPRequestResponseControllerDelegate>)delegate;
-(void)setDelegate:(id<MPRequestResponseControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)request;
-(id)response;
-(void)setResponse:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)reloadIfNeeded;
-(id)_onQueue_stateDictionary;
-(void)beginAutomaticResponseLoading;
-(void)endAutomaticResponseLoading;
-(void)setNeedsReload;
-(void)setNeedsReloadForSignificantRequestChange;
-(void)_responseDidInvalidate:(id)arg1 ;
-(void)_onQueue_scheduleRetryAfterInterval:(double)arg1 ;
-(void)_onQueue_reloadIfNeeded;
@end

