/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMCourse.h>

@protocol CRKASMLocation;
@class DMFControlGroupIdentifier, NSString, NSDate, NSArray, NSSet, CRKASMIdentityVendor, CRKASMCertificateVendor;

@interface CRKASMConcreteCourse : NSObject <CRKASMCourse> {

	char _editable;
	unsigned long long _color;
	DMFControlGroupIdentifier* _identifier;
	id<CRKASMLocation> _location;
	unsigned long long _mascot;
	NSString* _name;
	NSArray* _trustedUsers;
	NSArray* _users;
	NSDate* _creationDate;
	NSString* _backingClassObjectID;
	CRKASMIdentityVendor* _identityVendor;
	CRKASMCertificateVendor* _certificateVendor;
	NSSet* _trustedUserIdentifiers;

}

@property (nonatomic,readonly) CRKASMIdentityVendor * identityVendor;                    //@synthesize identityVendor=_identityVendor - In the implementation block
@property (nonatomic,readonly) CRKASMCertificateVendor * certificateVendor;              //@synthesize certificateVendor=_certificateVendor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * trustedUserIdentifiers;                      //@synthesize trustedUserIdentifiers=_trustedUserIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingClassObjectID;                     //@synthesize backingClassObjectID=_backingClassObjectID - In the implementation block
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long mascot;                                //@synthesize mascot=_mascot - In the implementation block
@property (nonatomic,readonly) unsigned long long color;                                 //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) id<CRKASMLocation> location;                              //@synthesize location=_location - In the implementation block
@property (getter=isEditable,nonatomic,readonly) char editable;                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) id<CRKIdentity> identity; 
@property (nonatomic,readonly) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * users;                                     //@synthesize users=_users - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trustedUsers;                              //@synthesize trustedUsers=_trustedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
+(id)trustedUsersFromPersons:(id)arg1 certificateVendor:(id)arg2 ;
+(id)courseNameforClass:(id)arg1 ;
+(id)usersFromPersons:(id)arg1 ;
+(id)trustedUserIdentifierForTrustedUsers:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(DMFControlGroupIdentifier *)identifier;
-(id<CRKASMLocation>)location;
-(NSDate *)creationDate;
-(id<CRKIdentity>)identity;
-(unsigned long long)color;
-(char)isEditable;
-(NSArray *)users;
-(unsigned long long)mascot;
-(NSArray *)trustedUsers;
-(CRKASMCertificateVendor *)certificateVendor;
-(NSSet *)allTrustedUserCertificates;
-(CRKASMIdentityVendor *)identityVendor;
-(NSSet *)trustedUserIdentifiers;
-(id)initWithBackingClass:(id)arg1 location:(id)arg2 persons:(id)arg3 trustedPersons:(id)arg4 identityVendor:(id)arg5 certificateVendor:(id)arg6 manageableLocationIDs:(id)arg7 ;
-(NSString *)backingClassObjectID;
@end
