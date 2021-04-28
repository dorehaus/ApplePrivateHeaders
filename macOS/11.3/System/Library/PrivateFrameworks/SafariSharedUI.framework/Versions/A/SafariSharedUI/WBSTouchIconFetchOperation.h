/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSWebViewMetadataFetchOperation.h>
#import <libobjc.A.dylib/WBSTouchIconObserver.h>

@class _WKRemoteObjectInterface, NSTimer, NSArray, NSSet, NSString;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {

	_WKRemoteObjectInterface* _touchIconObserverInterface;
	NSTimer* _loadingTimeoutTimer;
	NSArray* _pendingTouchIconURLs;
	NSSet* _touchIconURLs;
	long long _state;
	char _allowFetchingOverCellularNetwork;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)completionHandler;
-(void)resetState;
-(id)initWithRequest:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)webViewConfiguration;
-(void)loadRequest;
-(void)didCompleteWithResult:(id)arg1 ;
-(void)clearWebView;
-(void)didCreateWebView;
-(void)willClearWebView;
-(void)didFailFetch;
-(void)startOffscreenFetching;
-(id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_scheduleTimeoutWithTimeInterval:(double)arg1 ;
-(void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3 ;
-(void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)_setUpRemoteObjectProxies;
-(void)_tearDownRemoteObjectProxies;
-(void)_downloadPendingTouchIconURLs;
@end

