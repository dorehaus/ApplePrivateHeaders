/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPDataAttributes : NSObject <NSCopying>
+(id)_classRegistry;
+(void)registerDataAttributesClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
+(id)newDataAttributesWithMessage:(const DataAttributes*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMessage:(const DataAttributes*)arg1 ;
-(void)saveToMessage:(DataAttributes*)arg1 ;
@end

