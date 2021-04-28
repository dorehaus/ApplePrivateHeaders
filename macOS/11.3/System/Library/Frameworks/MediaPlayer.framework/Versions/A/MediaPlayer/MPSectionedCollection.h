/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface MPSectionedCollection : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sectionedItems;
	NSArray* _sections;

}

@property (nonatomic,readonly) id firstSection; 
@property (nonatomic,readonly) id lastSection; 
@property (nonatomic,readonly) id firstItem; 
@property (nonatomic,readonly) id lastItem; 
@property (nonatomic,readonly) long long totalItemCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)firstItem;
-(long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)lastItem;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)allItems;
-(id)allSections;
-(id)lastSection;
-(id)_stateDumpObject;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(char)hasSameContentAsSectionedCollection:(id)arg1 ;
-(long long)totalItemCount;
-(id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(/*^block*/id)arg2 isUpdatedBlock:(/*^block*/id)arg3 ;
-(id)changeDetailsToSectionedCollection:(id)arg1 applyingUIKitWorkarounds:(char)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(void)_initializeAsEmptySectionedCollection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
@end

