/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArray.h>

@interface TSPMutableLargeUUIDArray : TSPAbstractMutableLargeArray
+(Class)arraySegmentClass;
-(void)addUUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)saveToMessage:(LargeUUIDArray*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeUUIDArray*)arg1 unarchiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)UUIDAtIndex:(unsigned long long)arg1 ;
-(void)insertUUID:(UUIDData<TSP::UUIDData>)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceUUIDAtIndex:(unsigned long long)arg1 withUUID:(UUIDData<TSP::UUIDData>)arg2 ;
@end

