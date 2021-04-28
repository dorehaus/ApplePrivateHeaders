/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DMFControlGroupIdentifier, NSString, CRKUser, NSDictionary, NSDate, NSSet;

@interface CRKCourse : NSObject <NSSecureCoding, NSCopying> {

	char _requestingUnenroll;
	char _studentCredentialsAreValid;
	char _mustRequestUnenroll;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _courseName;
	NSString* _courseDescription;
	unsigned long long _courseMascotType;
	unsigned long long _courseColorType;
	CRKUser* _courseUser;
	NSDictionary* _instructorsByIdentifier;
	unsigned long long _type;
	NSDate* _automaticRemovalDate;
	NSSet* _trustedCertificatePersistentIds;
	NSSet* _validTrustedCertificatePersistentIds;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;                     //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                              //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,copy) NSString * courseDescription;                                       //@synthesize courseDescription=_courseDescription - In the implementation block
@property (assign,nonatomic) unsigned long long courseMascotType;                              //@synthesize courseMascotType=_courseMascotType - In the implementation block
@property (assign,nonatomic) unsigned long long courseColorType;                               //@synthesize courseColorType=_courseColorType - In the implementation block
@property (nonatomic,retain) CRKUser * courseUser;                                             //@synthesize courseUser=_courseUser - In the implementation block
@property (nonatomic,copy) NSDictionary * instructorsByIdentifier;                             //@synthesize instructorsByIdentifier=_instructorsByIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char mustRequestUnenroll;                                         //@synthesize mustRequestUnenroll=_mustRequestUnenroll - In the implementation block
@property (assign,getter=isRequestingUnenroll,nonatomic) char requestingUnenroll;              //@synthesize requestingUnenroll=_requestingUnenroll - In the implementation block
@property (nonatomic,retain) NSDate * automaticRemovalDate;                                    //@synthesize automaticRemovalDate=_automaticRemovalDate - In the implementation block
@property (assign,nonatomic) char studentCredentialsAreValid;                                  //@synthesize studentCredentialsAreValid=_studentCredentialsAreValid - In the implementation block
@property (nonatomic,retain) NSSet * trustedCertificatePersistentIds;                          //@synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds - In the implementation block
@property (nonatomic,retain) NSSet * validTrustedCertificatePersistentIds;                     //@synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds - In the implementation block
@property (getter=isManaged,nonatomic,readonly) char managed; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,readonly) char allowsUnenroll; 
+(id)new;
+(char)supportsSecureCoding;
+(id)stringForType:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingExpired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(char)isExpired;
-(char)isManaged;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
-(NSString *)courseDescription;
-(void)setCourseDescription:(NSString *)arg1 ;
-(char)studentCredentialsAreValid;
-(NSSet *)validTrustedCertificatePersistentIds;
-(CRKUser *)courseUser;
-(NSDictionary *)instructorsByIdentifier;
-(char)isEqualToCourse:(id)arg1 ;
-(unsigned long long)courseMascotType;
-(unsigned long long)courseColorType;
-(char)mustRequestUnenroll;
-(char)isRequestingUnenroll;
-(NSDate *)automaticRemovalDate;
-(NSSet *)trustedCertificatePersistentIds;
-(void)setCourseMascotType:(unsigned long long)arg1 ;
-(void)setCourseColorType:(unsigned long long)arg1 ;
-(void)setCourseUser:(CRKUser *)arg1 ;
-(void)setInstructorsByIdentifier:(NSDictionary *)arg1 ;
-(void)setMustRequestUnenroll:(char)arg1 ;
-(void)setRequestingUnenroll:(char)arg1 ;
-(void)setAutomaticRemovalDate:(NSDate *)arg1 ;
-(void)setStudentCredentialsAreValid:(char)arg1 ;
-(void)setTrustedCertificatePersistentIds:(NSSet *)arg1 ;
-(void)setValidTrustedCertificatePersistentIds:(NSSet *)arg1 ;
-(id)initWithIdentifier:(id)arg1 managed:(char)arg2 ;
-(char)allowsUnenroll;
-(void)setManaged:(char)arg1 ;
-(char)isDeeplyEqual:(id)arg1 ;
@end

