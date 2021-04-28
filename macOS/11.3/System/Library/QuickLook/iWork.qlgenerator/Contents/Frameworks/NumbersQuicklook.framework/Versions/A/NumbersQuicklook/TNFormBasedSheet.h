/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <NumbersQuicklook/TNSheet.h>

@class TSTTableInfo, NSString;

@interface TNFormBasedSheet : TNSheet {

	TSTTableInfo* _tableInfo;
	NSString* _importedTargetName;
	TSKUIDStruct _tableUID;

}

@property (nonatomic,retain) NSString * importedTargetName;              //@synthesize importedTargetName=_importedTargetName - In the implementation block
@property (nonatomic,retain) TSTTableInfo * tableInfo;                   //@synthesize tableInfo=_tableInfo - In the implementation block
@property (assign,nonatomic) TSKUIDStruct tableUID;                      //@synthesize tableUID=_tableUID - In the implementation block
-(double)contentScale;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSKUIDStruct)tableUID;
-(char)isForm;
-(char)shouldBeDisplayed;
-(void)setTableUID:(TSKUIDStruct)arg1 ;
-(void)clearTableInfoCache;
-(id)initWithContext:(id)arg1 importedTargetName:(id)arg2 ;
-(void)resolveImportedTargetNameInDocumentRoot:(id)arg1 ;
-(NSString *)importedTargetName;
-(void)setImportedTargetName:(NSString *)arg1 ;
@end

