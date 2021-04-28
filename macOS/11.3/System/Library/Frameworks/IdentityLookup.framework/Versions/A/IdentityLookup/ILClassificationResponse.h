/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/Versions/A/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding> {

	long long _action;
	NSString* _userString;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * userString;                //@synthesize userString=_userString - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)userString;
-(char)isEqualToResponse:(id)arg1 ;
-(id)initWithClassificationAction:(long long)arg1 ;
-(void)setUserString:(NSString *)arg1 ;
@end

