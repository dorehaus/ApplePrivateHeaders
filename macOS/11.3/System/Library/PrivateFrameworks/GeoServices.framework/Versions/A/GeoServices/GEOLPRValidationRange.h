/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {

	NSString* _validCharacters;
	int _end;
	int _start;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasStart; 
@property (assign,nonatomic) int start; 
@property (assign,nonatomic) char hasEnd; 
@property (assign,nonatomic) int end; 
@property (nonatomic,readonly) char hasValidCharacters; 
@property (nonatomic,retain) NSString * validCharacters; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)start;
-(id)dictionaryRepresentation;
-(int)end;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEnd:(int)arg1 ;
-(void)setStart:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasStart:(char)arg1 ;
-(char)hasStart;
-(void)setHasEnd:(char)arg1 ;
-(char)hasEnd;
-(NSString *)validCharacters;
-(void)setValidCharacters:(NSString *)arg1 ;
-(char)hasValidCharacters;
@end
