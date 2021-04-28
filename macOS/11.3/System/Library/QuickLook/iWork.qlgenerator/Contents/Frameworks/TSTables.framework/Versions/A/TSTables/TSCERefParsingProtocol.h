/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCERefParsingProtocol <NSObject>
@required
-(id)initWithCalcEngine:(id)arg1;
-(RefTypeHolder<TSCERangeRef, 0>*)parseStringAsBaseReference:(id)arg1 withParsingContext:(id)arg2;
-(TSCERangeRef*)parseR1C1Reference:(id)arg1 containingCell:(const TSCECellRef*)arg2 preserveFlagsOut:(TSUPreserveFlags*)arg3;
-(TSCECategoryRef*)parseStringAsCategoryRef:(id)arg1 withParsingContext:(id)arg2;
-(id)parseAsChromeRefWithParsingContext:(id)arg1;
-(RefTypeHolder<TSCERangeRef, 2>*)parseStringAsChromeReference:(id)arg1 withParsingContext:(id)arg2;
-(TSUCellCoord*)parseR1C1Coord:(id)arg1 containingCell:(const TSCECellRef*)arg2 preserveFlagsOut:(TSUPreserveFlags*)arg3;
-(TSCECategoryRef*)parseAsCategoryRefWithParsingContext:(id)arg1;
-(id)parseAsTractRefWithParsingContext:(id)arg1;

@end
