/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol EWSExchangeServiceBindingDelegate;
@class NSMutableDictionary, NSMutableSet, NSURL, NSMutableArray, NSDate, EWSServerVersionInfo, NSURLSession, ACAccount, NSString;

@interface EWSExchangeServiceBinding : NSObject <NSURLSessionDataDelegate> {

	NSMutableDictionary* _sentCredentials;
	NSMutableSet* _tasksWithSkippedInsecureProtectionSpaces;
	NSMutableDictionary* _requestsByTask;
	id _validityLock;
	char _isValid;
	NSURL* _preferredURL;
	NSMutableSet* _attemptedURLs;
	NSMutableArray* _frozenTasks;
	NSDate* _unfreezeDate;
	NSMutableArray* _pendingOAuthTasks;
	NSDate* _tokenRefreshDate;
	char _logsActivity;
	char _isRefreshingOAuthToken;
	EWSServerVersionInfo* _serverInfo;
	NSURL* _URL;
	NSURLSession* _session;
	ACAccount* _account;
	id<EWSExchangeServiceBindingDelegate> _delegate;

}

@property (nonatomic,readonly) NSURLSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) id<EWSExchangeServiceBindingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) EWSServerVersionInfo * serverInfo;                                              //@synthesize serverInfo=_serverInfo - In the implementation block
@property (readonly) char isValid; 
@property (assign) char logsActivity;                                                              //@synthesize logsActivity=_logsActivity - In the implementation block
@property (readonly) char isRefreshingOAuthToken;                                                  //@synthesize isRefreshingOAuthToken=_isRefreshingOAuthToken - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                        //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)log;
+(id)protectionSpaceForURL:(id)arg1 ;
+(id)testMessage;
+(char)shouldAutodiscoverUponResponseCode:(long long)arg1 ;
-(id)init;
-(char)isValid;
-(id<EWSExchangeServiceBindingDelegate>)delegate;
-(NSURL *)URL;
-(void)cancel;
-(void)sendMessage:(id)arg1 ;
-(NSURLSession *)session;
-(ACAccount *)account;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setServerInfo:(EWSServerVersionInfo *)arg1 ;
-(EWSServerVersionInfo *)serverInfo;
-(void)finishMessagesAndInvalidate;
-(id)newStreamingSubscription;
-(id)newTaskWithRequest:(id)arg1 ;
-(void)setLogsActivity:(char)arg1 ;
-(char)logsActivity;
-(void)_exchangeServiceBindingCommonInitWithAccount:(id)arg1 ;
-(id)_errorFromTask:(id)arg1 ;
-(void)_clearRequestIfNeeded:(id)arg1 ;
-(char)_shouldFallbackFromError:(id)arg1 ;
-(void)_renewOAuthTokenWithTask:(id)arg1 ;
-(char)isRefreshingOAuthToken;
-(void)_sendRequestForBindingTask:(id)arg1 ;
-(id)cachedAccountStore;
-(void)_continuePendingOAuthTasks;
-(void)_continueSendingRequestForBindingTask:(id)arg1 ;
-(id)_dataTaskForBindingTask:(id)arg1 ;
-(void)_tryUnfreeze;
-(id)initWithURL:(id)arg1 account:(id)arg2 delegate:(id)arg3 ;
-(id)sendSynchronousMessage:(id)arg1 error:(id*)arg2 ;
-(id)newTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)newTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newPullSubscription;
-(void)_backOffForTime:(double)arg1 ;
-(void)_cancelBindingTask:(id)arg1 ;
-(id)_exchangeServiceErrorFromSOAPError:(id)arg1 dataTask:(id)arg2 ;
@end
