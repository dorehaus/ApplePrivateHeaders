/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorksheet : NSObject
+(id)edSheetWithState:(id)arg1 ;
+(void)setupProcessors:(id)arg1 ;
+(BOOL)readDistinctSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readOtherSheetComponentsWithState:(id)arg1 ;
+(void)readTables:(id)arg1 ;
+(void)readWorksheetViewsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readWorksheetFormatPropertiesFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readColumnInfosFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readHyperlinksFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readOleObjectsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readSheetExtensions:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readCommentTextFrom:(id)arg1 ;
+(void)readPivotTables:(id)arg1 ;
+(void)readSheetExtension:(xmlNode*)arg1 state:(id)arg2 ;
@end

