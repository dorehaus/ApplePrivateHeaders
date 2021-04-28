/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersonNameComponents;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	char _hasiCloudAccount;
	char _isCurrentUser;
	short _type;
	short _status;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _userIdentifier;
	NSPersonNameComponents* _nameComponents;

}

@property (nonatomic,copy) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                            //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (assign,nonatomic) char hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) short type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) short status;                                       //@synthesize status=_status - In the implementation block
+(char)supportsSecureCoding;
+(id)momentShareParticipantsFromParticipants:(id)arg1 ;
+(id)shareParticipantsFromMomentShareParticipants:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(short)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(short)type;
-(NSString *)userIdentifier;
-(short)status;
-(NSString *)phoneNumber;
-(void)setStatus:(short)arg1 ;
-(NSString *)email;
-(char)hasiCloudAccount;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setHasiCloudAccount:(char)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setIsCurrentUser:(char)arg1 ;
-(char)isCurrentUser;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(id)initWithShareParticipant:(id)arg1 ;
-(id)asShareParticipant;
@end

