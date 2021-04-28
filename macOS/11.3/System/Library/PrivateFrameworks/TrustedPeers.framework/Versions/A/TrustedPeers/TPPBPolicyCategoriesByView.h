/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying> {

	NSMutableArray* _categories;
	NSString* _view;

}

@property (nonatomic,readonly) char hasView; 
@property (nonatomic,retain) NSString * view;                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * categories;              //@synthesize categories=_categories - In the implementation block
+(Class)categoriesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)view;
-(id)dictionaryRepresentation;
-(void)setView:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)categories;
-(void)setCategories:(NSMutableArray *)arg1 ;
-(void)addCategories:(id)arg1 ;
-(void)clearCategories;
-(unsigned long long)categoriesCount;
-(id)categoriesAtIndex:(unsigned long long)arg1 ;
-(char)hasView;
@end

