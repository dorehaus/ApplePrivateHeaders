/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationProfilesUI.framework/Versions/A/ConfigurationProfilesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ConfigurationProfilesUI/ConfigurationProfilesUI-Structs.h>
@class CPUI_EnrollmentHostWindowInfo, CPUI_ProgressWindowController, NSString, NSDictionary, NSData, CloudConfigClassicAuthWindowController;

@interface CloudConfigClassicEnrollmentManager : NSObject {

	BOOL fSyntheticInputDetected;
	/*^block*/id _completionHandler;
	CPUI_EnrollmentHostWindowInfo* _hostWindowInfo;
	CPUI_ProgressWindowController* _progress;
	NSString* _origHostWindowProgressText;
	NSString* _userGUID;
	NSDictionary* _authInfo;
	NSDictionary* _cloudConfig;
	NSString* _credentialsPrompt;
	NSData* _profileDataToInstall;
	CloudConfigClassicAuthWindowController* _authController;

}

@property (copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) CPUI_EnrollmentHostWindowInfo * hostWindowInfo;                       //@synthesize hostWindowInfo=_hostWindowInfo - In the implementation block
@property (retain) CPUI_ProgressWindowController * progress;                             //@synthesize progress=_progress - In the implementation block
@property (retain) NSString * origHostWindowProgressText;                                //@synthesize origHostWindowProgressText=_origHostWindowProgressText - In the implementation block
@property (retain) NSString * userGUID;                                                  //@synthesize userGUID=_userGUID - In the implementation block
@property (retain) NSDictionary * authInfo;                                              //@synthesize authInfo=_authInfo - In the implementation block
@property (retain) NSDictionary * cloudConfig;                                           //@synthesize cloudConfig=_cloudConfig - In the implementation block
@property (retain) NSString * credentialsPrompt;                                         //@synthesize credentialsPrompt=_credentialsPrompt - In the implementation block
@property (retain) NSData * profileDataToInstall;                                        //@synthesize profileDataToInstall=_profileDataToInstall - In the implementation block
@property (retain) CloudConfigClassicAuthWindowController * authController;              //@synthesize authController=_authController - In the implementation block
-(void)dealloc;
-(id)init;
-(CPUI_ProgressWindowController *)progress;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProgress:(CPUI_ProgressWindowController *)arg1 ;
-(void)callCompletionHandler:(long long)arg1 error:(id)arg2 ;
-(void)showProgress;
-(CloudConfigClassicAuthWindowController *)authController;
-(void)setAuthController:(CloudConfigClassicAuthWindowController *)arg1 ;
-(NSDictionary *)authInfo;
-(void)setAuthInfo:(NSDictionary *)arg1 ;
-(CPUI_EnrollmentHostWindowInfo *)hostWindowInfo;
-(TLocalizedRsrcs*)locRsrcs;
-(BOOL)useHostWindowProgressField;
-(NSString *)origHostWindowProgressText;
-(void)setOrigHostWindowProgressText:(NSString *)arg1 ;
-(NSString *)credentialsPrompt;
-(NSDictionary *)cloudConfig;
-(void)tryDownload;
-(void)setCredentialsPrompt:(NSString *)arg1 ;
-(void)setProfileDataToInstall:(NSData *)arg1 ;
-(void)removeProgress;
-(NSData *)profileDataToInstall;
-(void)promptForAuth;
-(void)setHostWindowInfo:(CPUI_EnrollmentHostWindowInfo *)arg1 ;
-(BOOL)syntheticInputDetected;
-(void)startForWindowInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)userGUID;
-(void)setUserGUID:(NSString *)arg1 ;
-(void)setCloudConfig:(NSDictionary *)arg1 ;
@end

