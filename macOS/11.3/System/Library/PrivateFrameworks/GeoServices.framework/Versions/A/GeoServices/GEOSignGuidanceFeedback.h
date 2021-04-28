/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {

	int _signDetailIndex;
	int _signTitleIndex;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasSignTitleIndex; 
@property (assign,nonatomic) int signTitleIndex; 
@property (assign,nonatomic) char hasSignDetailIndex; 
@property (assign,nonatomic) int signDetailIndex; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSignTitleIndex:(int)arg1 ;
-(void)setSignDetailIndex:(int)arg1 ;
-(int)signTitleIndex;
-(void)setHasSignTitleIndex:(char)arg1 ;
-(char)hasSignTitleIndex;
-(int)signDetailIndex;
-(void)setHasSignDetailIndex:(char)arg1 ;
-(char)hasSignDetailIndex;
@end

