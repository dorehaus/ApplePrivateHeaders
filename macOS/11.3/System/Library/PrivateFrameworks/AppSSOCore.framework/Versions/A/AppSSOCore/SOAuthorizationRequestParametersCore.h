/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/Versions/A/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequestParametersCore : NSObject <NSSecureCoding> {

	char _useInternalExtensions;
	char _cfNetworkInterception;
	char _callerManaged;
	NSURL* _url;
	NSString* _requestedOperation;
	NSDictionary* _httpHeaders;
	NSData* _httpBody;
	NSString* _realm;
	NSDictionary* _extensionData;
	NSData* _auditTokenData;
	NSString* _callerBundleIdentifier;
	NSDictionary* _authorizationOptions;
	long long _responseCode;
	NSString* _callerTeamIdentifier;
	NSString* _localizedCallerDisplayName;

}

@property (nonatomic,copy) NSURL * url;                                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * requestedOperation;                                            //@synthesize requestedOperation=_requestedOperation - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                                               //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy) NSData * httpBody;                                                        //@synthesize httpBody=_httpBody - In the implementation block
@property (nonatomic,copy) NSString * realm;                                                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,copy) NSDictionary * extensionData;                                             //@synthesize extensionData=_extensionData - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                                                //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,copy) NSString * callerBundleIdentifier;                                        //@synthesize callerBundleIdentifier=_callerBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * authorizationOptions;                                    //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
@property (assign,nonatomic) char useInternalExtensions;                                             //@synthesize useInternalExtensions=_useInternalExtensions - In the implementation block
@property (assign,nonatomic) long long responseCode;                                                 //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,getter=isCFNetworkInterception,nonatomic) char cfNetworkInterception;              //@synthesize cfNetworkInterception=_cfNetworkInterception - In the implementation block
@property (assign,getter=isCallerManaged,nonatomic) char callerManaged;                              //@synthesize callerManaged=_callerManaged - In the implementation block
@property (nonatomic,copy) NSString * callerTeamIdentifier;                                          //@synthesize callerTeamIdentifier=_callerTeamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedCallerDisplayName;                                    //@synthesize localizedCallerDisplayName=_localizedCallerDisplayName - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSData *)httpBody;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSData *)auditTokenData;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(char)useInternalExtensions;
-(void)setUseInternalExtensions:(char)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
-(char)isCFNetworkInterception;
-(void)setCfNetworkInterception:(char)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(NSDictionary *)extensionData;
-(NSString *)requestedOperation;
-(NSString *)callerBundleIdentifier;
-(NSDictionary *)authorizationOptions;
-(char)isCallerManaged;
-(NSString *)callerTeamIdentifier;
-(NSString *)localizedCallerDisplayName;
-(id)initWithAuthorizationParameters:(id)arg1 ;
-(id)initWithAuthorizationParametersCore:(id)arg1 ;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)setCallerManaged:(char)arg1 ;
-(void)setCallerTeamIdentifier:(NSString *)arg1 ;
-(void)setLocalizedCallerDisplayName:(NSString *)arg1 ;
@end

