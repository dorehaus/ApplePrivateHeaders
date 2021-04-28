/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaArtworkImage.h>
@class NSString, NSData;


@protocol _SFPBMediaArtworkImage <NSObject>
@property (nonatomic,copy) NSString * persistentID; 
@property (nonatomic,copy) NSString * spotlightIdentifier; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,copy) NSString * universalLibraryID; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)persistentID;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setPersistentID:(id)arg1;
-(void)setMediaEntityType:(int)arg1;
-(void)setUniversalLibraryID:(id)arg1;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setSpotlightIdentifier:(id)arg1;
-(NSString *)spotlightIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding> {

	int _mediaEntityType;
	NSString* _persistentID;
	NSString* _spotlightIdentifier;
	NSString* _universalLibraryID;

}

@property (nonatomic,copy) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * spotlightIdentifier;              //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (assign,nonatomic) int mediaEntityType;                       //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,copy) NSString * universalLibraryID;               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)persistentID;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setMediaEntityType:(int)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
@end

