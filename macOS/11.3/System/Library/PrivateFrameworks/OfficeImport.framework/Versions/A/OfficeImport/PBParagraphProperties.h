/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBParagraphProperties : NSObject
+(void)readAlign:(id)arg1 pptAlignmentType:(int)arg2 ;
+(short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2 ;
+(int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1 ;
+(int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1 ;
+(void)readParagraphProperties:(id)arg1 paragraphProperty:(PptParaProperty*)arg2 bulletStyle:(PptParaProperty9*)arg3 isMaster:(char)arg4 state:(id)arg5 ;
+(void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(PptParaRun*)arg2 bulletStyle:(PptParaProperty9*)arg3 state:(id)arg4 ;
@end

