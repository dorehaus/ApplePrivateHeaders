/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/Versions/A/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, SOKerberosExtensionData, SOKerberosExtensionUserData, NSUUID, NSData, SOSiteCode, NSDate, NSObject, SONetworkIdentity, ASAuthorizationProviderExtensionAuthorizationRequest, SORealmSettingManager, SOKerberosRealmSettings;

@interface SOKerberosContext : NSObject {

	char _userNameIsReadOnly;
	char _returnCredentialOnly;
	char _credsCameFromKeychain;
	char _requestCancelled;
	char _attemptedToGetCredsFromKeychain;
	char _forceLoginViewController;
	char _isManagedApp;
	char _smartCardNeedsInsert;
	char _requestStarted;
	NSString* _userPrincipalName;
	NSString* _userName;
	NSString* _realm;
	SOKerberosExtensionData* _extensionData;
	SOKerberosExtensionUserData* _extensionUserData;
	NSString* _hostName;
	NSString* _servicePrincipalName;
	NSString* _serviceName;
	NSString* _password;
	NSString* _changedPassword;
	NSUUID* _credentialUUID;
	NSData* _certificateSerialNumber;
	NSData* _certificateIssuer;
	NSString* _certificateTokenID;
	SOSiteCode* _siteCode;
	NSString* _cacheName;
	NSString* _callerBundleIdentifier;
	NSString* _callerLocalizedName;
	NSDate* _loginTimeStamp;
	NSObject*<OS_dispatch_group> _siteCodeGroup;
	SONetworkIdentity* _networkIdentity;
	NSData* _auditToken;
	ASAuthorizationProviderExtensionAuthorizationRequest* _authorizationRequest;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	SORealmSettingManager* _settingsManager;

}

