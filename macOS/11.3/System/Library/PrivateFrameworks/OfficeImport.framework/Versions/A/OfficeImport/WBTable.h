/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTable : NSObject
+(void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3 ;
+(void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
+(char)isTableFloating:(const WrdTableProperties*)arg1 tracked:(const WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3 ;
+(char)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
@end

