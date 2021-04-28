/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDCommandRequest, NSMutableArray;

@interface WDSessionQueueState : NSObject {

	char _acceptsRequests;
	WDCommandRequest* _currentRequest;
	NSMutableArray* _queuedRequests;

}

@property (nonatomic,readonly) WDCommandRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedRequests;                //@synthesize queuedRequests=_queuedRequests - In the implementation block
@property (assign,nonatomic) char acceptsRequests;                             //@synthesize acceptsRequests=_acceptsRequests - In the implementation block
-(id)init;
-(WDCommandRequest *)currentRequest;
-(void)enqueueRequest:(id)arg1 ;
-(void)setAcceptsRequests:(char)arg1 ;
-(void)finishCurrentRequest;
-(id)dequeueNextRequest;
-(NSMutableArray *)queuedRequests;
-(char)acceptsRequests;
@end