@property (nonatomic,retain) ASAuthorizationProviderExtensionAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> dispatchGroup;                                                         //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (nonatomic,retain) SORealmSettingManager * settingsManager;                                                  //@synthesize settingsManager=_settingsManager - In the implementation block
@property (assign,nonatomic) char requestStarted;                                                                      //@synthesize requestStarted=_requestStarted - In the implementation block
@property (assign,nonatomic) char requestCancelled;                                                                    //@synthesize requestCancelled=_requestCancelled - In the implementation block
@property (nonatomic,retain) NSString * realm;                                                                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) SOKerberosExtensionData * extensionData;                                                  //@synthesize extensionData=_extensionData - In the implementation block
@property (nonatomic,retain) SOKerberosExtensionUserData * extensionUserData;                                          //@synthesize extensionUserData=_extensionUserData - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                                                      //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSString * servicePrincipalName;                                                          //@synthesize servicePrincipalName=_servicePrincipalName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                      //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * changedPassword;                                                               //@synthesize changedPassword=_changedPassword - In the implementation block
@property (assign,nonatomic) char userNameIsReadOnly;                                                                  //@synthesize userNameIsReadOnly=_userNameIsReadOnly - In the implementation block
@property (nonatomic,retain) NSString * userPrincipalName;                                                             //@synthesize userPrincipalName=_userPrincipalName - In the implementation block
@property (nonatomic,retain) NSString * userName;                                                                      //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSUUID * credentialUUID;                                                                  //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;                                                         //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSData * certificateIssuer;                                                               //@synthesize certificateIssuer=_certificateIssuer - In the implementation block
@property (nonatomic,retain) NSString * certificateTokenID;                                                            //@synthesize certificateTokenID=_certificateTokenID - In the implementation block
@property (nonatomic,retain) SOSiteCode * siteCode;                                                                    //@synthesize siteCode=_siteCode - In the implementation block
@property (nonatomic,retain) NSString * cacheName;                                                                     //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) char returnCredentialOnly;                                                                //@synthesize returnCredentialOnly=_returnCredentialOnly - In the implementation block
@property (nonatomic,readonly) SOKerberosRealmSettings * currentSettings; 
@property (nonatomic,retain) NSString * callerBundleIdentifier;                                                        //@synthesize callerBundleIdentifier=_callerBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * callerLocalizedName;                                                           //@synthesize callerLocalizedName=_callerLocalizedName - In the implementation block
@property (assign,nonatomic) char credsCameFromKeychain;                                                               //@synthesize credsCameFromKeychain=_credsCameFromKeychain - In the implementation block
@property (assign,nonatomic) char attemptedToGetCredsFromKeychain;                                                     //@synthesize attemptedToGetCredsFromKeychain=_attemptedToGetCredsFromKeychain - In the implementation block
@property (assign,nonatomic) char forceLoginViewController;                                                            //@synthesize forceLoginViewController=_forceLoginViewController - In the implementation block
@property (nonatomic,retain) NSDate * loginTimeStamp;                                                                  //@synthesize loginTimeStamp=_loginTimeStamp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> siteCodeGroup;                                               //@synthesize siteCodeGroup=_siteCodeGroup - In the implementation block
@property (nonatomic,retain) SONetworkIdentity * networkIdentity;                                                      //@synthesize networkIdentity=_networkIdentity - In the implementation block
@property (nonatomic,readonly) NSData * auditToken;                                                                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) char isManagedApp;                                                                      //@synthesize isManagedApp=_isManagedApp - In the implementation block
@property (assign,nonatomic) char smartCardNeedsInsert;                                                                //@synthesize smartCardNeedsInsert=_smartCardNeedsInsert - In the implementation block
-(NSString *)password;
-(NSData *)auditToken;
-(NSString *)hostName;
-(NSString *)userName;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setUserName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)setExtensionData:(SOKerberosExtensionData *)arg1 ;
-(SOKerberosExtensionData *)extensionData;
-(NSString *)callerBundleIdentifier;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(void)completeRequestWithError:(id)arg1 ;
-(void)cancelRequest:(char)arg1 ;
-(void)cancelRequest;
-(void)startRequest;
-(void)waitForCompletion;
-(ASAuthorizationProviderExtensionAuthorizationRequest *)authorizationRequest;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)completeRequest;
-(SOKerberosRealmSettings *)currentSettings;
-(void)setHostName:(NSString *)arg1 ;
-(SOSiteCode *)siteCode;
-(void)setSiteCode:(SOSiteCode *)arg1 ;
-(NSString *)userPrincipalName;
-(NSUUID *)credentialUUID;
-(NSString *)cacheName;
-(void)setUserPrincipalName:(NSString *)arg1 ;
-(void)setCredentialUUID:(NSUUID *)arg1 ;
-(void)setCacheName:(NSString *)arg1 ;
-(char)requestStarted;
-(void)setRequestStarted:(char)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setRequestCancelled:(char)arg1 ;
-(void)finishRequest;
-(void)completeRequestWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(SORealmSettingManager *)settingsManager;
-(id)initWithRequest:(id)arg1 extensionData:(id)arg2 settingsManager:(id)arg3 ;
-(void)setUserPrincipalNameAfterAuth:(id)arg1 ;
-(void)completeRequestWithHeaders:(id)arg1 ;
-(void)completeRequestWithHTTPResponseHeaders:(id)arg1 ;
-(void)completeRequestWithDoNotHandle;
-(SOKerberosExtensionUserData *)extensionUserData;
-(void)setExtensionUserData:(SOKerberosExtensionUserData *)arg1 ;
-(NSString *)servicePrincipalName;
-(void)setServicePrincipalName:(NSString *)arg1 ;
-(NSString *)changedPassword;
-(void)setChangedPassword:(NSString *)arg1 ;
-(char)userNameIsReadOnly;
-(void)setUserNameIsReadOnly:(char)arg1 ;
-(NSData *)certificateSerialNumber;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(NSData *)certificateIssuer;
-(void)setCertificateIssuer:(NSData *)arg1 ;
-(NSString *)certificateTokenID;
-(void)setCertificateTokenID:(NSString *)arg1 ;
-(char)returnCredentialOnly;
-(void)setReturnCredentialOnly:(char)arg1 ;
-(NSString *)callerLocalizedName;
-(void)setCallerLocalizedName:(NSString *)arg1 ;
-(char)credsCameFromKeychain;
-(void)setCredsCameFromKeychain:(char)arg1 ;
-(char)requestCancelled;
-(char)attemptedToGetCredsFromKeychain;
-(void)setAttemptedToGetCredsFromKeychain:(char)arg1 ;
-(char)forceLoginViewController;
-(void)setForceLoginViewController:(char)arg1 ;
-(NSDate *)loginTimeStamp;
-(void)setLoginTimeStamp:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_group>)siteCodeGroup;
-(void)setSiteCodeGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(SONetworkIdentity *)networkIdentity;
-(void)setNetworkIdentity:(SONetworkIdentity *)arg1 ;
-(char)isManagedApp;
-(char)smartCardNeedsInsert;
-(void)setSmartCardNeedsInsert:(char)arg1 ;
-(void)setAuthorizationRequest:(ASAuthorizationProviderExtensionAuthorizationRequest *)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSettingsManager:(SORealmSettingManager *)arg1 ;
@end

