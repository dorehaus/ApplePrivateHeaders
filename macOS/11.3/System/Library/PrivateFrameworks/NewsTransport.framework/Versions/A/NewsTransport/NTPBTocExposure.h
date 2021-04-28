/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying> {

	int _precedingLocation;
	NSData* _tocExposureId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) char hasPrecedingLocation; 
@property (assign,nonatomic) int precedingLocation;                  //@synthesize precedingLocation=_precedingLocation - In the implementation block
@property (nonatomic,readonly) char hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;                 //@synthesize tocExposureId=_tocExposureId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTocExposureId:(NSData *)arg1 ;
-(char)hasTocExposureId;
-(NSData *)tocExposureId;
-(int)precedingLocation;
-(void)setPrecedingLocation:(int)arg1 ;
-(void)setHasPrecedingLocation:(char)arg1 ;
-(char)hasPrecedingLocation;
-(id)precedingLocationAsString:(int)arg1 ;
-(int)StringAsPrecedingLocation:(id)arg1 ;
@end
