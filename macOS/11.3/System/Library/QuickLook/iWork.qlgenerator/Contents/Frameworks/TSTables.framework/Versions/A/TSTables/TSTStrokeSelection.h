/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSKit/TSKSelection.h>

@interface TSTStrokeSelection : TSKSelection {

	unsigned _mask;

}

@property (nonatomic,readonly) unsigned mask;              //@synthesize mask=_mask - In the implementation block
+(Class)archivedSelectionClass;
+(id)strokeSelectionWithMask:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)mask;
-(id)initWithArchive:(const StrokeSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(StrokeSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStrokeVisibilityMask:(unsigned)arg1 ;
@end

