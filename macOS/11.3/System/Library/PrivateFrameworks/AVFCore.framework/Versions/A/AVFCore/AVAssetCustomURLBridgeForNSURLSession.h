/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSURLSession, NSObject, NSString;

@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate> {

	NSMutableDictionary* _taskToRequest;
	NSURLSession* _session;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_registerRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3 ;
-(void)_unregisterRequestForDataTask:(id)arg1 ;
-(id)_lookupRequestForDataTask:(id)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char*)arg3 ;
-(int)_cancelRequestID:(unsigned long long)arg1 ;
@end

