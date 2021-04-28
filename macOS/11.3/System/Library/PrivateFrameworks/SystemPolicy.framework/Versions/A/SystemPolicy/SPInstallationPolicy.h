/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCInterface, NSXPCConnection;

@interface SPInstallationPolicy : NSObject {

	NSXPCInterface* _interface;
	NSXPCConnection* _connection;
	char _requireDaemon;

}
-(char)trustPackagePayload:(id)arg1 withDestinationTarget:(id)arg2 withUserConsent:(char)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)init;
-(char)canInstallPackage:(id)arg1 withUserConsent:(char)arg2 withHash:(id)arg3 evaluateOnly:(char)arg4 synchronousPrompt:(char)arg5 error:(id*)arg6 ;
@end
