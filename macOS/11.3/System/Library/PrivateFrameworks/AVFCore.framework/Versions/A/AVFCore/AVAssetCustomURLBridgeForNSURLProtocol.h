/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSMutableDictionary, NSObject;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {

	NSMutableDictionary* _requestIDToDownload;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(void)dealloc;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_cancelRequestID:(unsigned long long)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_didFinish:(id)arg1 error:(CFErrorRef)arg2 ;
-(char)_willSendRequest:(id)arg1 request:(CFURLRequestRef)arg2 redirectionResponse:(CFURLResponseRef)arg3 ;
-(void)_didReceiveResponse:(id)arg1 response:(CFURLResponseRef)arg2 ;
-(void)_didReceiveData:(id)arg1 data:(CFDataRef)arg2 ;
@end

