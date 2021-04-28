/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSString* _displayName;
	EAEmailAddressSet* _emailAddresses;

}

@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) EAEmailAddressSet * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(EAEmailAddressSet *)emailAddresses;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 ;
-(void)_commonInitWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 displayName:(id)arg4 ;
-(char)_isEqualToVIP:(id)arg1 ;
@end

