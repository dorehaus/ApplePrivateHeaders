/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, AMSProcessInfo, NSURL;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _authenticationType;
	char _allowServerDialogs;
	char _canMakeAccountActive;
	char _enableAccountCreation;
	char _ignoreAccountConversion;
	char _usernameEditable;
	char _allowSecondaryCredentialSource;
	char _demoAccountSetup;
	char _ephemeral;
	char _remoteProxyAuthentication;
	NSString* _appProvidedContext;
	NSDictionary* _appProvidedData;
	NSString* _cancelButtonString;
	NSDictionary* _createAccountQueryParams;
	AMSProcessInfo* _clientInfo;
	unsigned long long _credentialSource;
	NSString* _debugReason;
	NSString* _defaultButtonString;
	NSDictionary* _HTTPHeaders;
	NSURL* _iconBundleURL;
	NSString* _logKey;
	NSString* _promptTitle;
	NSString* _proxyAppBundleID;
	NSString* _proxyAppName;
	NSString* _reason;
	NSString* _userAgent;
	NSString* _userAgentSuffix;
	NSString* _companionDeviceClientInfo;
	NSString* _companionDeviceUDID;
	long long _serviceType;
	NSString* _serviceIdentifier;

}

@property (assign) char allowSecondaryCredentialSource;                                              //@synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource - In the implementation block
@property (retain) NSString * companionDeviceClientInfo;                                             //@synthesize companionDeviceClientInfo=_companionDeviceClientInfo - In the implementation block
@property (retain) NSString * companionDeviceUDID;                                                   //@synthesize companionDeviceUDID=_companionDeviceUDID - In the implementation block
@property (getter=isDemoAccountSetup) char demoAccountSetup;                                         //@synthesize demoAccountSetup=_demoAccountSetup - In the implementation block
@property (assign) char ephemeral;                                                                   //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign) long long serviceType;                                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (getter=isRemoteProxyAuthentication,readonly) char remoteProxyAuthentication;              //@synthesize remoteProxyAuthentication=_remoteProxyAuthentication - In the implementation block
@property (retain) NSString * serviceIdentifier;                                                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign) char allowServerDialogs;                                                          //@synthesize allowServerDialogs=_allowServerDialogs - In the implementation block
@property (assign) unsigned long long authenticationType; 
@property (copy) NSString * appProvidedContext;                                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (copy) NSDictionary * appProvidedData;                                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (retain) NSString * cancelButtonString;                                                    //@synthesize cancelButtonString=_cancelButtonString - In the implementation block
@property (assign) char canMakeAccountActive;                                                        //@synthesize canMakeAccountActive=_canMakeAccountActive - In the implementation block
@property (retain) NSDictionary * createAccountQueryParams;                                          //@synthesize createAccountQueryParams=_createAccountQueryParams - In the implementation block
@property (retain) AMSProcessInfo * clientInfo;                                                      //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign) unsigned long long credentialSource;                                              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (retain) NSString * debugReason;                                                           //@synthesize debugReason=_debugReason - In the implementation block
@property (retain) NSString * defaultButtonString;                                                   //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign) char enableAccountCreation;                                                       //@synthesize enableAccountCreation=_enableAccountCreation - In the implementation block
@property (retain) NSDictionary * HTTPHeaders;                                                       //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (retain) NSURL * iconBundleURL;                                                            //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (assign) char ignoreAccountConversion;                                                     //@synthesize ignoreAccountConversion=_ignoreAccountConversion - In the implementation block
@property (retain) NSString * logKey;                                                                //@synthesize logKey=_logKey - In the implementation block
@property (retain) NSString * promptTitle;                                                           //@synthesize promptTitle=_promptTitle - In the implementation block
@property (retain) NSString * proxyAppBundleID;                                                      //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
@property (retain) NSString * proxyAppName;                                                          //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (retain) NSString * reason;                                                                //@synthesize reason=_reason - In the implementation block
@property (retain) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (retain) NSString * userAgentSuffix;                                                       //@synthesize userAgentSuffix=_userAgentSuffix - In the implementation block
@property (assign) char usernameEditable;                                                            //@synthesize usernameEditable=_usernameEditable - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)presentingViewController;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(long long)serviceType;
-(id)mediaType;
-(void)setServiceType:(long long)arg1 ;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(void)setPresentingViewController:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)defaultButtonString;
-(NSString *)cancelButtonString;
-(void)setUsernameEditable:(char)arg1 ;
-(void)setAuthKitData:(id)arg1 ;
-(id)authKitData;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(void)setCancelButtonString:(NSString *)arg1 ;
-(unsigned long long)authenticationType;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(id)optionsDictionary;
-(char)allowSecondaryCredentialSource;
-(char)allowServerDialogs;
-(NSString *)appProvidedContext;
-(NSDictionary *)appProvidedData;
-(char)canMakeAccountActive;
-(NSDictionary *)createAccountQueryParams;
-(unsigned long long)credentialSource;
-(NSString *)debugReason;
-(char)enableAccountCreation;
-(char)ephemeral;
-(char)isRemoteProxyAuthentication;
-(NSString *)logKey;
-(NSDictionary *)HTTPHeaders;
-(NSURL *)iconBundleURL;
-(char)ignoreAccountConversion;
-(NSString *)promptTitle;
-(NSString *)proxyAppBundleID;
-(NSString *)proxyAppName;
-(NSString *)userAgentSuffix;
-(char)usernameEditable;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(id)optionsDictionaryForRemoteProxyAuthentication;
-(void)setAllowServerDialogs:(char)arg1 ;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setCanMakeAccountActive:(char)arg1 ;
-(void)setCreateAccountQueryParams:(NSDictionary *)arg1 ;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(void)setDebugReason:(NSString *)arg1 ;
-(void)setEnableAccountCreation:(char)arg1 ;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(void)setIgnoreAccountConversion:(char)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(void)setProxyAppName:(NSString *)arg1 ;
-(void)setUserAgentSuffix:(NSString *)arg1 ;
-(void)setAllowSecondaryCredentialSource:(char)arg1 ;
-(NSString *)companionDeviceClientInfo;
-(void)setCompanionDeviceClientInfo:(NSString *)arg1 ;
-(NSString *)companionDeviceUDID;
-(void)setCompanionDeviceUDID:(NSString *)arg1 ;
-(char)isDemoAccountSetup;
-(void)setDemoAccountSetup:(char)arg1 ;
-(void)setEphemeral:(char)arg1 ;
@end
