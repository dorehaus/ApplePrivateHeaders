/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTaskServerDelegate <NSObject>
@optional
-(char)server:(id)arg1 clientSession:(id)arg2 shouldConnectWithTransport:(id)arg3;
-(void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 enqueueOperation:(id)arg3;
-(void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;
-(void)serverDidInvalidate:(id)arg1;

@required
-(id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;

@end

