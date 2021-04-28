/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXSection : NSObject
+(id)pageOrientationEnumMap;
+(float)scaleFromPrinterSettings:(id)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(id)pageBorderDisplayEnumMap;
+(void)mapHeader:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapFooter:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapPrinterSettings:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapProperties:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(id)sectionBreakEnumMap;
+(id)pageBorderDepthEnumMap;
+(id)pageBorderOffsetEnumMap;
+(id)lineNumberRestartEnumMap;
+(id)verticalJustificationEnumMap;
+(id)chapterNumberSeparatorEnumMap;
@end

