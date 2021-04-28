/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, AKAppleIDSession, NSString, NSObject;

@interface iCloudRequester : NSOperation <NSURLConnectionDelegate> {

	NSMutableURLRequest* _request;
	NSURLConnection* _urlConnection;
	/*^block*/id _handler;
	NSMutableData* _data;
	NSHTTPURLResponse* _httpResponse;
	char _isExecuting;
	char _isFinished;
	char _canceled;
	AKAppleIDSession* _appleIDSession;
	NSString* _accountID;
	char _shouldRetry;
	char _isCanceled;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (assign,getter=isExecuting,nonatomic) char isExecuting;                    //@synthesize isExecuting=_isExecuting - In the implementation block
@property (getter=isFinished) char finished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (getter=isCanceled) char canceled;                                         //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                       //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)cancel;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)setIsExecuting:(char)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(char)isCanceled;
-(void)setCanceled:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_callHandler;
-(void)_kickOffRequest:(id)arg1 ;
-(void)__unsafe_callHandler;
-(id)initWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 signForAccountID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)generateiCloudRequestHeadersForAccountID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
