/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDWorksheet, CMStyle, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {

	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	long long mMaxPopulatedColumn;
	long long mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;

}
-(void)dealloc;
-(int)width;
-(int)height;
-(unsigned long long)columnCount;
-(char)isVisible;
-(double)defaultColumnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
-(id)columnWidthConvertor;
-(double*)rowGrid;
-(double*)columnGrid;
-(long long)maxRowNumber;
-(double)defaultRowHeight;
-(CGSize)preprocessSizeWithState:(id)arg1 ;
-(id)initWithEDWorksheet:(id)arg1 parent:(id)arg2 ;
-(void)countRowsAndColumnsWithState:(id)arg1 ;
-(void)setRowGrid;
-(double)xlColumnWidthToPoints:(double)arg1 ;
-(void)_initWithState:(id)arg1 ;
-(void)readHyperlinksWithState:(id)arg1 ;
-(void)mapTableAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)preprocessDrawableSizeWithState:(id)arg1 ;
-(void)mapColumnInfosAt:(id)arg1 withState:(id)arg2 ;
-(void)mapWorksheetClassesAtTableNode:(id)arg1 ;
@end

