/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBDocument : NSObject
+(void)setTimeStamp:(WrdDocumentProperties*)arg1 ;
+(id)readFrom:(id)arg1 ;
+(void)readProperties:(id)arg1 document:(id)arg2 ;
+(void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3 ;
+(void)readSectionsFrom:(id)arg1 document:(id)arg2 ;
+(void)readTextBoxesFrom:(id)arg1 ;
+(void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3 ;
-(id)init;
-(id)applicationName;
@end

