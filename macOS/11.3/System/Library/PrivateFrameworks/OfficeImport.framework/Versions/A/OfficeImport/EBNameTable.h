/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBNameTable : NSObject
+(void)readFromState:(id)arg1 ;
+(id)edNameFromXlName:(XlName*)arg1 name:(OcText*)arg2 state:(id)arg3 ;
+(XlName*)xlNameFromEDName:(id)arg1 state:(id)arg2 ;
+(XlNameTable*)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2 ;
@end

