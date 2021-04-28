/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/Versions/A/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSOptional;

@interface VSAccountAuthentication : NSObject {

	NSString* _username;
	VSOptional* _authenticationToken;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) VSOptional * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                  //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
-(id)description;
-(id)init;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
@end

