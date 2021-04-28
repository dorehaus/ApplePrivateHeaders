/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@interface TSTWidthHeightCollection : NSObject {

	vector<std::__1::pair<TSUCellCoord, double>, std::__1::allocator<std::__1::pair<TSUCellCoord, double>>>* _fittingHeights;
	unordered_map<unsigned short, double, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double>>>* _columnToMaxFittingWidths;

}

@property (nonatomic,readonly) char hasWorkItems; 
-(char)hasWorkItems;
-(void)addFittingHeight:(double)arg1 forCellID:(TSUCellCoord)arg2 ;
-(void)addFittingWidth:(double)arg1 forCellID:(TSUCellCoord)arg2 ;
-(void)enumerateFittingHeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFittingWidthsUsingBlock:(/*^block*/id)arg1 ;
@end

