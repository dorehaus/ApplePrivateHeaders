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

@interface GEORPProblemResponse : PBCodable <NSCopying> {

	NSString* _problemId;
	int _statusCode;
	char _isNotificationSupported;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,readonly) char hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) char hasIsNotificationSupported; 
@property (assign,nonatomic) char isNotificationSupported; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(char)arg1 ;
-(char)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(char)hasProblemId;
-(void)setIsNotificationSupported:(char)arg1 ;
-(char)isNotificationSupported;
-(void)setHasIsNotificationSupported:(char)arg1 ;
-(char)hasIsNotificationSupported;
@end

