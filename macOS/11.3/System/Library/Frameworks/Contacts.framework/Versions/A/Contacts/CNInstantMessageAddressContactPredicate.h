/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate {

	CNInstantMessageAddress* _imAddress;

}

@property (nonatomic,copy,readonly) CNInstantMessageAddress * imAddress;              //@synthesize imAddress=_imAddress - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)initWithInstantMessageAddress:(id)arg1 ;
@end
