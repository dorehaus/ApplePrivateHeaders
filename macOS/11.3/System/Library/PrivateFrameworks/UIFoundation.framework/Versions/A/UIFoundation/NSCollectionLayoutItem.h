/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutEdgeSpacing, NSArray, NSCollectionLayoutSize, NSUUID, NSString;

@interface NSCollectionLayoutItem : NSObject <NSCopying> {

	char _containsEstimatedSizeItem;
	NSDirectionalEdgeInsets _contentInsets;
	char _hasComputedContainsEstimatedItem;
	NSCollectionLayoutEdgeSpacing* _edgeSpacing;
	NSArray* _supplementaryItems;
	NSCollectionLayoutSize* _size;
	NSUUID* _identifier;
	NSString* _name;
	NSArray* _decorationItems;

}

@property (nonatomic,copy) NSCollectionLayoutSize * size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                         //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                            //@synthesize decorationItems=_decorationItems - In the implementation block
@property (assign,nonatomic) char hasComputedContainsEstimatedItem;              //@synthesize hasComputedContainsEstimatedItem=_hasComputedContainsEstimatedItem - In the implementation block
@property (assign) NSDirectionalEdgeInsets contentInsets; 
@property (copy) NSCollectionLayoutEdgeSpacing * edgeSpacing;                    //@synthesize edgeSpacing=_edgeSpacing - In the implementation block
@property (readonly) NSCollectionLayoutSize * layoutSize; 
+(id)itemWithLayoutSize:(id)arg1 ;
+(id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2 ;
+(id)itemWithSize:(id)arg1 decorationItems:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCollectionLayoutSize *)size;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setSize:(NSCollectionLayoutSize *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(char)isGroup;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(NSCollectionLayoutSize *)layoutSize;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7 ;
-(NSCollectionLayoutEdgeSpacing *)edgeSpacing;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(char)hasComputedContainsEstimatedItem;
-(void)_enumerateItemsWithHandler:(/*^block*/id)arg1 ;
-(void)_enumerateSupplementaryItemsWithHandler:(/*^block*/id)arg1 ;
-(void)setHasComputedContainsEstimatedItem:(char)arg1 ;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(char)hasCustomGroupItemProvider;
-(char)isAuxiliary;
-(char)isDecoration;
-(char)isSupplementary;
-(id)auxiliaryItems;
-(char)containsEstimatedSizeItem;
-(CGSize)_insetSizeForContainer:(id)arg1 ;
-(char)isCustomGroup;
-(char)isAuxillary;
-(id)auxillaryItems;
-(char)ignoresRTL;
-(void)setEdgeSpacing:(NSCollectionLayoutEdgeSpacing *)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(id)_visualDescription;
@end

