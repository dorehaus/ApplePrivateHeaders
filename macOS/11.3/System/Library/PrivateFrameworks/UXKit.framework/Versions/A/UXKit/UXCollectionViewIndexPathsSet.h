/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableIndexSet, NSMutableDictionary;

@interface UXCollectionViewIndexPathsSet : NSObject <NSCopying, NSMutableCopying> {

	NSMutableIndexSet* _sectionIndexes;
	NSMutableDictionary* _sectionToItemIndexesMap;

}
+(id)indexPathsSet;
+(id)indexPathsSetWithIndexPath:(id)arg1 ;
+(id)indexPathsSetWithIndexPaths:(id)arg1 ;
+(id)indexPathsSetWithIndexPathsSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(char)containsIndexPath:(id)arg1 ;
-(id)allIndexPaths;
-(id)sections;
-(id)initWithIndexPath:(id)arg1 ;
-(id)initWithIndexPaths:(id)arg1 ;
-(id)initWithIndexPathsSet:(id)arg1 ;
-(void)_addIndexPathsSet:(id)arg1 ;
-(id)_itemIndexesForSection:(unsigned long long)arg1 allowingCreation:(char)arg2 ;
-(void)_removeItemIndexesForSection:(unsigned long long)arg1 ;
-(void)_enumerateSectionItemIndexesWithBlock:(/*^block*/id)arg1 ;
-(void)_addOneIndexPath:(id)arg1 ;
-(void)_removeOneIndexPath:(id)arg1 ;
-(id)indexPathsForSection:(long long)arg1 ;
-(id)indexPathsForSections:(id)arg1 ;
-(id)itemsInSection:(long long)arg1 ;
-(id)firstIndexPath;
-(id)lastIndexPath;
-(void)enumerateIndexPathsUsingBlock:(/*^block*/id)arg1 ;
@end
