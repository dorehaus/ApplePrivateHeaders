/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AVCallbackContextRegistry : NSObject {

	NSMutableDictionary* _contextsForTokens;
	unsigned long long _currentToken;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(void)initialize;
+(id)sharedCallbackContextRegistry;
-(void)dealloc;
-(id)init;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
@end

