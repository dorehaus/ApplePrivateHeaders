/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSUsernamePasswordCredentials : SSCredentials {

	char _serverSupportsSRP;
	NSString* _username;
	NSString* _password;
	NSString* _label;

}

@property (retain) NSString * username;                 //@synthesize username=_username - In the implementation block
@property (retain) NSString * password;                 //@synthesize password=_password - In the implementation block
@property (retain) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (assign) char serverSupportsSRP;              //@synthesize serverSupportsSRP=_serverSupportsSRP - In the implementation block
+(id)diffieHellmanCredentialsWithUsername:(id)arg1 withPassword:(id)arg2 label:(id)arg3 ;
+(id)srpCredentialsWithUsername:(id)arg1 withPassword:(id)arg2 ;
+(id)rsaCredentialsWithUsername:(id)arg1 withPassword:(id)arg2 label:(id)arg3 srp:(char)arg4 ;
-(void)dealloc;
-(NSString *)password;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithAuthenticationType:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 ;
-(void)setServerSupportsSRP:(char)arg1 ;
-(char)serverSupportsSRP;
@end

