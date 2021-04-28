/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSCalculationEngine/TSCECellValue.h>

@interface TSCEErrorCellValue : TSCECellValue {

	TSCEErrorValue* _errorValue;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)format;
-(id)displayString;
-(TSCEErrorValue*)errorValue;
-(void)encodeToArchive:(ErrorCellValueArchive*)arg1 ;
-(TSCEValue*)tsceValue;
-(id)canonicalKeyString;
-(char)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const ErrorCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithErrorValue:(TSCEErrorValue*)arg1 locale:(id)arg2 ;
@end

