/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBBorders : NSObject
+(int)convertXlBorderEnumToED:(int)arg1 ;
+(int)convertXlDiagStyleEnumToED:(int)arg1 ;
+(int)convertEDBorderEnumToXl:(int)arg1 ;
+(int)convertEDDiagonalEnumToXl:(int)arg1 ;
+(id)edBordersFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edBordersFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
@end
