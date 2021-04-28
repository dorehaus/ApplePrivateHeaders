/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {

	char _canCreateContacts;
	char _canDeleteContacts;
	char _canCreateGroups;

}

@property (nonatomic,readonly) char canCreateContacts;              //@synthesize canCreateContacts=_canCreateContacts - In the implementation block
@property (nonatomic,readonly) char canDeleteContacts;              //@synthesize canDeleteContacts=_canDeleteContacts - In the implementation block
@property (nonatomic,readonly) char canCreateGroups;                //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCanCreateContacts:(char)arg1 canDeleteContacts:(char)arg2 canCreateGroups:(char)arg3 ;
-(char)canCreateContacts;
-(char)canDeleteContacts;
-(char)canCreateGroups;
@end

