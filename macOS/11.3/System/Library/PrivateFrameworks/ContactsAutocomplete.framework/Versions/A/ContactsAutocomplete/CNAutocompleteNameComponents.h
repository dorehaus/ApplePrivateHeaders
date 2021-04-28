/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _nameSuffix;

}

@property (readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * nickname;                //@synthesize nickname=_nickname - In the implementation block
@property (readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4 ;
+(id)contactKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)lastName;
@end
