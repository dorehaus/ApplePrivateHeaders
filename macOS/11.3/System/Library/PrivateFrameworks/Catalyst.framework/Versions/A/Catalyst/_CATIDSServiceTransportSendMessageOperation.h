/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATIDSServiceTransport, CATIDSServiceConnection, CATMessage;

@interface _CATIDSServiceTransportSendMessageOperation : CATOperation {

	CATIDSServiceTransport* mTransport;
	CATIDSServiceConnection* mConnection;
	CATMessage* mMessage;

}
-(void)cancel;
-(void)main;
-(char)isAsynchronous;
-(void)sendData;
-(id)initWithConnection:(id)arg1 message:(id)arg2 ;
-(void)didSendDataWithError:(id)arg1 ;
@end

