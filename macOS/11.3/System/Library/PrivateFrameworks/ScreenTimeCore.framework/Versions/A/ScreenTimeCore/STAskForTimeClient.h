/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STAskForTimeInterface.h>

@class NSXPCConnection, NSString;

@interface STAskForTimeClient : NSObject <STAskForTimeInterface> {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)sendAskForTimeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)approveExceptionForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)_synchronousProxyWithHandler:(/*^block*/id)arg1 ;
@end

