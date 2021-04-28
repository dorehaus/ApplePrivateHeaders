/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding> {

	char _submitted;
	short _majorVersion;
	short _minorVersion;
	double _creationDate;
	NSManagedObjectID* _objectId;

}

@property (assign,nonatomic) short majorVersion;                        //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) short minorVersion;                        //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) char submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(char)supportsSecureCoding;
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entityName;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(char)copyToManagedObject:(id)arg1 ;
-(short)majorVersion;
-(short)minorVersion;
-(char)submitted;
-(void)setSubmitted:(char)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(void)setMajorVersion:(short)arg1 ;
-(void)setMinorVersion:(short)arg1 ;
-(char)copyFromManagedObject:(id)arg1 ;
-(id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4 ;
-(char)isEqualToModelInfo:(id)arg1 ;
@end

