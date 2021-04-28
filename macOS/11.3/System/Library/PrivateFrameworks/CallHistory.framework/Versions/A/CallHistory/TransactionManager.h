/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Versions/A/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;
	id _syncHelperReadyNotificationRef;
	NSMutableArray* _queuedTransactions;

}
+(id)instance;
-(void)dealloc;
-(id)init;
-(void)appendTransactions:(id)arg1 ;
-(void)createXpcConnection;
-(void)createXpcConnection_sync;
-(void)setupConnectionHandlers_sync;
-(void)appendTransactions_sync:(id)arg1 ;
@end
