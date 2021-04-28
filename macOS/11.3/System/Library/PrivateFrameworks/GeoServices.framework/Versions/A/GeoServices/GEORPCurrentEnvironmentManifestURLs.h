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

@class PBDataReader, NSString, NSMutableArray;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _environmentDisplayName;
	NSString* _environmentReleaseName;
	NSMutableArray* _urls;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_environmentDisplayName : 1;
		unsigned read_environmentReleaseName : 1;
		unsigned read_urls : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName; 
@property (nonatomic,readonly) char hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName; 
@property (nonatomic,retain) NSMutableArray * urls; 
+(Class)urlType;
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)urls;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)environmentDisplayName;
-(NSString *)environmentReleaseName;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(void)addUrl:(id)arg1 ;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(char)hasEnvironmentDisplayName;
-(char)hasEnvironmentReleaseName;
-(void)setUrls:(NSMutableArray *)arg1 ;
@end

