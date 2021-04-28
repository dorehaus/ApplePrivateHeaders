/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSSPropertyValueArchiving.h>

@interface TSWPColumns : NSObject <TSSPropertyValueArchiving> {

	double _widthArray[10];
	double _gapArray[9];
	char _equalWidth;
	unsigned long long _columnCount;

}

@property (nonatomic,readonly) unsigned long long columnCount;              //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) char equalWidth;                             //@synthesize equalWidth=_equalWidth - In the implementation block
+(id)columns;
+(id)instanceWithArchive:(const Message*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)columnCount;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(id)initWithArchive:(const ColumnsArchive*)arg1 unarchiver:(id)arg2 ;
-(char)equalWidth;
-(id)initWithColumnCount:(unsigned long long)arg1 ;
-(void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2 ;
-(id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(char)arg2 widthArray:(double*)arg3 gapArray:(double*)arg4 ;
-(void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2 ;
-(double)p_equalGapForEqualWidth:(double)arg1 ;
-(double)p_maxEqualGapForBodyWidth:(double)arg1 ;
-(double)p_equalWidthForEqualGap:(double)arg1 ;
-(id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2 ;
-(void)setEqualWidth:(char)arg1 ;
-(void)saveToArchive:(ColumnsArchive*)arg1 archiver:(id)arg2 ;
-(id)p_description;
-(id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2 assert:(char)arg3 ;
-(id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(char)arg2 widthArray:(double*)arg3 gapArray:(double*)arg4 assert:(char)arg5 ;
-(char)p_validate:(char)arg1 ;
-(void)p_setColumnCount:(unsigned long long)arg1 ;
-(void)p_setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
-(void)p_setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
-(id)copyWithEqualWidth:(char)arg1 ;
-(id)copyWithColumnCount:(unsigned long long)arg1 ;
-(id)copyWithWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
-(id)copyWithGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3 ;
@end
