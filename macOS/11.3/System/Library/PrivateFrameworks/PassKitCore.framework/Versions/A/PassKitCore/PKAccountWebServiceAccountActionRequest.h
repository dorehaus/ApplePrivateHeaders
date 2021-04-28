/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, PKAccountAction, NSURL;

@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSString* _accountUserAltDSID;
	PKAccountAction* _action;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountUserAltDSID;              //@synthesize accountUserAltDSID=_accountUserAltDSID - In the implementation block
@property (nonatomic,retain) PKAccountAction * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(PKAccountAction *)action;
-(void)setAction:(PKAccountAction *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)accountUserAltDSID;
-(void)setAccountUserAltDSID:(NSString *)arg1 ;
@end

