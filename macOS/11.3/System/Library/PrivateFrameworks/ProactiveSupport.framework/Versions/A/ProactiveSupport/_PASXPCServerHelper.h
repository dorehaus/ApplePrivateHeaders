/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASXPCServerHelper : NSObject
+(char)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(/*^block*/id)arg6 setupClientProxy:(/*^block*/id)arg7 interruptionHandler:(/*^block*/id)arg8 invalidationHandler:(/*^block*/id)arg9 logHandle:(id)arg10 ;
+(char)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3 ;
+(char)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 ;
+(char)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(char)arg5 ;
@end
