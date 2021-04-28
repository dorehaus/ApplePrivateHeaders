/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DMFControlSessionIdentifier, NSString, NSData, NSDictionary;

@interface CRKInstructor : NSObject <NSSecureCoding> {

	char _disallowsClassroomAirDropOverLocalNetwork;
	char _allowsStudentInitiatedDisconnection;
	char _observingStudentScreen;
	DMFControlSessionIdentifier* _sessionIdentifier;
	NSString* _userIdentifier;
	NSString* _displayName;
	NSString* _courseName;
	NSData* _imageData;

}

@property (nonatomic,copy) DMFControlSessionIdentifier * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                                                  //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                                      //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                                       //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) char disallowsClassroomAirDropOverLocalNetwork;                           //@synthesize disallowsClassroomAirDropOverLocalNetwork=_disallowsClassroomAirDropOverLocalNetwork - In the implementation block
@property (assign,nonatomic) char allowsStudentInitiatedDisconnection;                                 //@synthesize allowsStudentInitiatedDisconnection=_allowsStudentInitiatedDisconnection - In the implementation block
@property (assign,getter=isObservingStudentScreen,nonatomic) char observingStudentScreen;              //@synthesize observingStudentScreen=_observingStudentScreen - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(DMFControlSessionIdentifier *)sessionIdentifier;
-(void)setSessionIdentifier:(DMFControlSessionIdentifier *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)courseName;
-(char)disallowsClassroomAirDropOverLocalNetwork;
-(char)allowsStudentInitiatedDisconnection;
-(char)isObservingStudentScreen;
-(char)isEqualToInstructor:(id)arg1 ;
-(void)setCourseName:(NSString *)arg1 ;
-(void)setDisallowsClassroomAirDropOverLocalNetwork:(char)arg1 ;
-(void)setAllowsStudentInitiatedDisconnection:(char)arg1 ;
-(void)setObservingStudentScreen:(char)arg1 ;
@end

