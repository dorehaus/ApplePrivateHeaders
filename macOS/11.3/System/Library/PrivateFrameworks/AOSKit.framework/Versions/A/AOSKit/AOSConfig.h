/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AOSConfig : NSObject
+(id)urlWithAppleID:(id)arg1 DSID:(id)arg2 andKey:(id)arg3 ;
+(id)AOSKGetAccountSettingsURL:(id)arg1 forLoggedInUser:(id)arg2 andCurrentClient:(id)arg3 ;
+(char)AOSKGetValidationInfo;
+(id)AOSKClientInfo;
+(char)doUseCFURLConnection;
+(id)mailAppleID;
+(id)u13HeaderName;
+(id)accountsDirectory;
+(char)isRunningAsAgent;
+(double)alertWindowSeconds;
+(char)isDefaultAlertWindowOverridden;
+(void)setIsRunningAsAgent:(char)arg1 ;
+(char)didDownloadConfig;
+(void)initialize;
+(id)sharedInstance;
+(id)urlForKey:(id)arg1 ;
+(id)apsEnvironment;
+(int)logLevel;
+(void)setPrefsValue:(id)arg1 forKey:(id)arg2 withIdentifier:(id)arg3 ;
+(char)isClientValidationEnabled;
+(char)isURLValidationEnabled;
+(id)prefsValueForKey:(id)arg1 withIdentifier:(id)arg2 ;
-(void)listenForSystemEvents:(void*)arg1 ;
-(id)init;
-(void)clearCaches;
-(id)setupInfo;
@end

