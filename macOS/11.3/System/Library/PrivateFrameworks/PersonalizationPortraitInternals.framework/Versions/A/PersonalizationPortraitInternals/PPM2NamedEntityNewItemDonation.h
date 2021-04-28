/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2NamedEntityNewItemDonation : PBCodable <NSCopying> {

	long long _rank;
	NSString* _activeTreatments;
	int _algorithm;
	int _category;
	int _donationSource;
	NSString* _dynamicCategory;
	NSString* _groupId;
	char _newItem;
	char _userCreated;
	SCD_Struct_PP5 _has;

}

@property (assign,nonatomic) char hasDonationSource; 
@property (assign,nonatomic) int donationSource;                       //@synthesize donationSource=_donationSource - In the implementation block
@property (assign,nonatomic) char hasCategory; 
@property (assign,nonatomic) int category;                             //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) char hasDynamicCategory; 
@property (nonatomic,retain) NSString * dynamicCategory;               //@synthesize dynamicCategory=_dynamicCategory - In the implementation block
@property (nonatomic,readonly) char hasGroupId; 
@property (nonatomic,retain) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) char hasNewItem; 
@property (assign,nonatomic) char newItem;                             //@synthesize newItem=_newItem - In the implementation block
@property (assign,nonatomic) char hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                            //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) char hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) char hasUserCreated; 
@property (assign,nonatomic) char userCreated;                         //@synthesize userCreated=_userCreated - In the implementation block
@property (assign,nonatomic) char hasRank; 
@property (assign,nonatomic) long long rank;                           //@synthesize rank=_rank - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)algorithm;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(char)hasCategory;
-(void)setUserCreated:(char)arg1 ;
-(void)setHasRank:(char)arg1 ;
-(char)hasRank;
-(void)setHasCategory:(char)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
-(char)hasGroupId;
-(void)setAlgorithm:(int)arg1 ;
-(NSString *)dynamicCategory;
-(char)userCreated;
-(char)hasAlgorithm;
-(char)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(int)donationSource;
-(void)setDonationSource:(int)arg1 ;
-(void)setHasDonationSource:(char)arg1 ;
-(char)hasDonationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(void)setHasAlgorithm:(char)arg1 ;
-(id)algorithmAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
-(void)setNewItem:(char)arg1 ;
-(void)setHasNewItem:(char)arg1 ;
-(char)hasNewItem;
-(void)setHasUserCreated:(char)arg1 ;
-(char)hasUserCreated;
-(char)newItem;
-(char)hasDynamicCategory;
-(void)setDynamicCategory:(NSString *)arg1 ;
@end

