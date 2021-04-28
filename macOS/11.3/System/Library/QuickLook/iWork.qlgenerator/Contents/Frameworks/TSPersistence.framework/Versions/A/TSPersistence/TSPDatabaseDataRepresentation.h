/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSUtility/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {

	TSPDatabase* _database;
	long long _identifier;

}
-(id)inputStream;
-(long long)dataLength;
-(char)hasSameLocationAs:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 identifier:(long long)arg2 ;
-(sqlite3_blobRef)_openBlob;
-(ZeroCopyInputStream*)createProtobufInputStream;
@end

