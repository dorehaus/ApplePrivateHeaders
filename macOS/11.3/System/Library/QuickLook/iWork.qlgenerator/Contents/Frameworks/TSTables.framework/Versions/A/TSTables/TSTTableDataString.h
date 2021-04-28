/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTTableDataObject.h>

@interface TSTTableDataString : TSTTableDataObject {

	char _shouldWrap;

}

@property (nonatomic,readonly) char shouldWrap;              //@synthesize shouldWrap=_shouldWrap - In the implementation block
+(id)objectWithString:(id)arg1 refCount:(unsigned)arg2 ;
-(id)description;
-(id)string;
-(char)shouldWrap;
-(void)encodeToArchive:(TableDataList_ListEntry*)arg1 archiver:(id)arg2 ;
-(id)initObjectWithString:(id)arg1 refCount:(unsigned)arg2 ;
-(void)loadFromArchive:(const TableDataList_ListEntry*)arg1 unarchiver:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)estimateByteSize;
@end
