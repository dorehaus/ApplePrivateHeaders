/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface QTMetadataItem : NSObject <NSCopying, NSMutableCopying, NSCoding>
+(void)initialize;
+(id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 value:(id)arg2 ;
-(id)initWithKey:(id)arg1 keySpace:(id)arg2 locale:(id)arg3 time:(SCD_Struct_QT1)arg4 value:(id)arg5 extraAttributes:(id)arg6 ;
@end

