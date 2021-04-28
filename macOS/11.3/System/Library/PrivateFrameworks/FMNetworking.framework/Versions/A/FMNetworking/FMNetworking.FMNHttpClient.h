/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/Versions/A/FMNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 bundleIdentifierFallback;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 credential;
	 urlSessionFactory;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 session;
	 sessionLock;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
@end
