/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _WKAuthenticatorSelectionCriteria : NSObject {

	char _requireResidentKey;
	long long _authenticatorAttachment;
	long long _userVerification;

}

@property (assign,nonatomic) long long authenticatorAttachment;              //@synthesize authenticatorAttachment=_authenticatorAttachment - In the implementation block
@property (assign,nonatomic) char requireResidentKey;                        //@synthesize requireResidentKey=_requireResidentKey - In the implementation block
@property (assign,nonatomic) long long userVerification;                     //@synthesize userVerification=_userVerification - In the implementation block
-(id)init;
-(void)setAuthenticatorAttachment:(long long)arg1 ;
-(void)setRequireResidentKey:(char)arg1 ;
-(void)setUserVerification:(long long)arg1 ;
-(long long)authenticatorAttachment;
-(char)requireResidentKey;
-(long long)userVerification;
@end
