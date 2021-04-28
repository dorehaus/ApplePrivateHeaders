/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSCyclerBookmarkRepresentation.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration> {

	NSMutableArray* _children;

}

@property (nonatomic,readonly) unsigned long long numberOfChildren; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_WB34*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addChild:(id)arg1 ;
-(char)isEquivalent:(id)arg1 ;
-(unsigned long long)numberOfChildren;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1 ;
-(char)_tryToDeleteDescendant:(id)arg1 ;
-(char)containsChild:(id)arg1 ;
-(char)containsDescendant:(id)arg1 ;
-(id)descendantWithUniqueIdentifier:(id)arg1 ;
-(id)allDescendantsPassingTest:(/*^block*/id)arg1 ;
-(id)randomDescendantPassingTest:(/*^block*/id)arg1 ;
-(void)deleteChild:(id)arg1 ;
-(void)deleteDescendant:(id)arg1 ;
-(void)deleteAllChildren;
-(id)randomDescendant;
-(id)randomListDescendant;
@end

