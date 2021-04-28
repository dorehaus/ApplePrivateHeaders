/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcessGroupMinimal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying> {

	unsigned _categoriesRefcount;
	NSMutableArray* _objects;
	NSDictionary* _categories;

}

@property (nonatomic,retain) NSDictionary * categories;                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned categoriesRefcount;              //@synthesize categoriesRefcount=_categoriesRefcount - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(NSMutableArray *)objects;
-(NSDictionary *)categories;
-(void)setCategories:(NSDictionary *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(id)consumeCachedCategories;
-(void)attachCachedCategories:(id)arg1 refcount:(unsigned)arg2 ;
-(void)addProcess:(id)arg1 ;
-(unsigned)categoriesRefcount;
-(void)setCategoriesRefcount:(unsigned)arg1 ;
@end

