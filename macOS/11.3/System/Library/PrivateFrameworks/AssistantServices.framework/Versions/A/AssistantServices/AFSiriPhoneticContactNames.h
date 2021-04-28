/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AFSiriPhoneticContactNames : NSObject {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * givenName;                     //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                    //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                    //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy) NSString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(NSString *)languageCode;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)spokenName;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
@end

