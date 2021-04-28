/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <ContactsPersistence/ABCDRecord.h>
#import <libobjc.A.dylib/ABCDContainedRecord.h>

@class NSString, NSNumber, NSDate, NSDateComponents, CNCDContainer, NSSet, NSDictionary, ABCDNote, NSData, ABCDContactIndex;

@interface CNCDContact : ABCDRecord <ABCDContainedRecord>

@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * middleName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSString * maidenName; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * suffix; 
@property (nonatomic,retain) NSString * nickname; 
@property (nonatomic,retain) NSString * phoneticFirstName; 
@property (nonatomic,retain) NSString * phoneticMiddleName; 
@property (nonatomic,retain) NSString * phoneticLastName; 
@property (nonatomic,retain) NSString * primitiveFirstName; 
@property (nonatomic,retain) NSString * primitiveLastName; 
@property (nonatomic,retain) NSString * primitiveSortingFirstName; 
@property (nonatomic,retain) NSString * primitiveSortingLastName; 
@property (nonatomic,retain) NSString * primitivePhoneticFirstName; 
@property (nonatomic,retain) NSString * primitivePhoneticLastName; 
@property (nonatomic,retain) NSString * primitiveOrganization; 
@property (nonatomic,retain) NSString * primitivePhoneticOrganization; 
@property (nonatomic,retain) NSNumber * primitiveDisplayFlags; 
@property (nonatomic,retain) NSString * nicknameNormalized; 
@property (nonatomic,retain) NSString * middleNameNormalized; 
@property (nonatomic,retain) NSString * primitiveNickname; 
@property (nonatomic,retain) NSString * primitiveMiddleName; 
@property (nonatomic,retain) NSString * jobTitle; 
@property (nonatomic,retain) NSString * organization; 
@property (nonatomic,retain) NSString * phoneticOrganization; 
@property (nonatomic,retain) NSString * department; 
@property (nonatomic,retain) NSNumber * displayFlags; 
@property (nonatomic,retain) NSDate * birthday; 
@property (nonatomic,retain) NSDate * primitiveBirthday; 
@property (nonatomic,copy) NSDateComponents * birthdayComponents; 
@property (nonatomic,retain) CNCDContainer * container; 
@property (nonatomic,retain) NSSet * emailAddresses; 
@property (nonatomic,retain) NSSet * phoneNumbers; 
@property (nonatomic,retain) NSSet * socialProfiles; 
@property (nonatomic,retain) NSSet * postalAddresses; 
@property (nonatomic,retain) NSSet * messagingAddresses; 
@property (nonatomic,retain) NSSet * urlAddresses; 
@property (nonatomic,retain) NSSet * relatedNames; 
@property (nonatomic,retain) NSSet * alertTones; 
@property (nonatomic,retain) NSDictionary * alertTonesDictionary; 
@property (nonatomic,retain) NSDictionary * ringtone; 
@property (nonatomic,retain) NSDictionary * texttone; 
@property (nonatomic,retain) ABCDNote * note; 
@property (nonatomic,retain) NSString * imageReference; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,retain) NSData * thumbnailImageData; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,retain) NSData * cropRectHash; 
@property (nonatomic,retain) NSString * cropRectID; 
@property (nonatomic,retain) NSString * imageType; 
@property (nonatomic,retain) NSData * imageHash; 
@property (nonatomic,retain) NSString * linkId; 
@property (nonatomic,retain) NSNumber * preferredForLinkName; 
@property (nonatomic,retain) NSNumber * preferredForLinkPhoto; 
@property (nonatomic,retain) NSString * preferredLikenessSource; 
@property (nonatomic,retain) NSString * preferredApplePersonaIdentifier; 
@property (nonatomic,retain) NSString * phonemeData; 
@property (nonatomic,retain) NSString * downtimeWhitelist; 
@property (nonatomic,retain) ABCDContactIndex * contactIndex; 
@property (assign,nonatomic) char isCompany; 
+(id)_table;
+(id)os_log;
+(id)abEntityName;
+(id)preferredNameSortDescriptors;
+(id)preferredPhotoSortDescriptors;
+(id)stringForIndexingKeypaths;
+(id)keyPathsForValuesAffectingIsCompany;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)attributedStringValue;
-(id)fullName;
-(id)dateComponents;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(char)isMe;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)awakeFromInsert;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(void)touch:(id)arg1 ;
-(void)willRefresh:(char)arg1 ;
-(void)setDateComponents:(id)arg1 ;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(char)validateForDelete:(id*)arg1 ;
-(id)sortingFirstName;
-(id)sortingLastName;
-(CGRect)cropRect;
-(NSString *)cropRectID;
-(NSData *)cropRectHash;
-(void)setNormalizedBirthday:(id)arg1 ;
-(NSDictionary *)alertTonesDictionary;
-(id)_makeSortingFirstName;
-(id)_makeSortingLastName;
-(id)callFallbackAlternateName;
-(void)setAlertTonesDictionary:(NSDictionary *)arg1 ;
-(void)willSave;
-(char)validateForGuardianRestrictions:(id*)arg1 ;
-(char)isCompany;
-(id)fullNameIncludingPrefix:(char)arg1 suffix:(char)arg2 nickname:(char)arg3 company:(char)arg4 ;
-(id)imageDirectory;
-(id)imageHelper;
-(id)thumbnailImageDataCheckingLegacyImages:(char)arg1 ;
-(id)imageDataCheckingLegacyImages:(char)arg1 ;
-(void)setBirthdayYearless:(id)arg1 ;
-(double)birthdayYearless;
-(void)setBirthdayYear:(id)arg1 ;
-(long long)birthdayYear;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSDateComponents *)birthdayComponents;
-(void)setBirthdayComponents:(NSDateComponents *)arg1 ;
-(id)_newStringForIndexing;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setOrganization:(NSString *)arg1 ;
-(void)setPhoneticOrganization:(NSString *)arg1 ;
-(void)setDisplayFlags:(NSNumber *)arg1 ;
-(void)setRingtone:(NSDictionary *)arg1 ;
-(NSDictionary *)ringtone;
-(void)setTexttone:(NSDictionary *)arg1 ;
-(NSDictionary *)texttone;
-(char)hasUserImageChanges;
-(char)propertyHasChanged:(id)arg1 ;
-(void)setIsCompany:(char)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setCropRectID:(NSString *)arg1 ;
-(void)setCropRectHash:(NSData *)arg1 ;
@end
