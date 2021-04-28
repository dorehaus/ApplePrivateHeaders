/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleScriptKit/AppleScriptKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASKDataSource, NSMutableArray, NSObject;

@interface ASKDataRow : NSObject <NSCopying> {

	ASKDataSource* _dataSource;
	NSMutableArray* _cells;
	NSObject* _representedObject;

}
+(id)rowForDataSource:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setRepresentedObject:(id)arg1 ;
-(id)contents;
-(id)objectSpecifier;
-(void)setContent:(id)arg1 ;
-(id)content;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(id)representedObject;
-(id)cells;
-(id)columns;
-(void)removeAllCells;
-(unsigned long long)objectIndex_ask;
-(long long)compareDataRow:(id)arg1 ;
-(void)removeFromCellsAtIndex:(unsigned long long)arg1 ;
-(void)insertInCells:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFromColumnsAtIndex:(unsigned long long)arg1 ;
-(void)insertInColumns:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)cellWithName:(id)arg1 ;
-(void)addInCells:(id)arg1 ;
-(void)replaceInCells:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceInColumns:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)valueInCellsWithUniqueID:(long long)arg1 ;
-(id)initForDataSource:(id)arg1 ;
@end

