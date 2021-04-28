/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Admin.framework/Versions/A/Admin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WebServerConfig : NSObject {

	NSString* _configurationDirectory;

}
+(id)sharedWebServerConfig;
+(id)sharedRemoteAdminServerConfig;
-(void)dealloc;
-(char)isWebServerRunning;
-(void)restartWebServer;
-(id)initWithConfigurationDirectory:(id)arg1 ;
-(void)stopWebServer;
-(void)startWebServer;
-(char)isValidServerName:(id)arg1 ;
-(id)webServerName;
@end

