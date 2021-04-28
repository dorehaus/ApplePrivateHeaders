/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSURL;

@interface GEOURLInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _url;
	unsigned _alternativeMultipathTCPPort;
	char _supportsMultipathTCP;
	char _useAuthProxy;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) NSURL * nsURL; 
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) char hasUseAuthProxy; 
@property (assign,nonatomic) char useAuthProxy; 
@property (assign,nonatomic) char hasSupportsMultipathTCP; 
@property (assign,nonatomic) char supportsMultipathTCP; 
@property (assign,nonatomic) char hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)useAuthProxy;
-(char)hasUrl;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setUseAuthProxy:(char)arg1 ;
-(void)setSupportsMultipathTCP:(char)arg1 ;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(void)setHasUseAuthProxy:(char)arg1 ;
-(char)hasUseAuthProxy;
-(char)supportsMultipathTCP;
-(void)setHasSupportsMultipathTCP:(char)arg1 ;
-(char)hasSupportsMultipathTCP;
-(unsigned)alternativeMultipathTCPPort;
-(void)setHasAlternativeMultipathTCPPort:(char)arg1 ;
-(char)hasAlternativeMultipathTCPPort;
-(NSURL *)nsURL;
@end

