/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface TSCEUndoTractList : NSObject <NSCopying, NSFastEnumeration> {

	struct {
		unsigned char _flags;
	}  _preserveFlags;
	NSMutableArray* _tracts;

}

@property (assign,nonatomic) TSUPreserveFlags preserveFlags;              //@synthesize preserveFlags=_preserveFlags - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS86*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithArchive:(const ASTNodeArrayArchive_ASTUidTractList*)arg1 ;
-(void)saveToArchive:(ASTNodeArrayArchive_ASTUidTractList*)arg1 ;
-(void)setPreserveFlags:(TSUPreserveFlags)arg1 ;
-(char)remapUsingUidMap:(const TSKUIDStructMap*)arg1 ;
-(char)remapUsingColumnUidMap:(const TSKUIDStructMap*)arg1 rowUidMap:(const TSKUIDStructMap*)arg2 clearIfMissing:(char)arg3 ;
-(void)appendUidTract:(id)arg1 ;
-(id)firstTractWithPurpose:(unsigned char)arg1 ;
-(void)addToIncludedUidsTractColumnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 ;
-(id)includedUidsTract;
-(void)dropTract:(id)arg1 ;
-(void)addTractAtFront:(id)arg1 ;
-(void)addToIncludedUidsTractColumnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 rowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 isRangeRef:(char)arg3 preserveRectangularRange:(char)arg4 ;
-(id)excludedUidsTract;
-(void)removeFromExcludedUidsTractColumnUidsSet:(const unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>*)arg1 ;
-(void)removeFromExcludedUidsTractRowUidsSet:(const unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>*)arg1 ;
-(unsigned char)tractCount;
-(id)preMergeUidTract;
-(id)preMoveRegionUidTract;
-(id)activeUidTract;
-(id)removedByMoveUidTract;
-(void)addToIncludedUidsTractColumnUid:(TSKUIDStruct)arg1 rowUid:(TSKUIDStruct)arg2 ;
-(void)addToExcludedUidsTractColumnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)addToExcludedUidsTractRowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)addToExcludedTractUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 isRows:(char)arg2 ;
-(void)removeFromExcludedUidsTractColumnUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)removeFromExcludedUidsTractRowUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)uidTractAtIndex:(unsigned char)arg1 ;
-(void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)arg1 ;
-(TSUPreserveFlags)preserveFlags;
@end

