/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PKSearchQuery : NSObject <NSSecureCoding> {

	unsigned long long _domain;
	NSString* _identifier;
	NSString* _keyboardLanguage;
	unsigned long long _type;
	NSString* _text;
	NSArray* _tokens;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;              //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long domain; 
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                           //@synthesize tokens=_tokens - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isEmpty;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)tags;
-(NSString *)text;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(NSArray *)tokens;
-(void)setText:(NSString *)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2 ;
-(id)_groupTokenOfType:(unsigned long long)arg1 ;
-(id)categoryToken;
-(id)merchantToken;
-(id)peerPaymentToken;
-(id)accountUserToken;
-(id)locationTokens;
-(id)amountToken;
-(id)dateToken;
-(id)transactionTypes;
-(id)transactionStatuses;
-(id)transactionSources;
-(id)peerPaymentSubTypeToken;
-(id)rewardsToken;
@end

