/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class NSMutableArray, NSString;

@interface CSVMapper : CMMapper {

	NSMutableArray* mRows;
	NSString* mFileName;
	unsigned long long mColumnCount;
	CGSize mPageSize;

}
-(CGSize)pageSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4 ;
@end

