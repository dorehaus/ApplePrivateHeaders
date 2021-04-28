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

@class PBDataReader, PBUnknownFields, NSString, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _languageCode;
	double _reviewTime;
	GEOUser* _reviewer;
	double _score;
	NSString* _snippet;
	NSString* _uid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _isChinaSuppressed;
	struct {
		unsigned has_reviewTime : 1;
		unsigned has_score : 1;
		unsigned has_isChinaSuppressed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_languageCode : 1;
		unsigned read_reviewer : 1;
		unsigned read_snippet : 1;
		unsigned read_uid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasSnippet; 
@property (nonatomic,retain) NSString * snippet; 
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) char hasReviewTime; 
@property (assign,nonatomic) double reviewTime; 
@property (nonatomic,readonly) char hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer; 
@property (nonatomic,readonly) char hasUid; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
@property (assign,nonatomic) char hasIsChinaSuppressed; 
@property (assign,nonatomic) char isChinaSuppressed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)languageCode;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(GEOUser *)reviewer;
-(void)setReviewTime:(double)arg1 ;
-(void)setReviewer:(GEOUser *)arg1 ;
-(double)reviewTime;
-(void)setHasReviewTime:(char)arg1 ;
-(char)hasReviewTime;
-(char)hasReviewer;
-(char)hasUid;
-(NSString *)snippet;
-(void)setSnippet:(NSString *)arg1 ;
-(void)setIsChinaSuppressed:(char)arg1 ;
-(char)hasSnippet;
-(char)isChinaSuppressed;
-(void)setHasIsChinaSuppressed:(char)arg1 ;
-(char)hasIsChinaSuppressed;
@end
