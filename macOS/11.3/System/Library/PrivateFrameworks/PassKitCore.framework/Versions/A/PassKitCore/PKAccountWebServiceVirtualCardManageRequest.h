/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAccountVirtualCardEncryptionFields, NSString, NSURL;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {

	PKAccountVirtualCardEncryptionFields* _encryptionFields;
	long long _action;
	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _virtualCardIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * virtualCardIdentifier;              //@synthesize virtualCardIdentifier=_virtualCardIdentifier - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)virtualCardIdentifier;
-(void)setVirtualCardIdentifier:(NSString *)arg1 ;
@end

