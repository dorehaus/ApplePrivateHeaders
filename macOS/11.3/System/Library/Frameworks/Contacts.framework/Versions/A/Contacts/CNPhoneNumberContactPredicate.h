/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNCDContactPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class CNPhoneNumber, NSString, NSArray;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate> {

	char _returnsMultipleResults;
	CNPhoneNumber* _phoneNumber;
	NSString* _prefixHint;
	NSString* _digits;
	NSString* _countryCode;
	NSArray* _groupIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDebugDescription;
-(id)cn_coreDataPredicate;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(char)arg2 service:(id)arg3 error:(id*)arg4 ;
-(char)includeResult:(id)arg1 ;
@end

