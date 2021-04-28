/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMFControlGroupIdentifier, NSString, NSData, CATTaskClient, NSDictionary;

@interface CRKShareTarget : NSObject {

	char _group;
	char _course;
	char _instructor;
	char _supportsFileURLs;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _type;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _secondaryName;
	NSData* _iconImageData;
	CATTaskClient* _taskClient;

}

@property (nonatomic,retain) CATTaskClient * taskClient;                                  //@synthesize taskClient=_taskClient - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) DMFControlGroupIdentifier * courseIdentifier;                  //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * secondaryName;                                      //@synthesize secondaryName=_secondaryName - In the implementation block
@property (nonatomic,retain) NSData * iconImageData;                                      //@synthesize iconImageData=_iconImageData - In the implementation block
@property (assign,getter=isGroup,nonatomic) char group;                                   //@synthesize group=_group - In the implementation block
@property (assign,getter=isCourse,nonatomic) char course;                                 //@synthesize course=_course - In the implementation block
@property (assign,getter=isInstructor,nonatomic) char instructor;                         //@synthesize instructor=_instructor - In the implementation block
@property (assign,nonatomic) char supportsFileURLs;                                       //@synthesize supportsFileURLs=_supportsFileURLs - In the implementation block
+(id)sandboxExtensionsForFileURLs:(id)arg1 ;
+(id)sandboxExtensionForPath:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setGroup:(char)arg1 ;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(char)isGroup;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setCourse:(char)arg1 ;
-(NSString *)secondaryName;
-(void)setSecondaryName:(NSString *)arg1 ;
-(char)isInstructor;
-(NSData *)iconImageData;
-(void)setIconImageData:(NSData *)arg1 ;
-(CATTaskClient *)taskClient;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(char)isCourse;
-(char)supportsFileURLs;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(char)isEqualToShareTarget:(id)arg1 ;
-(id)operationToSendItems:(id)arg1 fromBundleIdentifier:(id)arg2 description:(id)arg3 previewImageData:(id)arg4 ;
-(void)setInstructor:(char)arg1 ;
-(void)setSupportsFileURLs:(char)arg1 ;
-(void)setTaskClient:(CATTaskClient *)arg1 ;
@end

