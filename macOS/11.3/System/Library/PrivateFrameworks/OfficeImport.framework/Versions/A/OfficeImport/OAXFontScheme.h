/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXFontScheme : NSObject
+(void)readFontScheme:(xmlNode*)arg1 toFontScheme:(id)arg2 drawingState:(id)arg3 ;
+(void)readFontSchemeEntries:(xmlNode*)arg1 font:(id)arg2 ;
+(void)writeTypeface:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)writeFont:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)writeFontScheme:(id)arg1 to:(id)arg2 state:(id)arg3 ;
@end
