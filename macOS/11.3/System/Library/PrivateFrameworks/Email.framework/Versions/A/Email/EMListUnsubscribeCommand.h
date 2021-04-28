/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EDReceivingAccount;
@class NSString, EMListUnsubscribeCommandMessageHeaders;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding> {

	id<EDReceivingAccount> _account;
	NSString* _accountIdentifier;
	NSString* _address;
	NSString* _subject;
	NSString* _body;
	EMListUnsubscribeCommandMessageHeaders* _originalMessageHeaders;

}

@property (nonatomic,readonly) NSString * address;                                                           //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * subject;                                                           //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                                                              //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) id<EDReceivingAccount> account; 
@property (nonatomic,readonly) EMListUnsubscribeCommandMessageHeaders * originalMessageHeaders;              //@synthesize originalMessageHeaders=_originalMessageHeaders - In the implementation block
+(char)supportsSecureCoding;
+(/*^block*/id)accountFinderBlock;
+(void)setAccountFinderBlock:(/*^block*/id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(NSString *)subject;
-(id<EDReceivingAccount>)account;
-(NSString *)body;
-(id)_accountWithIdentifier:(id)arg1 ;
-(void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(EMListUnsubscribeCommandMessageHeaders *)originalMessageHeaders;
-(id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 ;
@end

