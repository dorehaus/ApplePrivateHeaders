/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICAvailableTableWidthProviding;
@class ICTable, NSObject, ICTextController, NSMutableDictionary;

@interface ICTableColumnWidthManager : NSObject {

	ICTable* _table;
	NSObject*<ICAvailableTableWidthProviding> _delegate;
	ICTextController* _styler;
	NSMutableDictionary* _cachedIdealColumnWidths;
	NSMutableDictionary* _cachedActualColumnWidths;
	NSMutableDictionary* _cachedMinimumColumnWidths;

}

@property (nonatomic,readonly) NSMutableDictionary * cachedIdealColumnWidths;                          //@synthesize cachedIdealColumnWidths=_cachedIdealColumnWidths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedActualColumnWidths;                         //@synthesize cachedActualColumnWidths=_cachedActualColumnWidths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedMinimumColumnWidths;                        //@synthesize cachedMinimumColumnWidths=_cachedMinimumColumnWidths - In the implementation block
@property (nonatomic,__weak,readonly) ICTable * table;                                                 //@synthesize table=_table - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<ICAvailableTableWidthProviding> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ICTextController * styler;                                              //@synthesize styler=_styler - In the implementation block
@property (nonatomic,readonly) double singleColumnTableWidth; 
-(NSObject*<ICAvailableTableWidthProviding>)delegate;
-(double)widthOfColumn:(id)arg1 ;
-(ICTable *)table;
-(ICTextController *)styler;
-(id)initWithTable:(id)arg1 delegate:(id)arg2 ;
-(double)comfortableColumnWidth;
-(NSMutableDictionary *)cachedActualColumnWidths;
-(double)calculateIdealWidthOfColumn:(id)arg1 ;
-(NSMutableDictionary *)cachedIdealColumnWidths;
-(NSMutableDictionary *)cachedMinimumColumnWidths;
-(double)comfortableNumberOfColumnsOnscreen;
-(id)recalculateActualWidths;
-(double)singleColumnTableWidth;
-(id)invalidateWidthForColumns:(id)arg1 ;
-(id)invalidateAvailableWidth;
@end
