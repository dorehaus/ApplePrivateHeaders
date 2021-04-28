/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSData;

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession {

	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
-(NSData *)responseData;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(id)initWithService:(id)arg1 responseData:(id)arg2 ;
@end

