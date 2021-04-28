/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WDXPCServiceClient.h>

@class NSXPCConnection;

@interface WDSafariDriverXPCClient : NSObject <WDXPCServiceClient> {

	NSXPCConnection* _webDriverServiceConnection;

}

@property (nonatomic,retain) NSXPCConnection * webDriverServiceConnection;              //@synthesize webDriverServiceConnection=_webDriverServiceConnection - In the implementation block
-(/*^block*/id)_defaultErrorHandler;
-(void)serverStarted;
-(void)serverStopped;
-(void)launchApplication:(id)arg1 withArguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAttributesOfFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentsOfFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runServerOnPort:(long long)arg1 captureDiagnostics:(char)arg2 ;
-(void)stopServerForTermination;
-(NSXPCConnection *)webDriverServiceConnection;
-(void)setWebDriverServiceConnection:(NSXPCConnection *)arg1 ;
@end

