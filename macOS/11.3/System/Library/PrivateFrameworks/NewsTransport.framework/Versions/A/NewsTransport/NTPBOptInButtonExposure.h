/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBOptInButtonExposure : PBCodable <NSCopying> {

	NSData* _groupViewExposureId;
	int _optInButtonLocation;
	NSString* _optInButtonLocationId;
	int _optInButtonType;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) char hasOptInButtonType; 
@property (assign,nonatomic) int optInButtonType;                           //@synthesize optInButtonType=_optInButtonType - In the implementation block
@property (assign,nonatomic) char hasOptInButtonLocation; 
@property (assign,nonatomic) int optInButtonLocation;                       //@synthesize optInButtonLocation=_optInButtonLocation - In the implementation block
@property (nonatomic,readonly) char hasOptInButtonLocationId; 
@property (nonatomic,retain) NSString * optInButtonLocationId;              //@synthesize optInButtonLocationId=_optInButtonLocationId - In the implementation block
@property (nonatomic,readonly) char hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(char)hasGroupViewExposureId;
-(NSData *)groupViewExposureId;
-(void)setOptInButtonLocationId:(NSString *)arg1 ;
-(int)optInButtonType;
-(void)setOptInButtonType:(int)arg1 ;
-(void)setHasOptInButtonType:(char)arg1 ;
-(char)hasOptInButtonType;
-(int)optInButtonLocation;
-(void)setOptInButtonLocation:(int)arg1 ;
-(void)setHasOptInButtonLocation:(char)arg1 ;
-(char)hasOptInButtonLocation;
-(char)hasOptInButtonLocationId;
-(NSString *)optInButtonLocationId;
@end

