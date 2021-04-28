/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellRegionIterating.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating.h>

@class NSMutableArray, NSString;

@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> {

	TSUCellCoord _minCursorCellID;
	NSMutableArray* _iterators;
	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>* _cursorCellIDs;

}

@property (assign,nonatomic) TSUCellCoord minCursorCellID;                   //@synthesize minCursorCellID=_minCursorCellID - In the implementation block
@property (assign,nonatomic) vector<TSUCellCoord cursorCellIDs;              //@synthesize cursorCellIDs=_cursorCellIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * iterators;                     //@synthesize iterators=_iterators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)terminate;
-(TSUCellCoord)getNext;
-(void)addIterator:(id)arg1 ;
-(TSUCellCoord)advanceToCellID:(TSUCellCoord)arg1 ;
-(void)updateCellData:(id)arg1 ;
-(void)updateFormulaForCellData:(id)arg1 ;
-(TSUCellCoord)minCursorCellID;
-(void)setMinCursorCellID:(TSUCellCoord)arg1 ;
-(vector<TSUCellCoord)cursorCellIDs;
-(void)setCursorCellIDs:(vector<TSUCellCoord)arg1 ;
-(NSMutableArray *)iterators;
-(void)setIterators:(NSMutableArray *)arg1 ;
@end

