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

@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _maxArticlesShown;
	NSMutableArray* _items;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,retain) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char hasMaxArticlesShown; 
@property (assign,nonatomic) unsigned long long maxArticlesShown;              //@synthesize maxArticlesShown=_maxArticlesShown - In the implementation block
+(Class)itemsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItems:(id)arg1 ;
-(unsigned long long)itemsCount;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(void)setMaxArticlesShown:(unsigned long long)arg1 ;
-(void)setHasMaxArticlesShown:(char)arg1 ;
-(char)hasMaxArticlesShown;
-(unsigned long long)maxArticlesShown;
@end
