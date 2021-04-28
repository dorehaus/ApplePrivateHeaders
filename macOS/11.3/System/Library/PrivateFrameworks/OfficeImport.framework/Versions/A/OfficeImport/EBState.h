/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDResources;

@interface EBState : NSObject {

	XlLinkTable* mXlLinkTable;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mSheetNames;
	XlFormulaProcessor* mXlFormulaProcessor;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
-(void)dealloc;
-(id)resources;
-(char)isCancelled;
-(void)setResources:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(id)workbook;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)setWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlLinkTable*)xlLinkTable;
-(XlNameTable*)xlNameTable;
-(ChVector<OcText>*)sheetNames;
@end

