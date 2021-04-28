/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATIDSServiceConnectionDelegate.h>

@class CATIDSServiceConnection, NSMutableArray;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {

	CATIDSServiceConnection* mConnection;
	NSMutableArray* mReceiveQueue;
	char mIsActive;
	char mDidDelegateInvalidation;

}
-(id)initWithConnection:(id)arg1 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(void)invalidateConnection;
-(void)serviceReceiveQueue;
-(void)tryReportingInvalidation;
-(void)connection:(id)arg1 receivedData:(id)arg2 ;
-(void)connectionClosed:(id)arg1 ;
-(id)operationToSendMessage:(id)arg1 ;
@end

