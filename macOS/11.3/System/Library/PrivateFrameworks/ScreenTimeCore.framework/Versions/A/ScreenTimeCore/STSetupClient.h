/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface STSetupClient : NSObject {

	NSXPCConnection* _connection;

}

@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)_newConnection;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(id)currentConfigurationForUser:(id)arg1 error:(id*)arg2 ;
-(char)applyUpdatedConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)collectPasscodeFromUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)passcodeCollectedFromUserWithError:(id*)arg1 ;
@end

