/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

@interface TSTCellDictionary : NSObject {

	os_unfair_lock_s _lock;
	map<TSUCellCoord, TSTCell *, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTCell *>>>* _cellsByCoord;
	TSPTemporaryObjectContextDelegate* _temporaryObjectContextDelegate;
	TSPObjectContext* _temporaryContext;
	TSCECellCoordSet* _cellCoordsToStyleUpgradeForFormulatext;

}
-(id)init;
-(void)removeAllCells;
-(void)setCell:(id)arg1 atCellID:(TSUCellCoord)arg2 ;
-(id)cellAtCellID:(TSUCellCoord)arg1 ;
-(id)allCells;
-(void)applyBlockToAllCells:(/*^block*/id)arg1 ;
-(TSCECellCoordSet*)allCellCoords;
-(void)upgradeStyleForFormulatextForCellCoord:(const TSUCellCoord*)arg1 ;
-(char)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const TSUCellCoord*)arg1 ;
-(char)hasCellAtCellID:(TSUCellCoord)arg1 ;
-(char)shouldUpgradeStyleForFormulatextForCellCoord:(const TSUCellCoord*)arg1 ;
@end

