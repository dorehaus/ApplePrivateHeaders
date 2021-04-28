/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSSPropertyValueArchiving.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <TSText/TSDMixing.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing> {

	NSMutableArray* _tabs;

}
+(id)tabs;
+(id)instanceWithArchive:(const Message*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)insertTab:(id)arg1 ;
-(id)tabAtIndex:(unsigned long long)arg1 ;
-(void)removeTabAtIndex:(unsigned long long)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithArchive:(const TabsArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTabs:(id)arg1 ;
-(id)tabAtPosition:(double)arg1 ;
-(id)tabAfterPosition:(double)arg1 ;
-(void)setPosition:(double)arg1 forTab:(id)arg2 ;
-(unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3 ;
-(void)saveToArchive:(TabsArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
@end

