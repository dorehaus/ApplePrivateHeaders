/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	char _deleted;
	char _edited;
	char _shared;
	char _tapped;
	char _visible;
	struct {
		unsigned has_proactiveItemType : 1;
		unsigned has_timeSinceStart : 1;
		unsigned has_deleted : 1;
		unsigned has_edited : 1;
		unsigned has_shared : 1;
		unsigned has_tapped : 1;
		unsigned has_visible : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType; 
@property (assign,nonatomic) char hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart; 
@property (assign,nonatomic) char hasVisible; 
@property (assign,nonatomic) char visible; 
@property (assign,nonatomic) char hasTapped; 
@property (assign,nonatomic) char tapped; 
@property (assign,nonatomic) char hasShared; 
@property (assign,nonatomic) char shared; 
@property (assign,nonatomic) char hasEdited; 
@property (assign,nonatomic) char edited; 
@property (assign,nonatomic) char hasDeleted; 
@property (assign,nonatomic) char deleted; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)deleted;
-(char)shared;
-(void)setShared:(char)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setTapped:(char)arg1 ;
-(void)setEdited:(char)arg1 ;
-(void)setDeleted:(char)arg1 ;
-(void)setHasProactiveItemType:(char)arg1 ;
-(char)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(int)timeSinceStart;
-(void)setHasTimeSinceStart:(char)arg1 ;
-(char)hasTimeSinceStart;
-(void)setHasVisible:(char)arg1 ;
-(char)hasVisible;
-(char)tapped;
-(void)setHasTapped:(char)arg1 ;
-(char)hasTapped;
-(void)setHasShared:(char)arg1 ;
-(char)hasShared;
-(char)edited;
-(void)setHasEdited:(char)arg1 ;
-(char)hasEdited;
-(void)setHasDeleted:(char)arg1 ;
-(char)hasDeleted;
@end

