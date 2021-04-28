/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString, NSNumber;

@interface IALDAPAccountSetupInput : IAAccountSetupInput {

	NSString* _serverAddress;
	NSNumber* _useSSL;
	long long _port;
	NSString* _scope;
	NSString* _searchBase;
	char _authenticate;

}

@property (retain) NSString * serverAddress;              //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSNumber * useSSL;                     //@synthesize useSSL=_useSSL - In the implementation block
@property (assign) long long port;                        //@synthesize port=_port - In the implementation block
@property (retain) NSString * scope;                      //@synthesize scope=_scope - In the implementation block
@property (retain) NSString * searchBase;                 //@synthesize searchBase=_searchBase - In the implementation block
@property (assign) char authenticate;                     //@synthesize authenticate=_authenticate - In the implementation block
-(long long)port;
-(void)setPort:(long long)arg1 ;
-(NSString *)scope;
-(NSString *)serverAddress;
-(void)setScope:(NSString *)arg1 ;
-(void)setUseSSL:(NSNumber *)arg1 ;
-(NSNumber *)useSSL;
-(void)setServerAddress:(NSString *)arg1 ;
-(NSString *)searchBase;
-(void)setSearchBase:(NSString *)arg1 ;
-(char)authenticate;
-(void)setAuthenticate:(char)arg1 ;
@end
