/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSTTableInfo;


@protocol TSTCellIterating <NSObject>
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@optional
-(TSTTableInfo *)tableInfo;

@required
-(void)terminate;
-(char)getNextCellData:(id*)arg1;
-(void)iterateCellsUsingBlock:(/*^block*/id)arg1;
-(id)nextCellData;

@end

